
VeryBigStruct1c000 * __fastcall FUN_00411240(VeryBigStruct1c000 *param_1)

{
  VeryBigStruct1c000 *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *local_38;
  int local_30;
  undefined *local_20;
  int local_18;
  
  FUN_00403720(param_1);
  local_18 = 8;
  pVVar1 = param_1 + 1;
  while (local_20 = &pVVar1->field_0x4, local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720((VeryBigStruct1c000 *)local_20);
    pVVar1 = (VeryBigStruct1c000 *)(local_20 + 0x10c);
  }
  FUN_00424127((Unk3field *)&param_1[9].field_0x28);
  local_30 = 8;
  local_38 = &param_1[9].field_0x70;
  while (local_30 = local_30 + -1, -1 < local_30) {
    FUN_00424127((Unk3field *)(local_38 + 4));
    local_38 = local_38 + 0x4c;
  }
  FUN_00424127((Unk3field *)&param_1[0xc].field48_0x30.field1_0x4);
  FUN_00424127((Unk3field *)&param_1[0xc].field_0x60);
  puVar3 = (undefined4 *)&param_1[0xc].field_0x70;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_00424127((Unk3field *)&param_1[0xc].field_0xc8);
  puVar3 = (undefined4 *)&param_1[0xc].field_0xd4;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_00424127((Unk3field *)&param_1[0xd].field153_0xa4.field1_0x4);
  FUN_00424127((Unk3field *)&param_1[0xe].field_0x14);
  return param_1;
}

