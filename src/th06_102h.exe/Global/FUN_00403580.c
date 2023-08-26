
void __fastcall FUN_00403580(undefined4 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[7] = 0x3f800000;
  param_1[6] = 0x3f800000;
  *(undefined2 *)((int)param_1 + 0x86) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0xffffffff;
  FUN_00403670(param_1 + 0xf);
  *(undefined2 *)(param_1 + 0x20) = 3;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((int)param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  FUN_00424127((Unk3field *)(param_1 + 0xc));
  return;
}

