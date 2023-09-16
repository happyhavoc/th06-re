
void FUN_004354c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int in_ECX;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x20db4 + param_1 * 4) == 0) {
    return;
  }
  iVar1 = (**(code **)(*DAT_006c6d20 + 0x40))(DAT_006c6d20,0,0,&local_20);
  if (iVar1 == 0) {
    if (*(int *)(in_ECX + 0x20d34 + param_1 * 4) == 0) {
      iVar1 = (**(code **)(*DAT_006c6d20 + 100))
                        (DAT_006c6d20,*(undefined4 *)(in_ECX + 0x20e34 + param_1 * 0x14),
                         *(undefined4 *)(in_ECX + 0x20e38 + param_1 * 0x14),DAT_006c6e00,0,1,
                         in_ECX + 0x20d34 + param_1 * 4);
      if ((iVar1 != 0) &&
         (iVar1 = (**(code **)(*DAT_006c6d20 + 0x6c))
                            (DAT_006c6d20,*(undefined4 *)(in_ECX + 0x20e34 + param_1 * 0x14),
                             *(undefined4 *)(in_ECX + 0x20e38 + param_1 * 0x14),DAT_006c6e00,
                             in_ECX + 0x20d34 + param_1 * 4), iVar1 != 0)) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
      iVar1 = _D3DXLoadSurfaceFromSurface_32
                        (*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4),0,0,
                         *(IDirect3DSurface8 **)(in_ECX + 0x20db4 + param_1 * 4),0,0,1,0);
      if (iVar1 != 0) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
    }
    local_1c = param_4;
    local_18 = param_5;
    local_14 = param_4 + param_6;
    local_10 = param_5 + param_7;
    local_c = param_2;
    local_8 = param_3;
    (**(code **)(*DAT_006c6d20 + 0x70))
              (DAT_006c6d20,*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4),&local_1c,1,local_20,
               &local_c);
    (**(code **)(*local_20 + 8))(local_20);
    return;
  }
  return;
}

