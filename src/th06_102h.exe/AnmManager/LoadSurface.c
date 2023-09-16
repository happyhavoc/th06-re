
int __thiscall AnmManager::LoadSurface(AnmManager *this,int surface_index,char *path)

{
  byte *data;
  int iVar1;
  HRESULT HVar2;
  IDirect3DSurface8 *surface;
  
  if (this->surfaces[surface_index] != (IDirect3DSurface8 *)0x0) {
    ReleaseSurface(this,surface_index);
  }
  data = OpenPath(path,0);
  if (data == (byte *)0x0) {
    GameErrorContextFatal(&g_GameErrorContext,"%sが読み込めないです。\n",path);
    iVar1 = -1;
  }
  else {
    HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                      (g_GameContext.d3dDevice,0x280,0x400,
                       g_GameContext.presentParameters.BackBufferFormat,&surface);
    if (HVar2 == 0) {
      iVar1 = _D3DXLoadSurfaceFromFileInMemory_36
                        ((int)surface,0,0,data,DAT_0069d914,(int *)0x0,1,0,
                         this->surfaceSourceInfo + surface_index);
      if (((iVar1 == 0) &&
          (((HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateRenderTarget)
                               (g_GameContext.d3dDevice,this->surfaceSourceInfo[surface_index].Width
                                ,this->surfaceSourceInfo[surface_index].Height,
                                g_GameContext.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE
                                ,1,this->surfaces + surface_index), HVar2 == 0 ||
            (HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                               (g_GameContext.d3dDevice,this->surfaceSourceInfo[surface_index].Width
                                ,this->surfaceSourceInfo[surface_index].Height,
                                g_GameContext.presentParameters.BackBufferFormat,
                                this->surfaces + surface_index), HVar2 == 0)) &&
           (HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                              (g_GameContext.d3dDevice,this->surfaceSourceInfo[surface_index].Width,
                               this->surfaceSourceInfo[surface_index].Height,
                               g_GameContext.presentParameters.BackBufferFormat,
                               this->surfacesBis + surface_index), HVar2 == 0)))) &&
         ((iVar1 = _D3DXLoadSurfaceFromSurface_32(this->surfaces[surface_index],0,0,surface,0,0,1,0)
          , iVar1 == 0 &&
          (iVar1 = _D3DXLoadSurfaceFromSurface_32
                             (this->surfacesBis[surface_index],0,0,surface,0,0,1,0), iVar1 == 0))))
      {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        iVar1 = 0;
      }
      else {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        iVar1 = -1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

