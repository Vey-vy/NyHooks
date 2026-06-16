#pragma once

#include <unordered_map>
#include <vector>

template <typename K, typename V>
class VectorMap
{
private:
    using VecT = std::vector<V>;
    using MapT = std::unordered_map<K, VecT>;

    MapT Map{};

public:
    // STL compatibility
    [[nodiscard]] typename MapT::iterator begin() noexcept
    {
        return Map.begin();
    }

    [[nodiscard]] typename MapT::iterator end() noexcept
    {
        return Map.end();
    }

    [[nodiscard]] typename MapT::const_iterator begin() const noexcept
    {
        return Map.begin();
    }

    [[nodiscard]] typename MapT::const_iterator end() const noexcept
    {
        return Map.end();
    }

    [[nodiscard]] typename MapT::const_iterator cbegin() const noexcept
    {
        return Map.cbegin();
    }

    [[nodiscard]] typename MapT::const_iterator cend() const noexcept
    {
        return Map.cend();
    }

    // PascalCase API
    [[nodiscard]] typename MapT::iterator Begin() noexcept
    {
        return Map.begin();
    }

    [[nodiscard]] typename MapT::iterator End() noexcept
    {
        return Map.end();
    }

    [[nodiscard]] typename MapT::const_iterator CBegin() const noexcept
    {
        return Map.cbegin();
    }

    [[nodiscard]] typename MapT::const_iterator CEnd() const noexcept
    {
        return Map.cend();
    }

    [[nodiscard]] VecT &At(const K &Key)
    {
        return Map.at(Key);
    }

    [[nodiscard]] const VecT &At(const K &Key) const
    {
        return Map.at(Key);
    }

    [[nodiscard]] typename MapT::iterator Find(const K &Key)
    {
        return Map.find(Key);
    }

    [[nodiscard]] typename MapT::const_iterator Find(const K &Key) const
    {
        return Map.find(Key);
    }

    [[nodiscard]] bool Contains(const K &Key) const
    {
        return Find(Key) != end();
    }

    void Emplace(K &&Key, V &&Value)
    {
        auto Entry = Find(Key);

        if (Entry == End())
        {
            VecT Vec{};
            Vec.emplace_back(std::move(Value));
            Map.emplace(std::move(Key), std::move(Vec));
        }
        else
        {
            Entry->second.emplace_back(std::move(Value));
        }
    }

    void Erase(const K &Key) noexcept
    {
        Map.erase(Key);
    }

    auto Erase(typename MapT::const_iterator It) noexcept
    {
        return Map.erase(It);
    }

    [[nodiscard]] size_t Size() const noexcept
    {
        return Map.size();
    }

    void Clear() noexcept
    {
        Map.clear();
    }

    [[nodiscard]] VecT *At(size_t Index) noexcept
    {
        size_t I = 0;

        for (auto &Entry : Map)
        {
            if (I == Index)
            {
                return &Entry.second;
            }

            ++I;
        }

        return nullptr;
    }

    [[nodiscard]] const VecT *At(size_t Index) const noexcept
    {
        size_t I = 0;

        for (const auto &Entry : Map)
        {
            if (I == Index)
            {
                return &Entry.second;
            }

            ++I;
        }

        return nullptr;
    }

    void Erase(size_t Index) noexcept
    {
        size_t I = 0;

        for (auto It = Map.cbegin(); It != Map.cend(); ++It)
        {
            if (I == Index)
            {
                Map.erase(It);
                return;
            }

            ++I;
        }
    }
};