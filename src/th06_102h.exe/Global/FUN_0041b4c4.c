
int FUN_0041b4c4(void)

{
  int in_ECX;
  VeryBigStruct1c000 *local_5c;
  int local_54;
  VeryBigStruct1c000 *local_40;
  int local_38;
  VeryBigStruct1c000 *local_24;
  int local_1c;
  
  FUN_00424127((Unk3field *)(in_ECX + 0xc));
  local_1c = 2;
  local_24 = (VeryBigStruct1c000 *)(in_ECX + 0x1c);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    FUN_00403720(local_24);
    local_24 = (VeryBigStruct1c000 *)&local_24[1].field_0x4;
  }
  local_38 = 2;
  local_40 = (VeryBigStruct1c000 *)(in_ECX + 0x23c);
  while (local_38 = local_38 + -1, -1 < local_38) {
    FUN_00403720(local_40);
    local_40 = (VeryBigStruct1c000 *)&local_40[1].field_0x4;
  }
  local_54 = 2;
  local_5c = (VeryBigStruct1c000 *)(in_ECX + 0x45c);
  while (local_54 = local_54 + -1, -1 < local_54) {
    FUN_00403720(local_5c);
    local_5c = (VeryBigStruct1c000 *)&local_5c[1].field_0x4;
  }
  return in_ECX;
}

