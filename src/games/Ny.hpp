#pragma once

#include "Pch.hpp"
#include "Util/Log/Log.hpp"

class NyBase
{
public:
    virtual ~NyBase() = default;

    virtual bool Init() = 0;
    virtual bool Shutdown() = 0;
    virtual bool Scan() = 0;
    virtual std::string GetName() = 0;
};

class NyManager
{
public:
    void Init();
    void Shutdown();

    template <typename T>
    T *GetComp()
    {
        static_assert(std::is_base_of_v<NyBase, T>,
                      "T must derive from NyBase");

        for (auto &game : m_Base)
        {
            if (auto ptr = dynamic_cast<T *>(game.get()))
                return ptr;
        }

        return nullptr;
    }

    template <typename T>
    T *GetCompByName(const std::string &name)
    {
        static_assert(std::is_base_of_v<NyBase, T>,
                      "T must derive from NyBase");

        for (auto &game : m_Base)
        {
            if (game->GetName() == name)
                return dynamic_cast<T *>(game.get());
        }

        return nullptr;
    }

    template <typename T, typename... Args>
    T *AddComp(Args &&...args)
    {
        static_assert(std::is_base_of_v<NyBase, T>,
                      "T must derive from NyBase");

        auto game = std::make_unique<T>(std::forward<Args>(args)...);
        T *ptr = game.get();
        m_Base.push_back(std::move(game));
        return ptr;
    }

    NyBase *FindComp(const std::string &name);
    bool HasComp(const std::string &name);
    bool RemoveComp(const std::string &name);

    void ScanAll();

    size_t Count() const;

    std::vector<std::string> GetCompNames() const;

    void Clear();

    static NyManager *Get();

private:
    std::vector<std::unique_ptr<NyBase>> m_Base;
};