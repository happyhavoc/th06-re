
undefined4 __fastcall FUN_0043c8d0(int **param_1)

{
  param_1[3] = (int *)0x0;
  param_1[2] = (int *)0x0;
  if (*param_1 != (int *)0x0) {
    (**(code **)(**param_1 + 0x1c))(1);
    *param_1 = (int *)0x0;
  }
  if (param_1[4] != (int *)0x0) {
    _free(param_1[4]);
    param_1[4] = (int *)0x0;
  }
  _free(param_1[1]);
  return 1;
}

