
ZunResult __thiscall AnmManager::LoadSurface(AnmManager *this,int surface_index,char *path)

{
  byte *data;
  ZunResult ZVar1;
  HRESULT HVar2;
  LPDIRECT3DSURFACE8 surface;
  
  if (this->surfaces[surface_index] != (IDirect3DSurface8 *)0x0) {
    ReleaseSurface(this,surface_index);
  }
  data = FileSystem::OpenPath(path,0);
  if (data == (byte *)0x0) {
    GameErrorContextFatal(&g_GameErrorContext,"%sが読み込めないです。\n",path);
    ZVar1 = ZUN_ERROR;
  }
  else {
    HVar2 = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                      (g_Supervisor.d3dDevice,0x280,0x400,
                       g_Supervisor.presentParameters.BackBufferFormat,&surface);
    if (HVar2 == 0) {
      HVar2 = D3DXLoadSurfaceFromFileInMemory
                        (surface,(PALETTEENTRY *)0x0,(RECT *)0x0,data,g_LastFileSize,(RECT *)0x0,1,0
                         ,this->surfaceSourceInfo + surface_index);
      if (((HVar2 == 0) &&
          (((HVar2 = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateRenderTarget)
                               (g_Supervisor.d3dDevice,this->surfaceSourceInfo[surface_index].Width,
                                this->surfaceSourceInfo[surface_index].Height,
                                g_Supervisor.presentParameters.BackBufferFormat,D3DMULTISAMPLE_NONE,
                                1,this->surfaces + surface_index), HVar2 == 0 ||
            (HVar2 = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                               (g_Supervisor.d3dDevice,this->surfaceSourceInfo[surface_index].Width,
                                this->surfaceSourceInfo[surface_index].Height,
                                g_Supervisor.presentParameters.BackBufferFormat,
                                this->surfaces + surface_index), HVar2 == 0)) &&
           (HVar2 = (*(g_Supervisor.d3dDevice)->lpVtbl->CreateImageSurface)
                              (g_Supervisor.d3dDevice,this->surfaceSourceInfo[surface_index].Width,
                               this->surfaceSourceInfo[surface_index].Height,
                               g_Supervisor.presentParameters.BackBufferFormat,
                               this->surfacesBis + surface_index), HVar2 == 0)))) &&
         ((HVar2 = D3DXLoadSurfaceFromSurface
                             (this->surfaces[surface_index],(PALETTEENTRY *)0x0,(RECT *)0x0,surface,
                              (PALETTEENTRY *)0x0,(RECT *)0x0,1,0), HVar2 == 0 &&
          (HVar2 = D3DXLoadSurfaceFromSurface
                             (this->surfacesBis[surface_index],(PALETTEENTRY *)0x0,(RECT *)0x0,
                              surface,(PALETTEENTRY *)0x0,(RECT *)0x0,1,0), HVar2 == 0)))) {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        ZVar1 = ZUN_SUCCESS;
      }
      else {
        if (surface != (IDirect3DSurface8 *)0x0) {
          (*surface->lpVtbl->Release)(surface);
          surface = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        ZVar1 = ZUN_ERROR;
      }
    }
    else {
      ZVar1 = ZUN_ERROR;
    }
  }
  return ZVar1;
}

