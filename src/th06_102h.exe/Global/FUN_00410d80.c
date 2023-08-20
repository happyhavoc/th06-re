
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00410d80(void *param_1)

{
  FUN_00432030(0x2c);
  FUN_00432030(0x2d);
  FUN_00432030(0x2e);
  DAT_006c6ea4 = 7;
  FUN_00435270(0);
  _free(*(void **)((int)param_1 + 0x1114));
  FUN_0041cde0(*(undefined4 *)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  _DAT_006c6eb4 = 0;
  FUN_004242f3(5);
  return 0;
}

