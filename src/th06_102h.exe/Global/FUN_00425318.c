
undefined4 * FUN_00425318(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  AnmVm *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = (AnmVm *)(in_ECX + 9);
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 0x20;
  local_3c = (AnmVm *)(in_ECX + 0x4d);
  while (local_34 = local_34 + -1, -1 < local_34) {
    FUN_00403720(local_3c);
    local_3c = local_3c + 1;
  }
  local_50 = 0x10;
  local_58 = (AnmVm *)(in_ECX + 0x8cd);
  while (local_50 = local_50 + -1, -1 < local_50) {
    FUN_00403720(local_58);
    local_58 = local_58 + 1;
  }
  puVar2 = in_ECX;
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return in_ECX;
}

