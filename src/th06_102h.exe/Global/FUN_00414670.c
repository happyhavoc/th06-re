
Unknown * FUN_00414670(short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  VeryBigStruct *pVVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  short local_10;
  Unknown *local_c;
  int local_8;
  
  pVVar3 = VERY_BIG_STRUCT;
  local_c = (Unknown *)(in_ECX + 0xec000);
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return local_c;
    }
    if (local_c[3].field3_0xc == 0) break;
    local_8 = local_8 + 1;
    local_c = (Unknown *)&local_c[3].field9_0x24;
  }
  sVar1 = *param_1;
  local_10 = sVar1 + 0x209;
  *(short *)&local_c->field_0xb4 = local_10;
  FUN_00432430(local_c,*(undefined4 *)(&pVVar3->field_0x1d158 + sVar1 * 4));
  FUN_004323a0(VERY_BIG_STRUCT,local_c,local_c->field52_0xb0 + param_1[1]);
  pVVar3 = VERY_BIG_STRUCT;
  uVar2 = *(undefined4 *)(&DAT_00476440 + param_1[1] * 4);
  piVar4 = &local_c[1].field13_0x3c.field4_0x10;
  FUN_00403580((Unknown *)piVar4);
  FUN_004323a0(pVVar3,(Unknown *)piVar4,(short)uVar2 + 0x28c);
  local_c[2].field2_0x8 = local_c[2].field2_0x8 | 4;
  local_c[2].field31_0x98 = *(float *)(param_1 + 2);
  *(undefined4 *)&local_c[2].field_0x9c = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)&local_c[2].field_0xa0 = *(undefined4 *)(param_1 + 6);
  *(short *)((int)&local_c[3].field7_0x1c + 2) = param_1[1];
  local_c[3].field3_0xc = 1;
  *(undefined4 *)&local_c[2].field_0xa4 = *(undefined4 *)(param_1 + 8);
  if (param_1[0x24] == 0) {
    fVar5 = (float10)FUN_00428700(param_1 + 2);
    *(float *)&local_c[2].field_0xa4 = (float)(fVar5 + (float10)*(float *)&local_c[2].field_0xa4);
  }
  *(short *)&local_c[3].field7_0x1c = param_1[0x26];
  local_c[3].field6_0x18 = 0.0;
  local_c[3].field5_0x14 = 0;
  local_c[3].field4_0x10 = 0xfffffc19;
  *(undefined4 *)&local_c[2].field_0xa8 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)&local_c[2].field_0xac = *(undefined4 *)(param_1 + 0x12);
  *(undefined4 *)&local_c[2].field52_0xb0 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&local_c[2].field_0xb4 = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)&local_c[2].field_0xb8 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)&local_c[2].field_0xbc = *(undefined4 *)(param_1 + 0x18);
  local_c[3].field0_0x0 = *(undefined4 *)(param_1 + 0x1a);
  local_c[3].field1_0x4 = *(undefined4 *)(param_1 + 0x1c);
  local_c[2].field67_0xc0 = *(VeryBigStruct0tbl **)(param_1 + 0x1e);
  local_c[3].field2_0x8 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)&local_c[2].field_0xbc == 0) {
    *(undefined *)&local_c[3].field8_0x20 = 1;
    return local_c;
  }
  *(undefined *)&local_c[3].field8_0x20 = 0;
  return local_c;
}

