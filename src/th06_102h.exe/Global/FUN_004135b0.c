
undefined4 FUN_004135b0(short *param_1,uint param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  Unknown *pUVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float local_14;
  Unknown *local_10;
  int local_c;
  float local_8;
  
  local_10 = (Unknown *)(in_ECX + 0x5600 + *(int *)(in_ECX + 0xf5c00) * 0x5c4);
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    *(int *)(in_ECX + 0xf5c00) = *(int *)(in_ECX + 0xf5c00) + 1;
    if (0x27f < *(int *)(in_ECX + 0xf5c00)) {
      *(undefined4 *)(in_ECX + 0xf5c00) = 0;
    }
    if (*(short *)((int)&local_10[7].field13_0x3c.field9_0x24 + 2) == 0) break;
    local_10 = (Unknown *)&local_10[7].field13_0x3c.field11_0x2c;
    if (*(int *)(in_ECX + 0xf5c00) == 0) {
      local_10 = (Unknown *)(in_ECX + 0x5600);
    }
  }
  if (local_c < 0x280) {
    local_14 = 0.0;
    local_8 = *(float *)(param_1 + 0xc) -
              ((*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xe)) * (float)param_3) /
              (float)(int)param_1[0x23];
    switch(param_1[0x24]) {
    case 0:
    case 1:
      if ((param_1[0x22] & 1U) == 0) {
        local_14 = *(float *)(param_1 + 10) * 0.5 +
                   (float)((int)param_2 / 2) * *(float *)(param_1 + 10);
      }
      else {
        local_14 = (float)((int)(param_2 + 1) / 2) * *(float *)(param_1 + 10);
      }
      local_14 = local_14 + 0.0;
      if ((param_2 & 1) != 0) {
        local_14 = local_14 * -1.0;
      }
      if (param_1[0x24] == 0) {
        local_14 = local_14 + param_4;
      }
      local_14 = local_14 + *(float *)(param_1 + 8);
      break;
    case 2:
      local_14 = param_4 + 0.0;
    case 3:
      local_14 = (float)param_3 * *(float *)(param_1 + 10) + *(float *)(param_1 + 8) +
                 ((float)param_2 * 6.283185) / (float)(int)param_1[0x22] + local_14;
      break;
    case 4:
      local_14 = param_4 + 0.0;
    case 5:
      local_14 = ((float)param_2 * 6.283185) / (float)(int)param_1[0x22] +
                 3.141593 / (float)(int)param_1[0x22] + local_14 + *(float *)(param_1 + 8);
      break;
    case 6:
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 10);
      fVar12 = (float10)FUN_0041e820();
      local_14 = (float)(fVar12 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 10));
      break;
    case 7:
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar12 = (float10)FUN_0041e820();
      local_8 = (float)(fVar12 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 0xe));
      local_14 = (float)param_3 * *(float *)(param_1 + 10) + *(float *)(param_1 + 8) +
                 ((float)param_2 * 6.283185) / (float)(int)param_1[0x22] + 0.0;
      break;
    case 8:
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 10);
      fVar12 = (float10)FUN_0041e820();
      local_14 = (float)(fVar12 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 10));
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar12 = (float10)FUN_0041e820();
      local_8 = (float)(fVar12 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 0xe));
    }
    *(undefined2 *)((int)&local_10[7].field13_0x3c.field9_0x24 + 2) = 1;
    *(undefined *)((int)&local_10[7].field13_0x3c.field10_0x28 + 2) = 1;
    local_10[7].field10_0x28 = local_8;
    fVar12 = (float10)FUN_0041e850(local_14,0);
    local_10[7].field12_0x30.field1_0x4 = (float)fVar12;
    local_10[7].field1_0x4 = *(undefined4 *)(param_1 + 2);
    local_10[7].field2_0x8 = *(undefined4 *)(param_1 + 4);
    local_10[7].field3_0xc = *(undefined4 *)(param_1 + 6);
    local_10[7].field3_0xc = 0x3dcccccd;
    fVar13 = (float10)(float)local_10[7].field12_0x30.field1_0x4;
    fVar12 = (float10)fcos(fVar13);
    fVar13 = (float10)fsin(fVar13);
    local_10[7].field4_0x10 = (float)(fVar12 * (float10)local_8);
    local_10[7].field5_0x14 = (float)(fVar13 * (float10)local_8);
    *(short *)&local_10[7].field13_0x3c.field8_0x20 = param_1[0x26];
    *(short *)((int)&local_10[7].field13_0x3c.field8_0x20 + 2) = param_1[1];
    puVar7 = (undefined4 *)(in_ECX + *param_1 * 0x560);
    pUVar8 = local_10;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      pUVar8->field0_0x0 = *puVar7;
      puVar7 = puVar7 + 1;
      pUVar8 = (Unknown *)&pUVar8->field1_0x4;
    }
    piVar5 = (int *)(in_ECX + 0x440 + *param_1 * 0x560);
    piVar9 = &local_10[5].field13_0x3c.field12_0x30;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    puVar7 = (undefined4 *)(in_ECX + 0x550 + *param_1 * 0x560);
    *(undefined4 *)&local_10[6].field_0xb8 = *puVar7;
    *(undefined4 *)&local_10[6].field_0xbc = puVar7[1];
    local_10[6].field67_0xc0 = (VeryBigStruct0tbl *)puVar7[2];
    *(undefined *)&local_10[7].field0_0x0 = *(undefined *)(in_ECX + 0x55c + *param_1 * 0x560);
    *(undefined *)((int)&local_10[7].field0_0x0 + 1) =
         *(undefined *)(in_ECX + 0x55d + *param_1 * 0x560);
    if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 2) == 0) {
      if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 4) == 0) {
        if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 8) != 0) {
          puVar7 = (undefined4 *)(in_ECX + 0x330 + *param_1 * 0x560);
          puVar11 = &local_10[4].field8_0x20;
          for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          fVar2 = local_10->field67_0xc0->field35_0x2c;
          if (fVar2 < 16.0 == (fVar2 == 16.0)) {
            fVar2 = local_10->field67_0xc0->field35_0x2c;
            if (fVar2 < 32.0 == (fVar2 == 32.0)) {
              FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[4].field8_0x20,
                           *(short *)&local_10[5].field3_0xc + param_1[1]);
            }
            else if (*(short *)&local_10->field_0xb4 == 0x207) {
              FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[4].field8_0x20,
                           *(short *)&local_10[5].field3_0xc + 1);
            }
            else {
              FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[4].field8_0x20,
                           *(short *)&local_10[5].field3_0xc +
                           (short)*(undefined4 *)(&DAT_00476480 + param_1[1] * 4));
            }
          }
          else {
            FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[4].field8_0x20,
                         *(short *)&local_10[5].field3_0xc +
                         (short)*(undefined4 *)(&DAT_00476440 + param_1[1] * 4));
          }
          *(undefined2 *)((int)&local_10[7].field13_0x3c.field9_0x24 + 2) = 4;
        }
      }
      else {
        pfVar6 = (float *)(in_ECX + 0x220 + *param_1 * 0x560);
        pfVar10 = &local_10[2].field31_0x98;
        for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar10 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar10 = pfVar10 + 1;
        }
        fVar2 = local_10->field67_0xc0->field35_0x2c;
        if (fVar2 < 16.0 == (fVar2 == 16.0)) {
          fVar2 = local_10->field67_0xc0->field35_0x2c;
          if (fVar2 < 32.0 == (fVar2 == 32.0)) {
            FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[2].field31_0x98,
                         local_10[3].field16_0x84 + param_1[1]);
          }
          else if (*(short *)&local_10->field_0xb4 == 0x207) {
            FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[2].field31_0x98,
                         local_10[3].field16_0x84 + 1);
          }
          else {
            FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[2].field31_0x98,
                         local_10[3].field16_0x84 +
                         (short)*(undefined4 *)(&DAT_00476480 + param_1[1] * 4));
          }
        }
        else {
          FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[2].field31_0x98,
                       local_10[3].field16_0x84 +
                       (short)*(undefined4 *)(&DAT_00476440 + param_1[1] * 4));
        }
        *(undefined2 *)((int)&local_10[7].field13_0x3c.field9_0x24 + 2) = 3;
      }
    }
    else {
      piVar5 = (int *)(in_ECX + 0x110 + *param_1 * 0x560);
      pfVar6 = (float *)&local_10[1].field13_0x3c.field4_0x10;
      for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = (float)*piVar5;
        piVar5 = piVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      fVar2 = local_10->field67_0xc0->field35_0x2c;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = local_10->field67_0xc0->field35_0x2c;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[1].field13_0x3c.field4_0x10,
                       *(short *)&local_10[2].field12_0x30.field2_0x8 + param_1[1]);
        }
        else if (*(short *)&local_10->field_0xb4 == 0x207) {
          FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[1].field13_0x3c.field4_0x10,
                       *(short *)&local_10[2].field12_0x30.field2_0x8 + 1);
        }
        else {
          FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[1].field13_0x3c.field4_0x10,
                       *(short *)&local_10[2].field12_0x30.field2_0x8 +
                       (short)*(undefined4 *)(&DAT_00476480 + param_1[1] * 4));
        }
      }
      else {
        FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[1].field13_0x3c.field4_0x10,
                     *(short *)&local_10[2].field12_0x30.field2_0x8 +
                     (short)*(undefined4 *)(&DAT_00476440 + param_1[1] * 4));
      }
      *(undefined2 *)((int)&local_10[7].field13_0x3c.field9_0x24 + 2) = 2;
    }
    FUN_004323a0(VERY_BIG_STRUCT,local_10,local_10->field52_0xb0 + param_1[1]);
    fVar2 = local_10->field67_0xc0->field35_0x2c;
    if (fVar2 < 16.0 == (fVar2 == 16.0)) {
      fVar2 = local_10->field67_0xc0->field35_0x2c;
      if (fVar2 < 32.0 == (fVar2 == 32.0)) {
        FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[5].field13_0x3c.field12_0x30,
                     *(short *)&local_10[6].field13_0x3c.field7_0x1c + param_1[1]);
      }
      else if (*(short *)&local_10->field_0xb4 == 0x207) {
        FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[5].field13_0x3c.field12_0x30,
                     *(short *)&local_10[6].field13_0x3c.field7_0x1c + 1);
      }
      else {
        FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[5].field13_0x3c.field12_0x30,
                     *(short *)&local_10[6].field13_0x3c.field7_0x1c +
                     (short)*(undefined4 *)(&DAT_00476480 + param_1[1] * 4));
      }
    }
    else {
      FUN_004323a0(VERY_BIG_STRUCT,(Unknown *)&local_10[5].field13_0x3c.field12_0x30,
                   *(short *)&local_10[6].field13_0x3c.field7_0x1c +
                   (short)*(undefined4 *)(&DAT_00476440 + param_1[1] * 4));
    }
    if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 0x10) == 0) {
      if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 0x20) != 0) {
        local_10[7].field11_0x2c = *(undefined4 *)(param_1 + 0x10);
        local_10[7].field12_0x30.field2_0x8 = *(undefined4 *)(param_1 + 0x12);
        local_10[7].field13_0x3c.field4_0x10 = *(int *)(param_1 + 0x18);
      }
    }
    else {
      if (*(float *)(param_1 + 0x12) < -999.0 == (*(float *)(param_1 + 0x12) == -999.0)) {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar12 = (float10)fcos((float10)*(float *)(param_1 + 0x12));
        fVar13 = (float10)fsin((float10)*(float *)(param_1 + 0x12));
        local_10[7].field7_0x1c = (float)(fVar12 * (float10)fVar2);
        local_10[7].field8_0x20 = (float)(fVar13 * (float10)fVar2);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar12 = (float10)fcos((float10)local_14);
        fVar13 = (float10)fsin((float10)local_14);
        local_10[7].field7_0x1c = (float)(fVar12 * (float10)fVar2);
        local_10[7].field8_0x20 = (float)(fVar13 * (float10)fVar2);
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        local_10[7].field13_0x3c.field4_0x10 = 99999;
      }
      else {
        local_10[7].field13_0x3c.field4_0x10 = *(int *)(param_1 + 0x18);
      }
      local_10[7].field9_0x24 = 0;
    }
    if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 0x1c0) != 0) {
      local_10[7].field13_0x3c.field0_0x0 = *(float *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x12) < 0.0) {
        local_10[7].field12_0x30.field0_0x0 = local_8;
      }
      else {
        local_10[7].field12_0x30.field0_0x0 = *(undefined4 *)(param_1 + 0x12);
      }
      local_10[7].field13_0x3c.field5_0x14 = *(float *)(param_1 + 0x18);
      local_10[7].field13_0x3c.field7_0x1c = *(int *)(param_1 + 0x1a);
      local_10[7].field13_0x3c.field6_0x18 = 0;
    }
    if ((*(ushort *)&local_10[7].field13_0x3c.field8_0x20 & 0xc00) != 0) {
      if (*(float *)(param_1 + 0x10) < 0.0) {
        local_10[7].field12_0x30.field0_0x0 = local_8;
      }
      else {
        local_10[7].field12_0x30.field0_0x0 = *(undefined4 *)(param_1 + 0x10);
      }
      local_10[7].field13_0x3c.field7_0x1c = *(int *)(param_1 + 0x18);
      local_10[7].field13_0x3c.field6_0x18 = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

