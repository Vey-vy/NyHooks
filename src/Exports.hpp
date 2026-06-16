#pragma once

#ifdef NY_EXPORTS
#define NY_API __declspec(dllexport)
#else
#define NY_API __declspec(dllimport)
#endif

typedef void (*PresentCallback)(void *);
typedef void (*KeyboardHandler)(DWORD, WORD, BYTE, BOOL, BOOL, BOOL, BOOL);

enum eGameVersion : int
{
    VER_1_2_0_59,

    VER_SIZE,
    VER_UNK = -1
};

template <typename Ret, typename... Args>
NY_API Ret Invoke(std::uint32_t hash, Args &&...args);

// Register IDXGISwapChain::Present callback
// must be called on dll attach
NY_API void presentCallbackRegister(PresentCallback cb);

// Unregister IDXGISwapChain::Present callback
// must be called on dll detach
NY_API void presentCallbackUnregister(PresentCallback cb);

// Register keyboard handler
// must be called on dll attach
NY_API void keyboardHandlerRegister(KeyboardHandler handler);

// Unregister keyboard handler
// must be called on dll detach
NY_API void keyboardHandlerUnregister(KeyboardHandler handler);

NY_API eGameVersion getGameVersion();

NY_API int getNyVersion();

NY_API void scriptWait(DWORD time);
NY_API void scriptRegister(HMODULE module, void (*LP_SCRIPT_MAIN)());
NY_API void scriptRegisterAdditionalThread(HMODULE module, void (*LP_SCRIPT_MAIN)());
NY_API void scriptUnregister(HMODULE module);
NY_API void scriptUnregister(void (*LP_SCRIPT_MAIN)());

static void WAIT(DWORD time) { scriptWait(time); }
static void TERMINATE() { WAIT(0xffffffff); }

// UINT64 *getGlobalPtr(int globalId);

NY_API int worldGetAllVehicles();
NY_API int worldGetAllPeds();
NY_API int worldGetAllObjects();
NY_API int worldGetAllPickups();

// Create texture
//	texFileName	- texture file name, it's best to specify full texture path and use PNG textures
//	returns	internal texture id
//	Texture deletion is performed automatically when game reloads scripts
//	Can be called only in the same thread as natives

NY_API int createTexture(const char *texFileName);
NY_API void drawTexture(int Id, int Index, int Level, int Time,
                        float SizeX, float SizeY, float CenterX, float CenterY,
                        float PosX, float PosY, float Rotation, float ScreenHeightScaleFactor,
                        float R, float G, float B, float A);