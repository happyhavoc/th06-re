
undefined4 FUN_0041b1b1(int param_1)

{
  FUN_00432030(VERY_BIG_STRUCT,0x12);
  FUN_00432030(VERY_BIG_STRUCT,0x13);
  FUN_00432030(VERY_BIG_STRUCT,0x14);
  FUN_0041872a();
  if (g_GameContext.unkInput2 != 3) {
    FUN_00432030(VERY_BIG_STRUCT,0xd);
    FUN_00432030(VERY_BIG_STRUCT,0xe);
    FUN_00432030(VERY_BIG_STRUCT,0xf);
    FUN_00432030(VERY_BIG_STRUCT,0x10);
    FUN_00432030(VERY_BIG_STRUCT,0x11);
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}

