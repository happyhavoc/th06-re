
undefined4 FUN_0042a470(int *param_1)

{
  ushort uVar1;
  
  if (g_GameManager.field22_0x1820._1_1_ != '\0') {
    uVar1 = g_CurFrameInput & 0x1f7;
    if (uVar1 != *(ushort *)(param_1[0x12] + 4)) {
      param_1[0x12] = param_1[0x12] + 8;
      param_1[g_GameManager.current_stage + 0x12] = param_1[0x12] + 8;
      *(int *)param_1[0x12] = *param_1;
      *(ushort *)(param_1[0x12] + 4) = uVar1;
    }
    *param_1 = *param_1 + 1;
  }
  return 1;
}

