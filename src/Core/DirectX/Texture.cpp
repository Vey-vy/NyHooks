#define STB_IMAGE_IMPLEMENTATION
#include "Util/stb_image.h"
#include "Texture.hpp"

void TextureManager::Init(IDirect3DDevice9 *Device)
{
    m_Device = Device;
}

int TextureManager::CreateTexture(const char *TexFileName)
{
    if (!m_Device || !TexFileName)
        return -1;

    for (int i = 0; i < (int)m_Textures.size(); ++i)
        if (m_Textures[i].Filename == TexFileName)
            return i;

    int W, H, Channels;
    unsigned char *Pixels = stbi_load(TexFileName, &W, &H, &Channels, 4);
    if (!Pixels)
        return -1;

    IDirect3DTexture9 *Tex = nullptr;
    HRESULT Hr = m_Device->CreateTexture(
        (UINT)W, (UINT)H, 1,
        0,
        D3DFMT_A8R8G8B8,
        D3DPOOL_MANAGED,
        &Tex,
        nullptr);
    if (FAILED(Hr))
    {
        stbi_image_free(Pixels);
        return -1;
    }

    D3DLOCKED_RECT Lr{};
    Tex->LockRect(0, &Lr, nullptr, 0);
    auto *Dst = (BYTE *)Lr.pBits;
    for (int Y = 0; Y < H; ++Y)
    {
        auto *RowDst = (UINT32 *)(Dst + Y * Lr.Pitch);
        auto *RowSrc = Pixels + Y * W * 4;
        for (int X = 0; X < W; ++X)
        {
            BYTE R = RowSrc[X * 4 + 0];
            BYTE G = RowSrc[X * 4 + 1];
            BYTE B = RowSrc[X * 4 + 2];
            BYTE A = RowSrc[X * 4 + 3];
            RowDst[X] = (A << 24) | (R << 16) | (G << 8) | B;
        }
    }
    Tex->UnlockRect(0);
    stbi_image_free(Pixels);

    TextureEntry Entry;
    Entry.Ptr = Tex;
    Entry.Filename = TexFileName;
    Entry.Width = (UINT)W;
    Entry.Height = (UINT)H;

    int Id = (int)m_Textures.size();
    m_Textures.push_back(Entry);
    return Id;
}

void TextureManager::Bind(int Id, DWORD Stage) const
{
    if (!Valid(Id))
        return;
    m_Device->SetTexture(Stage, m_Textures[Id].Ptr);
}

void TextureManager::DrawTexture(int Id, int Index, int Level, int Time,
    float SizeX, float SizeY, float CenterX, float CenterY,
    float PosX, float PosY, float Rotation, float ScreenHeightScaleFactor,
    float R, float G, float B, float A)
{
    if (!Valid(Id)) return;

    float ScaledSizeX = SizeX * ScreenHeightScaleFactor;
    float ScaledSizeY = SizeY * ScreenHeightScaleFactor;

    float X1 = -CenterX * ScaledSizeX;
    float Y1 = -CenterY * ScaledSizeY;
    float X2 = X1 + ScaledSizeX;
    float Y2 = Y1 + ScaledSizeY;

    float CosR = cosf(Rotation);
    float SinR = sinf(Rotation);

    auto Rotate = [&](float X, float Y, float& OutX, float& OutY)
    {
        OutX = PosX + X * CosR - Y * SinR;
        OutY = PosY + X * SinR + Y * CosR;
    };

    DWORD Color = D3DCOLOR_COLORVALUE(R, G, B, A);

    struct Vertex
    {
        float X, Y, Z, RHW;
        DWORD Color;
        float U, V;
    };

    float U1 = 0.0f, V1 = 0.0f;
    float U2 = 1.0f, V2 = 1.0f;

    Vertex Quad[4];
    Rotate(X1, Y1, Quad[0].X, Quad[0].Y); Quad[0].Z = 0.0f; Quad[0].RHW = 1.0f; Quad[0].Color = Color; Quad[0].U = U1; Quad[0].V = V1;
    Rotate(X2, Y1, Quad[1].X, Quad[1].Y); Quad[1].Z = 0.0f; Quad[1].RHW = 1.0f; Quad[1].Color = Color; Quad[1].U = U2; Quad[1].V = V1;
    Rotate(X1, Y2, Quad[2].X, Quad[2].Y); Quad[2].Z = 0.0f; Quad[2].RHW = 1.0f; Quad[2].Color = Color; Quad[2].U = U1; Quad[2].V = V2;
    Rotate(X2, Y2, Quad[3].X, Quad[3].Y); Quad[3].Z = 0.0f; Quad[3].RHW = 1.0f; Quad[3].Color = Color; Quad[3].U = U2; Quad[3].V = V2;

    m_Device->SetTexture(0, m_Textures[Id].Ptr);
    m_Device->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
    m_Device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, Quad, sizeof(Vertex));
    m_Device->SetTexture(0, nullptr);
}

void TextureManager::Unbind(DWORD Stage) const
{
    if (m_Device)
        m_Device->SetTexture(Stage, nullptr);
}

void TextureManager::ReleaseAll()
{
    for (auto &Entry : m_Textures)
        if (Entry.Ptr)
        {
            Entry.Ptr->Release();
            Entry.Ptr = nullptr;
        }
    m_Textures.clear();
}

IDirect3DTexture9 *TextureManager::Get(int Id) const { return Valid(Id) ? m_Textures[Id].Ptr : nullptr; }
UINT TextureManager::Width(int Id) const { return Valid(Id) ? m_Textures[Id].Width : 0; }
UINT TextureManager::Height(int Id) const { return Valid(Id) ? m_Textures[Id].Height : 0; }
bool TextureManager::Valid(int Id) const { return Id >= 0 && Id < (int)m_Textures.size(); }

TextureManager::~TextureManager() { ReleaseAll(); }