
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void FUN_0040c180(int param_1,int param_2)

{
  ushort uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_2 + 0x10) < 2) {
    FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
    DAT_0069bccc = *(undefined *)(param_2 + 0x10);
  }
  else {
    local_10 = 0xe;
    local_18 = &DAT_005ab5f8;
    if (CUR_RANK < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((*(short *)((int)local_18 + 0x5be) != 0) && (*(short *)((int)local_18 + 0x5be) != 5))
           && ((local_18[0x30] != 0 &&
               (((30.0 <= *(float *)(local_18[0x30] + 0x2c) &&
                 (*(short *)((int)local_18 + 0x5ba) != 5)) &&
                (uVar1 = FUN_0041e780(&DAT_0069d8f8), (uVar1 & 3) == 0)))))) {
          *(undefined2 *)((int)local_18 + 0x5ba) = 5;
          FUN_004323a0(local_18,(int)*(short *)((int)local_18 + 0xb2) +
                                (int)*(short *)((int)local_18 + 0x5ba));
          fVar2 = (float10)FUN_0045bc34();
          if ((float)fVar2 <= 128.0) {
            fVar2 = (float10)FUN_0041e820();
            fVar3 = (float10)FUN_00428680();
            local_18[0x164] =
                 (float)(fVar3 + (float10)1.570796 + (float10)(float)(fVar2 * (float10)6.283185));
          }
          else {
            fVar2 = (float10)FUN_0041e820();
            local_18[0x164] = (float)(fVar2 * (float10)2.356194 + (float10)0.7853982);
          }
          fVar2 = (float10)fcos((float10)(float)local_18[0x164]);
          fVar3 = (float10)fsin((float10)(float)local_18[0x164]);
          local_18[0x15b] = (float)(fVar2 * (float10)(float)local_18[0x161]);
          local_18[0x15c] = (float)(fVar3 * (float10)(float)local_18[0x161]);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = local_18 + 0x171;
      }
    }
    else {
      local_10 = 0x34;
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if ((((*(short *)((int)local_18 + 0x5be) != 0) && (*(short *)((int)local_18 + 0x5be) != 5))
            && (local_18[0x30] != 0)) &&
           (((30.0 <= *(float *)(local_18[0x30] + 0x2c) && (*(short *)((int)local_18 + 0x5ba) != 5))
            && (uVar1 = FUN_0041e780(&DAT_0069d8f8), (uVar1 & 3) == 0)))) {
          *(undefined2 *)((int)local_18 + 0x5ba) = 5;
          FUN_004323a0(local_18,(int)*(short *)((int)local_18 + 0xb2) +
                                (int)*(short *)((int)local_18 + 0x5ba));
          fVar2 = (float10)FUN_0045bc34();
          if ((float)fVar2 <= 128.0) {
            fVar2 = (float10)FUN_0041e820();
            fVar3 = (float10)FUN_00428680();
            local_18[0x164] =
                 (float)(fVar3 + (float10)1.570796 + (float10)(float)(fVar2 * (float10)6.283185));
          }
          else {
            fVar2 = (float10)FUN_0041e820();
            local_18[0x164] = (float)(fVar2 * (float10)6.283185);
          }
          fVar2 = (float10)fcos((float10)(float)local_18[0x164]);
          fVar3 = (float10)fsin((float10)(float)local_18[0x164]);
          local_18[0x15b] = (float)(fVar2 * (float10)(float)local_18[0x161]);
          local_18[0x15c] = (float)(fVar3 * (float10)(float)local_18[0x161]);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = local_18 + 0x171;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  return;
}

