
void __thiscall
AnmManager::CopySurfaceToBackBuffer
          (AnmManager *this,int surfaceIdx,LONG left,LONG top,LONG x,LONG y)

{
  HRESULT hres;
  IDirect3DSurface8 *destSurface;
  RECT sourceRect;
  POINT destPoint;
  
  if (this->surfacesBis[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  hres = (*(g_GameContext.d3dDevice)->lpVtbl->GetBackBuffer)
                   (g_GameContext.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&destSurface);
  if (hres == 0) {
    if (this->surfaces[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
      hres = (*(g_GameContext.d3dDevice)->lpVtbl->CreateRenderTarget)
                       (g_GameContext.d3dDevice,this->surfaceSourceInfo[surfaceIdx].Width,
                        this->surfaceSourceInfo[surfaceIdx].Height,
                        g_GameContext.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                        this->surfaces + surfaceIdx);
      if ((hres != 0) &&
         (hres = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                           (g_GameContext.d3dDevice,this->surfaceSourceInfo[surfaceIdx].Width,
                            this->surfaceSourceInfo[surfaceIdx].Height,
                            g_GameContext.presentParameters.BackBufferFormat,
                            this->surfaces + surfaceIdx), hres != 0)) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
      hres = D3DXLoadSurfaceFromSurface
                       (this->surfaces[surfaceIdx],(PALETTEENTRY *)0x0,(RECT *)0x0,
                        this->surfacesBis[surfaceIdx],(PALETTEENTRY *)0x0,(RECT *)0x0,1,0);
      if (hres != 0) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
    }
    sourceRect.left = left;
    sourceRect.top = top;
    sourceRect.right = this->surfaceSourceInfo[surfaceIdx].Width;
    sourceRect.bottom = this->surfaceSourceInfo[surfaceIdx].Height;
    destPoint.x = x;
    destPoint.y = y;
    (*(g_GameContext.d3dDevice)->lpVtbl->CopyRects)
              (g_GameContext.d3dDevice,this->surfaces[surfaceIdx],&sourceRect,1,destSurface,
               &destPoint);
    (*destSurface->lpVtbl->Release)(destSurface);
    return;
  }
  return;
}

