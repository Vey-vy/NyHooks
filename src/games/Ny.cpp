#include "Ny.hpp"

void NyManager::Init()
{
    for (auto &game : m_Base)
    {
        game->Init();
    }
}

void NyManager::Shutdown()
{
    for (auto &game : m_Base)
    {
        game->Shutdown();
    }
}

NyBase *NyManager::FindComp(const std::string &name)
{
    for (auto &game : m_Base)
    {
        if (game->GetName() == name)
            return game.get();
    }

    return nullptr;
}

bool NyManager::HasComp(const std::string &name)
{
    return FindComp(name) != nullptr;
}

bool NyManager::RemoveComp(const std::string &name)
{
    auto it = std::find_if(
        m_Base.begin(),
        m_Base.end(),
        [&](const std::unique_ptr<NyBase> &game)
        {
            return game->GetName() == name;
        });

    if (it == m_Base.end())
        return false;

    m_Base.erase(it);

    return true;
}

void NyManager::ScanAll()
{
    for (auto &game : m_Base)
    {
        game->Scan();
    }
}

size_t NyManager::Count() const
{
    return m_Base.size();
}

std::vector<std::string> NyManager::GetCompNames() const
{
    std::vector<std::string> names;
    names.reserve(m_Base.size());

    for (const auto &game : m_Base)
    {
        names.push_back(game->GetName());
    }

    return names;
}

void NyManager::Clear()
{
    m_Base.clear();
}

NyManager *NyManager::Get()
{
    static NyManager instance;
    return &instance;
}