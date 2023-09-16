
undefined4 __thiscall AnmManager::LogoStuff(AnmManager *this,int idx,char *path)

{
  byte *data;
  undefined4 uVar1;
  int iVar2;
  IDirect3DSurface8 *surface;
  
  if (this->surfaces[idx] != (IDirect3DSurface8 *)0x0) {
    FUN_00435270(this,idx);
  }
  data = OpenPath(path,0);
  if (data == (byte *)0x0) {
    GameErrorContextFatal
              ((GameErrorContext *)&DAT_0069d998,"%sが読み込めないです。\n",path);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (**(code **)(*DAT_006c6d20 + 0x6c))(DAT_006c6d20,0x280,0x400,DAT_006c6e00,&surface);
    if (iVar2 == 0) {
      iVar2 = _D3DXLoadSurfaceFromFileInMemory_36
                        ((int)surface,0,0,data,DAT_0069d914,(int *)0x0,1,0,
                         this->surfaceSourceInfo + idx);
      if (((iVar2 == 0) &&
          (((iVar2 = (**(code **)(*DAT_006c6d20 + 100))
                               (DAT_006c6d20,this->surfaceSourceInfo[idx].Width,
                                this->surfaceSourceInfo[idx].Height,DAT_006c6e00,0,1,
                                this->surfaces + idx), iVar2 == 0 ||
            (iVar2 = (**(code **)(*DAT_006c6d20 + 0x6c))
                               (DAT_006c6d20,this->surfaceSourceInfo[idx].Width,
                                this->surfaceSourceInfo[idx].Height,DAT_006c6e00,
                                this->surfaces + idx), iVar2 == 0)) &&
           (iVar2 = (**(code **)(*DAT_006c6d20 + 0x6c))
                              (DAT_006c6d20,this->surfaceSourceInfo[idx].Width,
                               this->surfaceSourceInfo[idx].Height,DAT_006c6e00,
                               this->surfacesBis + idx), iVar2 == 0)))) &&
         ((iVar2 = _D3DXLoadSurfaceFromSurface_32(this->surfaces[idx],0,0,surface,0,0,1,0),
          iVar2 == 0 &&
          (iVar2 = _D3DXLoadSurfaceFromSurface_32(this->surfacesBis[idx],0,0,surface,0,0,1,0),
          iVar2 == 0)))) {
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

