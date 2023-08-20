
undefined4 * FUN_00431420(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  puVar2 = in_ECX;
  for (iVar1 = 0x18e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    in_ECX[local_8 + 0x102] = 0xffffffff;
  }
  return in_ECX;
}

