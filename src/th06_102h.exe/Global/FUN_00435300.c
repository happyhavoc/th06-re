
void __thiscall FUN_00435300(VeryBigStruct *this,int param_2,LONG left,LONG top,LONG x,LONG y)

{
  HRESULT HVar1;
  int iVar2;
  IDirect3DSurface8 *destSurface;
  RECT sourceRect;
  POINT destPoint;
  
  if (this->surfaces_bis[param_2] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->GetBackBuffer)
                    (g_GameContext.d3d_device,0,D3DBACKBUFFER_TYPE_MONO,&destSurface);
  if (HVar1 == 0) {
    if (this->surfaces[param_2] == (IDirect3DSurface8 *)0x0) {
      HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->CreateRenderTarget)
                        (g_GameContext.d3d_device,this->image_info[param_2].Width,
                         this->image_info[param_2].Height,
                         g_GameContext.present_parameters.BackBufferFormat,D3DMULTISAMPLE_NONE,1,
                         this->surfaces + param_2);
      if ((HVar1 != 0) &&
         (HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->CreateImageSurface)
                            (g_GameContext.d3d_device,this->image_info[param_2].Width,
                             this->image_info[param_2].Height,
                             g_GameContext.present_parameters.BackBufferFormat,
                             this->surfaces + param_2), HVar1 != 0)) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
      iVar2 = _D3DXLoadSurfaceFromSurface_32
                        (this->surfaces[param_2],0,0,this->surfaces_bis[param_2],0,0,1,0);
      if (iVar2 != 0) {
        (*destSurface->lpVtbl->Release)(destSurface);
        return;
      }
    }
    sourceRect.left = left;
    sourceRect.top = top;
    sourceRect.right = this->image_info[param_2].Width;
    sourceRect.bottom = this->image_info[param_2].Height;
    destPoint.x = x;
    destPoint.y = y;
    (*(g_GameContext.d3d_device)->lpVtbl->CopyRects)
              (g_GameContext.d3d_device,this->surfaces[param_2],&sourceRect,1,destSurface,&destPoint
              );
    (*destSurface->lpVtbl->Release)(destSurface);
    return;
  }
  return;
}

