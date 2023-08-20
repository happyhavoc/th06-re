
int FUN_00411240(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_30;
  int local_18;
  
  FUN_00403720();
  local_18 = 8;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720();
  }
  FUN_00424127();
  local_30 = 8;
  while (local_30 = local_30 + -1, -1 < local_30) {
    FUN_00424127();
  }
  FUN_00424127();
  FUN_00424127();
  puVar2 = (undefined4 *)(in_ECX + 0xd00);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00424127();
  puVar2 = (undefined4 *)(in_ECX + 0xd64);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00424127();
  FUN_00424127();
  return in_ECX;
}

