
int FUN_00413450(void)

{
  int in_ECX;
  VeryBigStruct1c000 *local_60;
  int local_58;
  int local_30;
  int local_28;
  int local_18;
  
  local_18 = 0x10;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00413560();
  }
  local_28 = 0x280;
  local_30 = in_ECX + 0x5600;
  while (local_28 = local_28 + -1, -1 < local_28) {
    FUN_00413560();
    FUN_00424127((Unk3field *)(local_30 + 0x59c));
    local_30 = local_30 + 0x5c4;
  }
  local_58 = 0x40;
  local_60 = (VeryBigStruct1c000 *)(in_ECX + 0xec000);
  while (local_58 = local_58 + -1, -1 < local_58) {
    FUN_00403720(local_60);
    FUN_00403720((VeryBigStruct1c000 *)&local_60[1].field_0x4);
    FUN_00424127((Unk3field *)&local_60[2].field_0x44);
    local_60 = (VeryBigStruct1c000 *)&local_60[2].field_0x58;
  }
  FUN_00424127((Unk3field *)(in_ECX + 0xf5c08));
  FUN_00413430();
  return in_ECX;
}

