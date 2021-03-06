#include "IDirect3D.h"
#include "debug.h"


HRESULT __stdcall IDirect3D3__QueryInterface(IDirect3D3Impl* This, REFIID riid, void** obj)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p, riid=%08X, obj=%p)\n", __FUNCTION__, This, (unsigned int)riid, obj);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

ULONG __stdcall IDirect3D3__AddRef(IDirect3D3Impl* This)
{
    dprintf("-> %s(This=%p)\n", __FUNCTION__, This);
    ULONG ret = ++This->ref;
    dprintf("<- %s(This ref=%u)\n", __FUNCTION__, ret);
    return ret;
}

ULONG __stdcall IDirect3D3__Release(IDirect3D3Impl* This)
{
    dprintf("-> %s(This=%p)\n", __FUNCTION__, This);

    ULONG ret = --This->ref;

    if (This->ref == 0)
    {
        dprintf("     Released (%p)\n", This);

        HeapFree(GetProcessHeap(), 0, This);
    }

    dprintf("<- %s(This ref=%u)\n", __FUNCTION__, ret);
    return ret;
}

HRESULT __stdcall IDirect3D3__EnumDevices(IDirect3D3Impl* This, int a, int b)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__CreateLight(IDirect3D3Impl* This, int a, int b)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__CreateMaterial(IDirect3D3Impl* This, int a, int b)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__CreateViewport(IDirect3D3Impl* This, int a, int b)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__FindDevice(IDirect3D3Impl* This, int a, int b)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__CreateDevice(IDirect3D3Impl* This, int a, int b, int c, int d)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__CreateVertexBuffer(IDirect3D3Impl* This, int a, int b, int c, int d)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__EnumZBufferFormats(IDirect3D3Impl* This, int a, int b, int c)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

HRESULT __stdcall IDirect3D3__EvictManagedTextures(IDirect3D3Impl* This)
{
    dprintf("NOT_IMPLEMENTED -> %s(This=%p)\n", __FUNCTION__, This);
    HRESULT ret = E_FAIL;
    dprintf("NOT_IMPLEMENTED <- %s\n", __FUNCTION__);
    return ret;
}

struct IDirect3D3ImplVtbl g_d3d3_vtbl =
{
    /* IUnknown */
    IDirect3D3__QueryInterface,
    IDirect3D3__AddRef,
    IDirect3D3__Release,
    /* IDirect3D3Impl */
    IDirect3D3__EnumDevices,
    IDirect3D3__CreateLight,
    IDirect3D3__CreateMaterial,
    IDirect3D3__CreateViewport,
    IDirect3D3__FindDevice,
    IDirect3D3__CreateDevice,
    IDirect3D3__CreateVertexBuffer,
    IDirect3D3__EnumZBufferFormats,
    IDirect3D3__EvictManagedTextures,
};
