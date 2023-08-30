
undefined4 * FUN_0040e2d0(void)

{
  undefined4 *in_ECX;
  VeryBigStruct1c000 *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = (VeryBigStruct1c000 *)(in_ECX + 2);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    FUN_00403720(local_24);
    FUN_00424127((Unk3field *)&local_24[1].field_0x58);
    local_24 = (VeryBigStruct1c000 *)&local_24[1].field_0x70;
  }
  FUN_0040e340(in_ECX);
  return in_ECX;
}

