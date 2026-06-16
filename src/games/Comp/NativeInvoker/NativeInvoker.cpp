#include "NativeInvoker.hpp"
#include "Core/Memory/MemoryManager.hpp"
#include "Crossmap.hpp"

NativeCallContext::NativeCallContext()
{
    m_pReturn = &m_ReturnStack[0];
    m_pArgs = &m_ArgStack[0];
}

bool NativeInvoker::Init()
{
    if (CacheHandlers())
    {
        return true;
    }

    return false;
}

bool NativeInvoker::Shutdown()
{
    m_HandlersCached = false;
    m_HandlerCache.clear();
    return true;
}

bool NativeInvoker::Scan()
{
    if (Pointer ptr = MemoryManager::Get()->AddPattern("RegisterNativeCommand", PROCESS, "FF 74 24 08 FF 74 24 08 E8 ? ? ? ? 84 C0 75 13 6A 00 FF 74 24 08 68 ? ? ? ? E8 ? ? ? ? 83 C4 0C C3"))
    {
        m_RegisterNativeCommand = ptr.as<RegisterNativeCommand>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("GetNativeHandler", PROCESS, "0F B6 46 03 C1 E7 08 0B F8 57 E8 ? ? ? ?"))
    {
        m_GetNativeHandler = ptr.add(11).rip().as<GetNativeHandler>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("InitNativeTable", PROCESS, "51 55 8B EA B2 01"))
    {
        m_InitNativeTable = ptr.as<InitNativeTable>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("NativeRegistrationTable", PROCESS, "C7 05 ? ? ? ? ? ? ? ? 66 3B C2"))
    {
        m_NativeRegistration = *ptr.add(2).as<void **>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("FixVectors", PROCESS, "8D 8C 24 ? ? ? ? E8 ? ? ? ? 8B 44 24 34 2B 44 24 24"))
    {
        m_FixVectors = ptr.add(8).rip().as<FixVectors>();
    }
    return true;
}

std::string NativeInvoker::GetName()
{
    return "Native Invoker";
}

bool NativeInvoker::CacheHandlers()
{
    if (m_HandlersCached)
        return false;

    size_t i = 0;
    for (const auto &mapping : g_Crossmap)
    {
        auto raw = m_GetNativeHandler(mapping);
        rage::scrNativeHandler handler = reinterpret_cast<rage::scrNativeHandler>(raw);
        m_HandlerCache.emplace(mapping, handler);
        ++i;
    }

    m_HandlersCached = true;
    return m_HandlersCached;
}

void NativeInvoker::BeginCall()
{
    m_CallContext.reset();
}

void NativeInvoker::EndCall(rage::scrNativeHash hash)
{
    if (!m_HandlersCached)
        CacheHandlers();

    if (m_Cleaning)
        return;

    if (auto it = m_HandlerCache.find(hash); it != m_HandlerCache.end())
    {
        if (const auto &handler = it->second)
        {
            [this, hash, handler]
            {
                __try
                {
                    handler(&m_CallContext);
                    m_FixVectors(&m_CallContext);
                }
                __except (EXCEPTION_EXECUTE_HANDLER)
                {
                    // log_native_failure(hash);
                }
            }();
        }
        else
        {
            LOG_FATAL << "Failed to find handler for native " << HEX_TO_UPPER(hash);
        }
    }
    else
    {
        [hash]()
        {
            LOG_FATAL << "Failed to find " << HEX_TO_UPPER(hash) << " native's handler.";
        }();
    }
}

rage::scrNativeHandler NativeInvoker::GetHandler(rage::scrNativeHash hash)
{
    CacheHandlers();

    for (const auto &[key, handler] : m_HandlerCache)
    {
        if (key == hash)
        {
            return handler;
        }
    }
    return nullptr;
}