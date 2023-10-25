
uint __thiscall FUN_0041ef11(int *param_1_00,IDirect3DSurface8 *param_2)

{
  uint uVar1;
  HRESULT HVar2;
  D3DLOCKED_RECT local_50;
  void *local_48;
  D3DSURFACE_DESC local_44;
  size_t local_24;
  int local_20;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (param_1_00[7] == 0) {
    uVar1 = 0;
  }
  else {
    (*param_2->lpVtbl->GetDesc)(param_2,&local_44);
    local_1c.left = 0;
    local_1c.top = 0;
    local_1c.right = param_1_00[1];
    local_1c.bottom = param_1_00[2];
    uVar1 = (*param_2->lpVtbl->LockRect)(param_2,&local_50,&local_1c,0);
    if (uVar1 == 0) {
      local_c = local_50.Pitch;
      local_24 = param_1_00[4];
      local_48 = (void *)param_1_00[8];
      local_8 = local_50.pBits;
      if (local_44.Format == *param_1_00) {
        for (local_20 = 0; local_20 < param_1_00[2]; local_20 = local_20 + 1) {
          _memcpy(local_8,local_48,local_24);
          local_48 = (void *)((int)local_48 + local_24);
          local_8 = (void *)((int)local_8 + local_c);
        }
      }
      HVar2 = (*param_2->lpVtbl->UnlockRect)(param_2);
      uVar1 = CONCAT31((int3)((uint)HVar2 >> 8),1);
    }
    else {
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}

