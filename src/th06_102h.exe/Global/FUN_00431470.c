
undefined4 * __fastcall FUN_00431470(VeryBigStruct *param_1)

{
  int iVar1;
  VeryBigStruct *pVVar2;
  int local_1c;
  int local_8;
  
  FUN_00403720(&param_1->unk2);
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  param_1->field2080_0x1c930 = 0;
  pVVar2 = param_1;
                    /* memset(this, 0, sizeof(this)); */
  for (iVar1 = 0x844b; iVar1 != 0; iVar1 = iVar1 + -1) {
    pVVar2->field0_0x0[0].field0_0x0 = 0;
    pVVar2 = (VeryBigStruct *)&pVVar2->field0_0x0[0].field_0x4;
  }
  for (local_8 = 0; local_8 < 0x800; local_8 = local_8 + 1) {
    param_1->field0_0x0[local_8].field0_0x0 = -1;
  }
  FLOAT_006d4654 = 1.0;
  FLOAT_006d463c = 1.0;
  FLOAT_006d4624 = 1.0;
  FLOAT_006d460c = 1.0;
  FLOAT_006d4610 = 0.0;
  FLOAT_006d4614 = 0.0;
  FLOAT_006d4628 = 1.0;
  DAT_006d462c = 0;
  DAT_006d4640 = 0;
  FLOAT_006d4644 = 1.0;
  FLOAT_006d4658 = 1.0;
  FLOAT_006d465c = 1.0;
  FLOAT_006d45f0 = 1.0;
  FLOAT_006d45d4 = 1.0;
  FLOAT_006d45b8 = 1.0;
  FLOAT_006d459c = 1.0;
  UINT_006d45a4 = 0;
  UINT_006d45a8 = 0;
  FLOAT_006d45c0 = 1.0;
  DAT_006d45c4 = 0;
  DAT_006d45dc = 0;
  FLOAT_006d45e0 = 1.0;
  DAT_006d45f8 = 0x3f800000;
  DAT_006d45fc = 0x3f800000;
  param_1->field19748_0x210c4 = 0;
  param_1->field19739_0x210b8 = 0;
  param_1->field_0x210bc = 0;
  param_1->field_0x210bd = 0;
  param_1->field19738_0x210b4 = 1;
  param_1->field_0x210be = 0;
  param_1->field_0x210bf = 0;
  param_1->idx = -1;
  return (undefined4 *)param_1;
}

