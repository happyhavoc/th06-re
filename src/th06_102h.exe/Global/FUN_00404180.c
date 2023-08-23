
undefined4 FUN_00404180(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    iVar1 = FUN_004172d3();
    if (iVar1 == 0) {
      FUN_00404970(2);
      FUN_00404970(3);
      if (*(int *)(param_1 + 0x80) == 1) {
        local_1c = 0x42000000;
        local_18 = 0x41800000;
        local_14 = 0x43d00000;
        local_10 = 0x43e80000;
        local_c = (*(int *)(param_1 + 0x84) * 0xff) / 0x3c;
        FUN_0042f8b0(&local_1c,local_c << 0x18);
      }
    }
  }
  iVar1 = DAT_006d4588;
  if (0 < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x84) <= (int)(uint)g_GameContext.cfg.field15_0x1f) {
      *(undefined2 *)(param_1 + 0x13c) = 0x2b3;
      FUN_00432430(param_1 + 0x88,*(undefined4 *)(iVar1 + 0x1d400));
    }
    FUN_00432cc0((void *)(param_1 + 0x88));
  }
  g_GameContext._216_4_ = 0;
  g_GameContext._220_4_ = 0x3f000000;
  FUN_0041c28c(0);
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
  local_8 = 0x447a0000;
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x24,0x447a0000);
  local_8 = 0x44fa0000;
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x25,0x44fa0000);
  return 1;
}

