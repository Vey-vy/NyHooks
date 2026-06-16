#pragma once
#include "games/Ny.hpp"

class fiDevice;

class File : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    using FipackfileCtor = void(__thiscall *)(void *fipackfile);
    FipackfileCtor m_FipackfileCtor;
    using FipackfileOpen = bool(__thiscall *)(void *, const char *, bool, bool, int);
    FipackfileOpen m_FipackfileOpen;
    using FipackfileMount = void(__thiscall *)(void *, const char *);
    FipackfileMount m_FipackfileMount;
    using FipackfileClose = void(__thiscall *)(void *);
    FipackfileClose m_FipackfileClose;
    void *m_FipackfileVtable;
    using FideviceGetDevice = fiDevice *(__stdcall *)(const char *, bool);
    FideviceGetDevice m_FideviceGetDevice;
    using FideviceUnmount = void(__cdecl *)(const char *);
    FideviceUnmount m_FideviceUnmount;
    using FideviceMountGlobal = void(__cdecl *)(const char *, void *, bool);
    FideviceMountGlobal m_FideviceMountGlobal;
};