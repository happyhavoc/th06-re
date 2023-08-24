
undefined4 FUN_00425d97(int param_1)

{
  _free(*(void **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00435270(VERY_BIG_STRUCT,0);
  FUN_00432030(0x29);
  FUN_00432030(0x2a);
  FUN_00432030(0x2b);
  FUN_0041cde0((short *)&DAT_0069d918,*(short **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

