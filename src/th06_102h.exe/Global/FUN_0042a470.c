
undefined4 FUN_0042a470(int *param_1)

{
  ushort uVar1;
  
  if (DAT_0069d4c1 != '\0') {
    uVar1 = g_CurFrameInput & 0x1f7;
    if (uVar1 != *(ushort *)(param_1[0x12] + 4)) {
      param_1[0x12] = param_1[0x12] + 8;
      param_1[DAT_0069d6d4 + 0x12] = param_1[0x12] + 8;
      *(int *)param_1[0x12] = *param_1;
      *(ushort *)(param_1[0x12] + 4) = uVar1;
    }
    *param_1 = *param_1 + 1;
  }
  return 1;
}

