
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void FUN_0040c180(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float10 fVar4;
  float10 fVar5;
  Unknown *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_2 + 0x10) < 2) {
    FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
    DAT_0069bccc = *(undefined *)(param_2 + 0x10);
  }
  else {
    local_10 = 0xe;
    local_18 = (Unknown *)&DAT_005ab5f8;
    if (CUR_RANK < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((*(short *)((int)&local_18[7].field13_0x3c.field9_0x24 + 2) != 0) &&
            (*(short *)((int)&local_18[7].field13_0x3c.field9_0x24 + 2) != 5)) &&
           ((local_18->field67_0xc0 != (VeryBigStruct0tbl *)0x0 &&
            (((30.0 <= local_18->field67_0xc0->field35_0x2c &&
              (*(short *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2) != 5)) &&
             (uVar3 = FUN_0041e780(&DAT_0069d8f8), (uVar3 & 3) == 0)))))) {
          *(undefined2 *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2) = 5;
          FUN_004323a0(VERY_BIG_STRUCT,local_18,
                       *(short *)&local_18->field_0xb2 +
                       *(short *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2));
          fVar1 = (float)local_18[7].field1_0x4 - DAT_006caa68;
          fVar2 = (float)local_18[7].field2_0x8 - DAT_006caa6c;
          fVar4 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar2 * fVar2));
          if ((float)fVar4 <= 128.0) {
            fVar4 = (float10)FUN_0041e820();
            fVar5 = (float10)FUN_00428680();
            local_18[7].field12_0x30.field1_0x4 =
                 (float)(fVar5 + (float10)1.570796 + (float10)(float)(fVar4 * (float10)6.283185));
          }
          else {
            fVar4 = (float10)FUN_0041e820();
            local_18[7].field12_0x30.field1_0x4 =
                 (float)(fVar4 * (float10)2.356194 + (float10)0.7853982);
          }
          fVar5 = (float10)(float)local_18[7].field12_0x30.field1_0x4;
          fVar4 = (float10)fcos(fVar5);
          fVar5 = (float10)fsin(fVar5);
          local_18[7].field4_0x10 = (float)(fVar4 * (float10)(float)local_18[7].field10_0x28);
          local_18[7].field5_0x14 = (float)(fVar5 * (float10)(float)local_18[7].field10_0x28);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (Unknown *)&local_18[7].field13_0x3c.field11_0x2c;
      }
    }
    else {
      local_10 = 0x34;
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if ((((*(short *)((int)&local_18[7].field13_0x3c.field9_0x24 + 2) != 0) &&
             (*(short *)((int)&local_18[7].field13_0x3c.field9_0x24 + 2) != 5)) &&
            (local_18->field67_0xc0 != (VeryBigStruct0tbl *)0x0)) &&
           (((30.0 <= local_18->field67_0xc0->field35_0x2c &&
             (*(short *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2) != 5)) &&
            (uVar3 = FUN_0041e780(&DAT_0069d8f8), (uVar3 & 3) == 0)))) {
          *(undefined2 *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2) = 5;
          FUN_004323a0(VERY_BIG_STRUCT,local_18,
                       *(short *)&local_18->field_0xb2 +
                       *(short *)((int)&local_18[7].field13_0x3c.field8_0x20 + 2));
          fVar1 = (float)local_18[7].field1_0x4 - DAT_006caa68;
          fVar2 = (float)local_18[7].field2_0x8 - DAT_006caa6c;
          fVar4 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar2 * fVar2));
          if ((float)fVar4 <= 128.0) {
            fVar4 = (float10)FUN_0041e820();
            fVar5 = (float10)FUN_00428680();
            local_18[7].field12_0x30.field1_0x4 =
                 (float)(fVar5 + (float10)1.570796 + (float10)(float)(fVar4 * (float10)6.283185));
          }
          else {
            fVar4 = (float10)FUN_0041e820();
            local_18[7].field12_0x30.field1_0x4 = (float)(fVar4 * (float10)6.283185);
          }
          fVar5 = (float10)(float)local_18[7].field12_0x30.field1_0x4;
          fVar4 = (float10)fcos(fVar5);
          fVar5 = (float10)fsin(fVar5);
          local_18[7].field4_0x10 = (float)(fVar4 * (float10)(float)local_18[7].field10_0x28);
          local_18[7].field5_0x14 = (float)(fVar5 * (float10)(float)local_18[7].field10_0x28);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (Unknown *)&local_18[7].field13_0x3c.field11_0x2c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  return;
}

