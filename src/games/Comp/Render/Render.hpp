#pragma once
#include "games/Ny.hpp"

class Render : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    IDirect3DDevice9** m_D3D9Device = nullptr;
};