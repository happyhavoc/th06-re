
int __fastcall FUN_00425e10(int param_1)

{
  VeryBigStruct1c000 *local_64;
  int local_5c;
  Unk3field *local_50;
  int local_48;
  int local_3c;
  int local_30;
  int local_24;
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  FUN_00403720((VeryBigStruct1c000 *)param_1);
  local_18 = 3;
  local_20 = (VeryBigStruct1c000 *)(param_1 + 0x110);
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[1].field_0x4;
  }
  local_24 = 2;
  do {
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  local_30 = 0x20;
  do {
    local_30 = local_30 + -1;
  } while (-1 < local_30);
  local_3c = 0x20;
  do {
    local_3c = local_3c + -1;
  } while (-1 < local_3c);
  local_48 = 2;
  local_50 = (Unk3field *)(param_1 + 0x9b8);
  while (local_48 = local_48 + -1, -1 < local_48) {
    FUN_00424127(local_50);
    local_50 = local_50 + 1;
  }
  FUN_00424127((Unk3field *)(param_1 + 0x9e8));
  local_5c = 0x50;
  local_64 = (VeryBigStruct1c000 *)(param_1 + 0xa28);
  while (local_5c = local_5c + -1, -1 < local_5c) {
    FUN_00403720(local_64);
    FUN_00424127((Unk3field *)&local_64[1].field48_0x30.field1_0x4);
    local_64 = (VeryBigStruct1c000 *)&local_64[1].field_0x4c;
  }
  FUN_00424127((Unk3field *)(param_1 + 0x75a8));
  FUN_00424127((Unk3field *)(param_1 + 0x75b4));
  FUN_00426000();
  return param_1;
}

