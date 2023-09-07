
undefined4 * __fastcall FUN_0041c676(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x6a0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x68f] = 0x42000000;
  param_1[0x690] = 0x41800000;
  param_1[0x691] = 0x43c00000;
  param_1[0x692] = 0x43e00000;
  return param_1;
}

