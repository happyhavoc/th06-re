
undefined4 FUN_00410d80(void *param_1)

{
  FUN_00432030(0x2c);
  FUN_00432030(0x2d);
  FUN_00432030(0x2e);
  g_GameContext._396_4_ = 7;
  FUN_00435270(0);
  _free(*(void **)((int)param_1 + 0x1114));
  FUN_0041cde0((short *)&DAT_0069d918,*(short **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  g_GameContext._412_4_ = 0;
  FUN_004242f3(5);
  return 0;
}

