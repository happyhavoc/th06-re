
undefined4 * FUN_004108b0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  
  local_18 = 0x10;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720();
  }
  FUN_00424127();
  FUN_00424127();
  FUN_00424127();
  puVar2 = in_ECX;
  for (iVar1 = 0x45c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[0x452] = 8;
  in_ECX[0x44c] = 0;
  in_ECX[1099] = 0;
  in_ECX[0x44a] = 0xfffffc19;
  in_ECX[0x449] = 0;
  in_ECX[0x448] = 0;
  in_ECX[0x447] = 0xfffffc19;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return in_ECX;
}

