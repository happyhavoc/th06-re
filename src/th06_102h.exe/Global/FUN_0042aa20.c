
undefined4 FUN_0042aa20(int param_1)

{
  FUN_0041cde0(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0041cde0(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  _free(*(void **)((int)DAT_006d3f18 + 4));
  _free(DAT_006d3f18);
  DAT_006d3f18 = (void *)0x0;
  return 0;
}

