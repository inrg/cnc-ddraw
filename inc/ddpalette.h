#ifndef DDPALETTE_H
#define DDPALETTE_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "ddraw.h"
#include "IDirectDrawPalette.h"
#include "dd.h"

HRESULT ddp_GetEntries(IDirectDrawPaletteImpl* This, DWORD dwFlags, DWORD dwBase, DWORD dwNumEntries, LPPALETTEENTRY lpEntries);
HRESULT ddp_SetEntries(IDirectDrawPaletteImpl* This, DWORD dwFlags, DWORD dwStartingEntry, DWORD dwCount, LPPALETTEENTRY lpEntries);
HRESULT dd_CreatePalette(DWORD dwFlags, LPPALETTEENTRY lpDDColorArray, LPDIRECTDRAWPALETTE FAR* lpDDPalette, IUnknown FAR* unkOuter);

#endif
