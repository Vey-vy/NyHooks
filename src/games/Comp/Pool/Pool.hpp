#pragma once
#include "Games/Ny.hpp"
#include "Games/Classes/rage/fwPool.hpp"

class Pool : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    CPool<void *> *GetPed()
    {
        return *m_PedPool;
    }

    CPool<void *> *GetVehicle()
    {
        return *m_VehiclePool;
    }

    CPool<void *> *GetObject()
    {
        return *m_ObjectPool;
    }

private:
    CPool<void *> **m_PedPool;
    CPool<void *> **m_VehiclePool;
    CPool<void *> **m_ObjectPool;
};