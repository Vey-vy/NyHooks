#include "Exports.hpp"
#include "Games/Ny.hpp"
#include "Games/Comp/NativeInvoker/NativeInvoker.hpp"
#include "Games/Comp/ScriptManager/ScriptManager.hpp"
#include "Games/Comp/Pool/Pool.hpp"
#include "Core/DirectX/DirectX.hpp"
#include "Core/DirectX/Texture.hpp"

template <typename Ret, typename... Args>
Ret Invoke(std::uint32_t hash, Args &&...args)
{
    NyManager::Get()->GetComp<NativeInvoker>()->Call<Ret>(hash, args...);
}

void presentCallbackRegister(PresentCallback cb)
{
    static int priority = 1;

    DirectX::Get()->AddCallbacks(
        [cb]()
        { cb(nullptr); },
        priority++);
}

void presentCallbackUnregister(PresentCallback cb)
{
    DirectX::Get()->RemoveCallbacks([cb]()
                                    { cb(nullptr); });
}

void keyboardHandlerRegister(KeyboardHandler handler)
{
    DirectX::Get()->AddkeyboardHandler(handler);
}

void keyboardHandlerUnregister(KeyboardHandler handler)
{
    DirectX::Get()->RemovekeyboardHandler(handler);
}

eGameVersion getGameVersion()
{
    return VER_1_2_0_59;
}

int getNyVersion()
{
    return 1.0;
}

void scriptWait(DWORD time)
{
    Script::GetCurrent()->Yields(time);
}

void scriptRegister(HMODULE module, void (*LP_SCRIPT_MAIN)())
{
    NyManager::Get()->GetComp<ScriptManager>()->Add(module, std::make_unique<Script>(LP_SCRIPT_MAIN));
}

void scriptRegisterAdditionalThread(HMODULE module, void (*LP_SCRIPT_MAIN)())
{
    scriptRegister(module, LP_SCRIPT_MAIN);
}

void scriptUnregister(HMODULE module)
{
    NyManager::Get()->GetComp<ScriptManager>()->RemoveScripts(module);
}

void scriptUnregister(void (*LP_SCRIPT_MAIN)())
{
    NyManager::Get()->GetComp<ScriptManager>()->RemoveScript(LP_SCRIPT_MAIN);
}

// UINT64 *getGlobalPtr(int globalId)
// {

// }

int worldGetAllVehicles()
{
    return NyManager::Get()->GetComp<Pool>()->GetVehicle()->get_size();
}
int worldGetAllPeds()
{
    return NyManager::Get()->GetComp<Pool>()->GetPed()->get_size();
}
int worldGetAllObjects()
{
    return NyManager::Get()->GetComp<Pool>()->GetObject()->get_size();
}
int worldGetAllPickups()
{
    return 0;
}

int createTexture(const char *texFileName)
{
    return TextureManager::Get()->CreateTexture(texFileName);
}

void drawTexture(int Id, int Index, int Level, int Time,
                 float SizeX, float SizeY, float CenterX, float CenterY,
                 float PosX, float PosY, float Rotation, float ScreenHeightScaleFactor,
                 float R, float G, float B, float A)
{
    TextureManager::Get()->DrawTexture(
        Id,
        Index,
        Level,
        Time,
        SizeX,
        SizeY,
        CenterX,
        CenterY,
        PosX,
        PosY,
        Rotation,
        ScreenHeightScaleFactor,
        R,
        G,
        B,
        A);
}