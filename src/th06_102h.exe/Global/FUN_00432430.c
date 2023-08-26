
void FUN_00432430(undefined4 *param_1,int param_2)

{
  param_1[0x20] = param_1[0x20] & 0xffffff3f;
  FUN_00403580(param_1);
  param_1[0x2e] = param_2;
  param_1[0x2f] = param_1[0x2e];
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0xfffffc19;
  param_1[0x20] = param_1[0x20] & 0xfffffffe;
  if (param_2 != 0) {
    FUN_00433960(param_1);
  }
  return;
}

