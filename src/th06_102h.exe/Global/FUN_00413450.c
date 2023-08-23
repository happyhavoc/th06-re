
int FUN_00413450(void)

{
  int in_ECX;
  int local_60;
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
    FUN_00424127((undefined4 *)(local_30 + 0x59c));
    local_30 = local_30 + 0x5c4;
  }
  local_58 = 0x40;
  local_60 = in_ECX + 0xec000;
  while (local_58 = local_58 + -1, -1 < local_58) {
    FUN_00403720(local_60);
    FUN_00403720(local_60 + 0x110);
    FUN_00424127((undefined4 *)(local_60 + 0x25c));
    local_60 = local_60 + 0x270;
  }
  FUN_00424127((undefined4 *)(in_ECX + 0xf5c08));
  FUN_00413430();
  return in_ECX;
}

