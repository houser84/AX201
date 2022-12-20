#ifndef __DIRECTX_H__
#define __DIRECTX_H__

#include <d3d11.h>

#pragma comment(lib, "d3d11.lib")

ID3D11Device* GetDevice();
ID3D11DeviceContext* GetContext();
IDXGISwapChain* GetSwapChain();

HRESULT InitDX(HWND hWnd, UINT width, UINT height, bool fullscreen);
void UninitDX();
void BeginDrawDX3D();
void BeginDrawDX2D();
void EndDrawDX();
void EnableDepth(bool enable);// 12/20 竹下 デプスを追加
#endif // __DIRECTX_H__