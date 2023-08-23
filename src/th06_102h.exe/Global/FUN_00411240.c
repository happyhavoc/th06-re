
int FUN_00411240(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_38;
  int local_30;
  int local_20;
  int local_18;
  
  FUN_00403720(in_ECX);
  local_18 = 8;
  local_20 = in_ECX + 0x110;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = local_20 + 0x110;
  }
  FUN_00424127((undefined4 *)(in_ECX + 0x994));
  local_30 = 8;
  local_38 = in_ECX + 0x9dc;
  while (local_30 = local_30 + -1, -1 < local_30) {
    FUN_00424127((undefined4 *)(local_38 + 4));
    local_38 = local_38 + 0x4c;
  }
  FUN_00424127((undefined4 *)(in_ECX + 0xcc4));
  FUN_00424127((undefined4 *)(in_ECX + 0xcf0));
  puVar2 = (undefined4 *)(in_ECX + 0xd00);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00424127((undefined4 *)(in_ECX + 0xd58));
  puVar2 = (undefined4 *)(in_ECX + 0xd64);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00424127((undefined4 *)(in_ECX + 0xe44));
  FUN_00424127((undefined4 *)(in_ECX + 0xebc));
  return in_ECX;
}

