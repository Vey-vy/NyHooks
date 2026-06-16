#pragma once
#include "Games/Ny.hpp"
#include "Util/Log/Log.hpp"
#include "Games/Classes/script/scrNativeCallContext.hpp"

class NativeCallContext : public rage::scrNativeCallContext
{
public:
    static constexpr std::size_t MAX_VECTOR_SLOT = 4;

    NativeCallContext();

    template <typename T>
    void PushArg(T &&value)
    {
        using raw_t = std::remove_cv_t<std::remove_reference_t<T>>;

        if constexpr (std::is_same_v<raw_t, rage::vector3>)
        {
            PushVectorValue(std::forward<T>(value));
        }
        else if constexpr (std::is_pointer_v<raw_t> && std::is_same_v<std::remove_cv_t<std::remove_pointer_t<raw_t>>, rage::vector3>)
        {
            PushVectorPointer(std::forward<T>(value));
        }
        else
        {
            rage::scrNativeCallContext::push_arg(std::forward<T>(value));
        }
    }

    rage::vector3 *m_ScriptVectors[MAX_VECTOR_SLOT];
    rage::vector4 m_VectorResults[MAX_VECTOR_SLOT];

private:
    template <typename Vec>
    void PushVectorValue(Vec &&value)
    {
        if (auto *storage = ReserveVectorSlot(nullptr))
        {
            storage->x = value.x;
            storage->y = value.y;
            storage->z = value.z;
            storage->w = 0.0f;
        }
    }

    template <typename Ptr>
    void PushVectorPointer(Ptr &&value)
    {
        auto ptr_value = value;
        if (!ptr_value)
        {
            rage::scrNativeCallContext::push_arg(ptr_value);
            return;
        }

        auto *writable_ptr = const_cast<rage::vector3 *>(ptr_value);
        if (auto *storage = ReserveVectorSlot(writable_ptr))
        {
            storage->x = writable_ptr->x;
            storage->y = writable_ptr->y;
            storage->z = writable_ptr->z;
            storage->w = 0.0f;
        }
    }

    rage::vector4 *ReserveVectorSlot(rage::vector3 *original)
    {
        if (m_nDataCount >= MAX_VECTOR_SLOT)
        {
            LOG_FATAL << "NativeCallContext vector stack overflow (" << MAX_VECTOR_SLOT << ")";
            return nullptr;
        }

        const auto slot = m_nDataCount++;
        m_ScriptVectors[slot] = original;
        m_pOriginalData[slot] = original;

        auto *storage = &m_TemporaryData[slot];

        auto *arg_buffer = reinterpret_cast<std::uintptr_t *>(m_pArgs);
        *reinterpret_cast<rage::vector3 **>(arg_buffer + m_nArgCount) = reinterpret_cast<rage::vector3 *>(storage);
        ++m_nArgCount;

        return storage;
    }

    uint32_t m_ReturnStack[10];
    uint32_t m_ArgStack[100];
};

class NativeInvoker : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    bool CacheHandlers();

    void BeginCall();
    void EndCall(rage::scrNativeHash hash);
    rage::scrNativeHandler GetHandler(rage::scrNativeHash hash);

    template <typename Ret, typename... Args>
    Ret Call(std::uint32_t hash, Args &&...args)
    {
        BeginCall();
        (PushArg(std::forward<Args>(args)), ...);
        EndCall(hash);

        if constexpr (!std::is_same_v<Ret, void>)
        {
            return GetReturnValue<Ret>();
        }
    }

    template <typename T = std::uint32_t>
    void PushArg(T &&value)
    {
        m_CallContext.push_arg(std::forward<T>(value));
    }

    template <typename T>
    T &GetReturnValue()
    {
        return *m_CallContext.get_return_value<T>();
    }

    using RegisterNativeCommand = int(__cdecl *)(int a1, int a2);
    RegisterNativeCommand m_RegisterNativeCommand;
    using GetNativeHandler = void *(_stdcall *)(unsigned int a1);
    GetNativeHandler m_GetNativeHandler;
    void *m_NativeRegistration;
    using InitNativeTable = bool(__fastcall *)(int a1, int a2);
    InitNativeTable m_InitNativeTable;
    using FixVectors = int(__thiscall *)(void *_this);
    FixVectors m_FixVectors;

private:
    std::unordered_map<rage::scrNativeHash, rage::scrNativeHandler> m_HandlerCache;
    NativeCallContext m_CallContext;
    bool m_HandlersCached = false;
};