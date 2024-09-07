
void __thiscall
th06::AnmManager::CopySurfaceToBackBuffer
          (AnmManager *this,int surfaceIdx,LONG left,LONG top,LONG x,LONG y)

{
  HRESULT hres;
  IDirect3DSurface8 *destSurface;
  RECT sourceRect;
  POINT destPoint;
  
  if (*(int *)(this + surfaceIdx * 4 + 0x20db4) == 0) {
    return;
  }
  hres = (*(g_Supervisor.d3dDevice)->lpVtbl->GetBackBuffer)
                   (g_Supervisor.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&destSurface);
  if (hres == 0) {
    if (*(int *)(this + surfaceIdx * 4 + 0x20d34) == 0) {
      hres = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateRenderTarget)
                       (g_Supervisor.d3dDevice,*(UINT *)(this + surfaceIdx * 0x14 + 0x20e34),
                        *(UINT *)(this + surfaceIdx * 0x14 + 0x20e38),
                        g_Supervisor.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                        (IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34));
      if ((hres != 0) &&
         (hres = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                           (g_Supervisor.d3dDevice,*(UINT *)(this + surfaceIdx * 0x14 + 0x20e34),
                            *(UINT *)(this + surfaceIdx * 0x14 + 0x20e38),
                            g_Supervisor.presentParameters.BackBufferFormat,
                            (IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34)), hres != 0)) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
      hres = D3DXLoadSurfaceFromSurface
                       (*(LPDIRECT3DSURFACE8 *)(this + surfaceIdx * 4 + 0x20d34),(PALETTEENTRY *)0x0
                        ,(RECT *)0x0,*(LPDIRECT3DSURFACE8 *)(this + surfaceIdx * 4 + 0x20db4),
                        (PALETTEENTRY *)0x0,(RECT *)0x0,1,0);
      if (hres != 0) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
    }
    sourceRect.left = left;
    sourceRect.top = top;
    sourceRect.right = *(LONG *)(this + surfaceIdx * 0x14 + 0x20e34);
    sourceRect.bottom = *(LONG *)(this + surfaceIdx * 0x14 + 0x20e38);
    destPoint.x = x;
    destPoint.y = y;
    (*(g_Supervisor.d3dDevice)->lpVtbl->CopyRects)
              (g_Supervisor.d3dDevice,*(IDirect3DSurface8 **)(this + surfaceIdx * 4 + 0x20d34),
               &sourceRect,1,destSurface,&destPoint);
    (*destSurface->lpVtbl->Release)(destSurface);
    return;
  }
  return;
}

