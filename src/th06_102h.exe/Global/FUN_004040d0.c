
undefined4 FUN_004040d0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined *)(param_1 + 0x7c) = 0;
    (**(code **)(*(int *)g_GameContext._8_4_ + 200))
              (g_GameContext._8_4_,0x22,*(undefined4 *)(param_1 + 0x50));
  }
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))
            (g_GameContext._8_4_,0x24,*(undefined4 *)(param_1 + 0x48));
  (**(code **)(*(int *)g_GameContext._8_4_ + 200))
            (g_GameContext._8_4_,0x25,*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x80) < 2) {
    iVar1 = FUN_004172d3();
    if (iVar1 == 0) {
      FUN_00404970(0);
      FUN_00404970(1);
    }
  }
  return 1;
}

