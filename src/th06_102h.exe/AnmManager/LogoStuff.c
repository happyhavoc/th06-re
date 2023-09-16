
undefined4 __thiscall AnmManager::LogoStuff(AnmManager *this,int idx,char *path)

{
  byte *data;
  undefined4 uVar1;
  HRESULT HVar2;
  int iVar3;
  IDirect3DSurface8 *surface;
  
  if (this->surfaces[idx] != (IDirect3DSurface8 *)0x0) {
    FUN_00435270(this,idx);
  }
  data = OpenPath(path,0);
  if (data == (byte *)0x0) {
    GameErrorContextFatal(&g_GameErrorContext,"%sが読み込めないです。\n",path);
    uVar1 = 0xffffffff;
  }
  else {
    HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                      (g_GameContext.d3dDevice,0x280,0x400,
                       g_GameContext.presentParameters.BackBufferFormat,&surface);
    if (HVar2 == 0) {
      iVar3 = _D3DXLoadSurfaceFromFileInMemory_36
                        ((int)surface,0,0,data,g_FileSize,(int *)0x0,1,0,
                         this->surfaceSourceInfo + idx);
      if (((iVar3 == 0) &&
          (((HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateRenderTarget)
                               (g_GameContext.d3dDevice,this->surfaceSourceInfo[idx].Width,
                                this->surfaceSourceInfo[idx].Height,
                                g_GameContext.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE
                                ,1,this->surfaces + idx), HVar2 == 0 ||
            (HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                               (g_GameContext.d3dDevice,this->surfaceSourceInfo[idx].Width,
                                this->surfaceSourceInfo[idx].Height,
                                g_GameContext.presentParameters.BackBufferFormat,
                                this->surfaces + idx), HVar2 == 0)) &&
           (HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->CreateImageSurface)
                              (g_GameContext.d3dDevice,this->surfaceSourceInfo[idx].Width,
                               this->surfaceSourceInfo[idx].Height,
                               g_GameContext.presentParameters.BackBufferFormat,
                               this->surfacesBis + idx), HVar2 == 0)))) &&
         ((iVar3 = _D3DXLoadSurfaceFromSurface_32(this->surfaces[idx],0,0,surface,0,0,1,0),
          iVar3 == 0 &&
          (iVar3 = _D3DXLoadSurfaceFromSurface_32(this->surfacesBis[idx],0,0,surface,0,0,1,0),
          iVar3 == 0)))) {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        uVar1 = 0;
      }
      else {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

