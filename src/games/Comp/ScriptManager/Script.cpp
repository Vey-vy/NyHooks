#include "script.hpp"
#include "Games/Ny.hpp"
#include "ScriptManager.hpp"

#include "Util/Log/Log.hpp"

Script::Script(ScriptFunc func) : m_Func(func)
{
    m_Fiber = CreateFiber(
        0,
        [](void *param)
        {
            static_cast<Script *>(param)->FiberFunc();
        },
        this);

    if (!m_Fiber)
    {
        LOG_FATAL << "Failed to create fiber";
    }
}

Script::~Script()
{
    if (m_Fiber != nullptr)
    {
        DeleteFiber(m_Fiber);
        m_Fiber = nullptr;
    }
}

bool Script::Tick()
{
    if (m_Fiber == nullptr)
    {
        return false;
    }

    m_RetFiber = GetCurrentFiber();

    SwitchToFiber(m_Fiber);

    return m_Func != nullptr;
}

void Script::Yields()
{
    if (m_RetFiber == nullptr)
        return;

    SwitchToFiber(m_RetFiber);
}

void Script::Yields(time_t minSleepMs)
{
    const auto deadline = std::clock() + minSleepMs;
    do
    {
        Yields();
    } while (std::clock() < deadline);
}

Script *Script::GetCurrent()
{
    return static_cast<Script *>(GetFiberData());
}

HANDLE Script::GetModule() const
{
    return NyManager::Get()->GetComp<ScriptManager>()->GetModule(this);
}

bool Script::IsCurrent() const noexcept
{
    return GetCurrentFiber() == m_Fiber;
}

void Script::Stop()
{
    if (m_Fiber != nullptr)
    {
        DeleteFiber(m_Fiber);
        m_Fiber = nullptr;
        m_Func = nullptr;
    }
}

void Script::FiberFunc()
{
    try
    {
        if (m_Func)
            m_Func();
    }
    catch (std::exception)
    {
    }

    m_Func = nullptr;

    while (true)
    {
        Yields();
    }
}