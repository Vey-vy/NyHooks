#pragma once
#include "Games/Ny.hpp"

class Txd : public NyBase
{
public:
    virtual bool Init();
    virtual bool Shutdown();
    virtual bool Scan();
    virtual std::string GetName();

    using AddTxdSlot = int32_t (*)(const char *);
    AddTxdSlot m_AddTxdSlot;
    using LoadTxdSlot = bool (*)(int32_t, const char *);
    LoadTxdSlot m_LoadTxdSlot;
    using FindTxdSlot = int (*)(int);
    FindTxdSlot m_FindTxdSlot;
    using StoreLoadTxd = bool (*)(int, int);
    StoreLoadTxd m_StoreLoadTxd;
    using StoreAddRef = int (*)(int);
    StoreAddRef m_StoreAddRef;
    using PushCurrentTxd = int (*)();
    PushCurrentTxd m_PushCurrentTxd;
    using SetCurrentTxd = void (*)(int);
    SetCurrentTxd m_SetCurrentTxd;
    using PopCurrentTxd = int (*)(int);
    PopCurrentTxd m_PopCurrentTxd;
    void* m_TxdPool;
    void* m_Txd;
};