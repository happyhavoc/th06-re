
void __thiscall FUN_00435300(VeryBigStruct *this,int surfaceIdx,LONG left,LONG top,LONG x,LONG y)

{
  HRESULT HVar1;
  int iVar2;
  IDirect3DSurface8 *destSurface;
  RECT sourceRect;
  POINT destPoint;
  
  if (this->surfaces_bis[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->GetBackBuffer)
                    (g_GameContext.d3dDevice,0,D3DBACKBUFFER_TYPE_MONO,&destSurface);
  if (HVar1 == 0) {
    if (this->surfaces[surfaceIdx] == (IDirect3DSurface8 *)0x0) {
      HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateRenderTarget)
                        (g_GameContext.d3dDevice,this->image_info[surfaceIdx].Width,
                         this->image_info[surfaceIdx].Height,
                         g_GameContext.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                         this->surfaces + surfaceIdx);
      if ((HVar1 != 0) &&
         (HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                            (g_GameContext.d3dDevice,this->image_info[surfaceIdx].Width,
                             this->image_info[surfaceIdx].Height,
                             g_GameContext.presentParameters.BackBufferFormat,
                             this->surfaces + surfaceIdx), HVar1 != 0)) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
      iVar2 = _D3DXLoadSurfaceFromSurface_32
                        (this->surfaces[surfaceIdx],0,0,this->surfaces_bis[surfaceIdx],0,0,1,0);
      if (iVar2 != 0) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
    }
    sourceRect.left = left;
    sourceRect.top = top;
    sourceRect.right = this->image_info[surfaceIdx].Width;
    sourceRect.bottom = this->image_info[surfaceIdx].Height;
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

