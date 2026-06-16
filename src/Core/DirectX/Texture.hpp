#pragma once
#include <d3d9.h>
#include <string>
#include <vector>

struct TextureEntry
{
    IDirect3DTexture9 *Ptr = nullptr;
    std::string Filename = {};
    UINT Width = 0;
    UINT Height = 0;
};

class TextureManager
{
public:
    void Init(IDirect3DDevice9 *Device);
    int CreateTexture(const char *TexFileName);
    void DrawTexture(int Id, int Index, int Level, int Time,
                     float SizeX, float SizeY, float CenterX, float CenterY,
                     float PosX, float PosY, float Rotation, float ScreenHeightScaleFactor,
                     float R, float G, float B, float A);
    void Bind(int Id, DWORD Stage = 0) const;
    void Unbind(DWORD Stage = 0) const;
    void ReleaseAll();

    IDirect3DTexture9 *Get(int Id) const;
    UINT Width(int Id) const;
    UINT Height(int Id) const;
    bool Valid(int Id) const;

    ~TextureManager();

    static TextureManager *Get()
    {
        static TextureManager instance;
        return &instance;
    }

private:
    IDirect3DDevice9 *m_Device = nullptr;
    std::vector<TextureEntry> m_Textures = {};
};