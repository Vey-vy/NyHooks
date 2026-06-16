#include "ScriptManager.hpp"
#include "Util/Log/Log.hpp"

bool ScriptManager::Init()
{
    return true;
}

bool ScriptManager::Shutdown()
{
    m_Scripts.Clear();
    m_ScriptThread = 0;
    return true;
}

bool ScriptManager::Scan()
{
    return true;
}

std::string ScriptManager::GetName()
{
    return "Script Manager";
}

void ScriptManager::Add(HMODULE hmod, std::unique_ptr<Script> &&scr)
{
    m_Scripts.Emplace(std::move(hmod), std::move(scr));
}

HMODULE ScriptManager::GetModule(const Script *scr)
{
    for (const auto &pair : m_Scripts)
    {
        auto &mod = pair.first;
        auto &scripts = pair.second;

        for (const auto &s : scripts)
        {
            if (s.get() == scr)
                return mod;
        }
    }
    return nullptr;
}

void ScriptManager::RemoveScripts(HMODULE hmod)
{
    auto it = m_Scripts.Find(hmod);
    if (it != m_Scripts.End())
    {
        for (auto &scr : it->second)
            scr->Stop();
        m_Scripts.Erase(it);
    }
}

void ScriptManager::RemoveScript(ScriptFunc func)
{
    for (auto it = m_Scripts.Begin(); it != m_Scripts.End();)
    {
        auto &vec = it->second;
        for (auto vit = vec.begin(); vit != vec.end();)
        {
            if ((*vit)->m_Func == func)
            {
                (*vit)->Stop();
                vit = vec.erase(vit);
            }
            else
            {
                ++vit;
            }
        }

        if (vec.empty())
            it = m_Scripts.Erase(it);
        else
            ++it;
    }
}

size_t ScriptManager::GetNum(HMODULE hmod) const
{
    return m_Scripts.At(hmod).size();
}

void ScriptManager::Tick()
{
    if (m_ScriptThread != _Thrd_id())
    {
        m_ScriptThread = _Thrd_id();

        if (!IsThreadAFiber())
            ConvertThreadToFiber(nullptr);
    }

    Script::m_RetFiber = GetCurrentFiber();

    for (auto it = m_Scripts.Begin(); it != m_Scripts.End();)
    {
        auto &vec = it->second;
        for (auto vit = vec.begin(); vit != vec.end();)
        {
            bool ok = false;
            try
            {
                ok = (*vit)->Tick();
            }
            catch (...)
            {
                LOG_FATAL << "Script from module %p crashed during tick and will be removed." << (*vit)->GetModule();
            }

            if (ok)
                ++vit;
            else
                vit = vec.erase(vit);
        }

        if (vec.empty())
            it = m_Scripts.Erase(it);
        else
            ++it;
    }
}