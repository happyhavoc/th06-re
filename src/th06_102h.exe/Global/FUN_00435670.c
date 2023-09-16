
void __thiscall FUN_00435670(AnmManager *param_1_00,int param_2,int left,int top,int x,int y)

{
  int iVar1;
  HRESULT HVar2;
  IDirect3DSurface8 *backbuffer;
  IDirect3DSurface8 *local_18;
  RECT rect;
  
  if ((param_1_00->textures[param_2] != (IDirect3DTexture8 *)0x0) &&
     (iVar1 = (**(code **)(*DAT_006c6d20 + 0x40))(DAT_006c6d20,0,0,&backbuffer), iVar1 == 0)) {
    HVar2 = (*param_1_00->textures[param_2]->lpVtbl->GetSurfaceLevel)
                      (param_1_00->textures[param_2],0,&local_18);
    if (HVar2 == 0) {
      rect.left = left;
      rect.top = top;
      rect.right = left + x;
      rect.bottom = top + y;
      iVar1 = _D3DXLoadSurfaceFromSurface_32(local_18,0,0,backbuffer,0,&rect,0xffffffff,0);
      if (iVar1 == 0) {
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

