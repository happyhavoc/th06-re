
undefined4 FUN_0042fee0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x44200000;
  local_8 = 0x43f00000;
  g_GameContext._200_4_ = 0;
  g_GameContext._204_4_ = 0;
  g_GameContext._208_4_ = 0x280;
  g_GameContext._212_4_ = 0x1e0;
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
  FUN_0042f8b0(&local_14,*(int *)(param_1 + 0x10) << 0x18 | *(uint *)(param_1 + 0x18));
  return 1;
}

