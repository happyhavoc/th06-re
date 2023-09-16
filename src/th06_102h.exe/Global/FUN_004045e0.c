
undefined4 FUN_004045e0(void **param_1)

{
  FUN_00432030(DAT_006d4588,4);
  if (*param_1 != (void *)0x0) {
    _free(*param_1);
    *param_1 = (void *)0x0;
  }
  if (param_1[1] != (void *)0x0) {
    _free(param_1[1]);
    param_1[1] = (void *)0x0;
  }
  return 0;
}

