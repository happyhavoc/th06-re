
void __fastcall FUN_00401410(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x306b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1889] = 0xffffffff;
  param_1[0x188a] = 0x3f800000;
  param_1[0x188b] = 0x3f800000;
  param_1[100] = param_1[100] | 0x300;
  FUN_00403580(param_1 + 0x44);
  FUN_004323a0(param_1 + 0x44,0);
  FUN_00403580(param_1);
  FUN_004323a0(param_1,0x20);
  param_1[0x6a] = 0x3dcccccd;
  param_1[0x188d] = 0;
  return;
}

