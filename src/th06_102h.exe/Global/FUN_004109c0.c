
undefined4 FUN_004109c0(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0040f7c0();
    if (iVar1 != 0) {
      return 0;
    }
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      if (*(short *)(param_1 + 200 + local_c * 0x110) != 0) {
        FUN_00433960(param_1 + 0x14 + local_c * 0x110);
      }
    }
    if (((*(int *)(param_1 + 0x1118) == 0) || ((DAT_0069d904 & 0x100) == 0)) || (3 < local_8))
    break;
    local_8 = local_8 + 1;
  }
  return 1;
}

