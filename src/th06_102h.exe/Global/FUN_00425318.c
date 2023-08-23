
undefined4 * FUN_00425318(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_3c;
  int local_34;
  undefined4 *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = in_ECX + 9;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720((int)local_20);
    local_20 = local_20 + 0x44;
  }
  local_34 = 0x20;
  local_3c = in_ECX + 0x4d;
  while (local_34 = local_34 + -1, -1 < local_34) {
    FUN_00403720((int)local_3c);
    local_3c = local_3c + 0x44;
  }
  local_50 = 0x10;
  local_58 = in_ECX + 0x8cd;
  while (local_50 = local_50 + -1, -1 < local_50) {
    FUN_00403720((int)local_58);
    local_58 = local_58 + 0x44;
  }
  puVar2 = in_ECX;
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return in_ECX;
}

