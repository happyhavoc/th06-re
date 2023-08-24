
void __thiscall
FUN_00435670(VeryBigStruct *param_1_00,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HRESULT HVar1;
  int iVar2;
  IDirect3DSurface8 *backbuffer;
  IDirect3DSurface8 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1_00->texture_i_think[param_2] != (IDirect3DTexture8 *)0x0) &&
     (HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->GetBackBuffer)
                        (g_GameContext.d3d_device,0,D3DBACKBUFFER_TYPE_MONO,&backbuffer), HVar1 == 0
     )) {
    HVar1 = (*param_1_00->texture_i_think[param_2]->lpVtbl->GetSurfaceLevel)
                      (param_1_00->texture_i_think[param_2],0,&local_18);
    if (HVar1 == 0) {
      local_14 = param_3;
      local_10 = param_4;
      local_c = param_3 + param_5;
      local_8 = param_4 + param_6;
      iVar2 = _D3DXLoadSurfaceFromSurface_32(local_18,0,0,backbuffer,0,&local_14,0xffffffff,0);
      if (iVar2 == 0) {
        (*local_18->lpVtbl->Release)(local_18);
        (*backbuffer->lpVtbl->Release)(backbuffer);
      }
      else {
        (*local_18->lpVtbl->Release)(local_18);
        (*backbuffer->lpVtbl->Release)(backbuffer);
      }
    }
    else {
      (*backbuffer->lpVtbl->Release)(backbuffer);
    }
  }
  return;
}

