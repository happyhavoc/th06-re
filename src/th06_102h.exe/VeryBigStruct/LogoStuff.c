
undefined4 __thiscall VeryBigStruct::LogoStuff(VeryBigStruct *this,int param_2,char *path)

{
  byte *data;
  undefined4 uVar1;
  HRESULT HVar2;
  int iVar3;
  IDirect3DSurface8 *local_8;
  
  if (this->field19118_0x20d34[param_2] != (VeryBigStruct20d34 *)0x0) {
    FUN_00435270(this,param_2);
  }
  data = OpenPath(path,0);
  if (data == (byte *)0x0) {
    GameErrorContextFatal(&g_GameErrorContext,"%sが読み込めないです。\n",path);
    uVar1 = 0xffffffff;
  }
  else {
    HVar2 = (*(g_GameContext.d3d_device)->lpVtbl->CreateImageSurface)
                      (g_GameContext.d3d_device,0x280,0x400,
                       g_GameContext.present_parameters.BackBufferFormat,&local_8);
    if (HVar2 == 0) {
      iVar3 = FUN_0043fec2((int)local_8,0,0,data,g_FileSize,(int *)0x0,1,0,
                           this->field19247_0x20e34 + param_2);
      if (((iVar3 == 0) &&
          (((HVar2 = (*(g_GameContext.d3d_device)->lpVtbl->CreateRenderTarget)
                               (g_GameContext.d3d_device,
                                this->field19247_0x20e34[param_2].field0_0x0,
                                this->field19247_0x20e34[param_2].field1_0x4,
                                g_GameContext.present_parameters.BackBufferFormat,
                                D3DMULTISAMPLE_NONE,1,
                                (IDirect3DSurface8 **)(this->field19118_0x20d34 + param_2)),
            HVar2 == 0 ||
            (HVar2 = (*(g_GameContext.d3d_device)->lpVtbl->CreateImageSurface)
                               (g_GameContext.d3d_device,
                                this->field19247_0x20e34[param_2].field0_0x0,
                                this->field19247_0x20e34[param_2].field1_0x4,
                                g_GameContext.present_parameters.BackBufferFormat,
                                (IDirect3DSurface8 **)(this->field19118_0x20d34 + param_2)),
            HVar2 == 0)) &&
           (HVar2 = (*(g_GameContext.d3d_device)->lpVtbl->CreateImageSurface)
                              (g_GameContext.d3d_device,this->field19247_0x20e34[param_2].field0_0x0
                               ,this->field19247_0x20e34[param_2].field1_0x4,
                               g_GameContext.present_parameters.BackBufferFormat,
                               (IDirect3DSurface8 **)(this->field19118_0x20d34 + param_2 + 0x20)),
           HVar2 == 0)))) &&
         ((iVar3 = FUN_0043ff78(this->field19118_0x20d34[param_2],0,0,local_8,0,0,1,0), iVar3 == 0
          && (iVar3 = FUN_0043ff78(this->field19118_0x20d34[param_2 + 0x20],0,0,local_8,0,0,1,0),
             iVar3 == 0)))) {
        if (local_8 != (IDirect3DSurface8 *)0x0) {
          (*local_8->lpVtbl->Release)(local_8);
          local_8 = (IDirect3DSurface8 *)0x0;
        }
        _free(data);
        uVar1 = 0;
      }
      else {
        if (local_8 != (IDirect3DSurface8 *)0x0) {
          (*local_8->lpVtbl->Release)(local_8);
          local_8 = (IDirect3DSurface8 *)0x0;
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

