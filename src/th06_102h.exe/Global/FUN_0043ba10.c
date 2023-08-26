
void __fastcall FUN_0043ba10(void **param_1)

{
  FUN_0043c2c0((int)param_1);
  if ((param_1[0x20] == (void *)0x0) && (*param_1 != (void *)0x0)) {
    _free(*param_1);
    *param_1 = (void *)0x0;
  }
  return;
}

