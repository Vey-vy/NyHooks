#pragma once
#include "games/Ny.hpp"
#include "Script.hpp"
#include "Util/VectorMap.hpp"

class ScriptManager : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    void Add(HMODULE hmod, std::unique_ptr<Script> &&scr);
    [[nodiscard]] HMODULE GetModule(const Script *scr);
    void RemoveScripts(HMODULE hmod);
    void RemoveScript(ScriptFunc func);
    [[nodiscard]] size_t GetNum(HMODULE hmod) const;

    void Tick();
private:
    uint32_t m_ScriptThread = 0;
    VectorMap<HMODULE, std::unique_ptr<Script>> m_Scripts{};
};