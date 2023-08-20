
undefined4 * FUN_0041c676(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX;
  for (iVar1 = 0x6a0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[0x68f] = 0x42000000;
  in_ECX[0x690] = 0x41800000;
  in_ECX[0x691] = 0x43c00000;
  in_ECX[0x692] = 0x43e00000;
  return in_ECX;
}

