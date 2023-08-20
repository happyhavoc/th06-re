
undefined4 FUN_004135b0(short *param_1,uint param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float local_14;
  undefined4 *local_10;
  int local_c;
  float local_8;
  
  local_10 = (undefined4 *)(in_ECX + 0x5600 + *(int *)(in_ECX + 0xf5c00) * 0x5c4);
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    *(int *)(in_ECX + 0xf5c00) = *(int *)(in_ECX + 0xf5c00) + 1;
    if (0x27f < *(int *)(in_ECX + 0xf5c00)) {
      *(undefined4 *)(in_ECX + 0xf5c00) = 0;
    }
    if (*(short *)((int)local_10 + 0x5be) == 0) break;
    local_10 = local_10 + 0x171;
    if (*(int *)(in_ECX + 0xf5c00) == 0) {
      local_10 = (undefined4 *)(in_ECX + 0x5600);
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
      fVar7 = (float10)FUN_0041e820();
      local_14 = (float)(fVar7 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 10));
      break;
    case 7:
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar7 = (float10)FUN_0041e820();
      local_8 = (float)(fVar7 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 0xe));
      local_14 = (float)param_3 * *(float *)(param_1 + 10) + *(float *)(param_1 + 8) +
                 ((float)param_2 * 6.283185) / (float)(int)param_1[0x22] + 0.0;
      break;
    case 8:
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 10);
      fVar7 = (float10)FUN_0041e820();
      local_14 = (float)(fVar7 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 10));
      fVar2 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar7 = (float10)FUN_0041e820();
      local_8 = (float)(fVar7 * (float10)(fVar2 - fVar1) + (float10)*(float *)(param_1 + 0xe));
    }
    *(undefined2 *)((int)local_10 + 0x5be) = 1;
    *(undefined *)((int)local_10 + 0x5c2) = 1;
    local_10[0x161] = local_8;
    fVar7 = (float10)FUN_0041e850(local_14,0);
    local_10[0x164] = (float)fVar7;
    local_10[0x158] = *(undefined4 *)(param_1 + 2);
    local_10[0x159] = *(undefined4 *)(param_1 + 4);
    local_10[0x15a] = *(undefined4 *)(param_1 + 6);
    local_10[0x15a] = 0x3dcccccd;
    fVar7 = (float10)fcos((float10)(float)local_10[0x164]);
    fVar8 = (float10)fsin((float10)(float)local_10[0x164]);
    local_10[0x15b] = (float)(fVar7 * (float10)local_8);
    local_10[0x15c] = (float)(fVar8 * (float10)local_8);
    *(short *)(local_10 + 0x16e) = param_1[0x26];
    *(short *)((int)local_10 + 0x5ba) = param_1[1];
    puVar5 = (undefined4 *)(in_ECX + *param_1 * 0x560);
    puVar6 = local_10;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(in_ECX + 0x440 + *param_1 * 0x560);
    puVar6 = local_10 + 0x110;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(in_ECX + 0x550 + *param_1 * 0x560);
    local_10[0x154] = *puVar5;
    local_10[0x155] = puVar5[1];
    local_10[0x156] = puVar5[2];
    *(undefined *)(local_10 + 0x157) = *(undefined *)(in_ECX + 0x55c + *param_1 * 0x560);
    *(undefined *)((int)local_10 + 0x55d) = *(undefined *)(in_ECX + 0x55d + *param_1 * 0x560);
    if ((*(ushort *)(local_10 + 0x16e) & 2) == 0) {
      if ((*(ushort *)(local_10 + 0x16e) & 4) == 0) {
        if ((*(ushort *)(local_10 + 0x16e) & 8) != 0) {
          puVar5 = (undefined4 *)(in_ECX + 0x330 + *param_1 * 0x560);
          puVar6 = local_10 + 0xcc;
          for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          if (*(float *)(local_10[0x30] + 0x2c) < 16.0 ==
              (*(float *)(local_10[0x30] + 0x2c) == 16.0)) {
            if (*(float *)(local_10[0x30] + 0x2c) < 32.0 ==
                (*(float *)(local_10[0x30] + 0x2c) == 32.0)) {
              FUN_004323a0(local_10 + 0xcc,(int)*(short *)(local_10 + 0xf8) + (int)param_1[1]);
            }
            else if (*(short *)(local_10 + 0x2d) == 0x207) {
              FUN_004323a0(local_10 + 0xcc,*(short *)(local_10 + 0xf8) + 1);
            }
            else {
              FUN_004323a0(local_10 + 0xcc,
                           (int)*(short *)(local_10 + 0xf8) +
                           *(int *)(&DAT_00476480 + param_1[1] * 4));
            }
          }
          else {
            FUN_004323a0(local_10 + 0xcc,
                         (int)*(short *)(local_10 + 0xf8) + *(int *)(&DAT_00476440 + param_1[1] * 4)
                        );
          }
          *(undefined2 *)((int)local_10 + 0x5be) = 4;
        }
      }
      else {
        puVar5 = (undefined4 *)(in_ECX + 0x220 + *param_1 * 0x560);
        puVar6 = local_10 + 0x88;
        for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if (*(float *)(local_10[0x30] + 0x2c) < 16.0 == (*(float *)(local_10[0x30] + 0x2c) == 16.0))
        {
          if (*(float *)(local_10[0x30] + 0x2c) < 32.0 ==
              (*(float *)(local_10[0x30] + 0x2c) == 32.0)) {
            FUN_004323a0(local_10 + 0x88,(int)*(short *)(local_10 + 0xb4) + (int)param_1[1]);
          }
          else if (*(short *)(local_10 + 0x2d) == 0x207) {
            FUN_004323a0(local_10 + 0x88,*(short *)(local_10 + 0xb4) + 1);
          }
          else {
            FUN_004323a0(local_10 + 0x88,
                         (int)*(short *)(local_10 + 0xb4) + *(int *)(&DAT_00476480 + param_1[1] * 4)
                        );
          }
        }
        else {
          FUN_004323a0(local_10 + 0x88,
                       (int)*(short *)(local_10 + 0xb4) + *(int *)(&DAT_00476440 + param_1[1] * 4));
        }
        *(undefined2 *)((int)local_10 + 0x5be) = 3;
      }
    }
    else {
      puVar5 = (undefined4 *)(in_ECX + 0x110 + *param_1 * 0x560);
      puVar6 = local_10 + 0x44;
      for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if (*(float *)(local_10[0x30] + 0x2c) < 16.0 == (*(float *)(local_10[0x30] + 0x2c) == 16.0)) {
        if (*(float *)(local_10[0x30] + 0x2c) < 32.0 == (*(float *)(local_10[0x30] + 0x2c) == 32.0))
        {
          FUN_004323a0(local_10 + 0x44,(int)*(short *)(local_10 + 0x70) + (int)param_1[1]);
        }
        else if (*(short *)(local_10 + 0x2d) == 0x207) {
          FUN_004323a0(local_10 + 0x44,*(short *)(local_10 + 0x70) + 1);
        }
        else {
          FUN_004323a0(local_10 + 0x44,
                       (int)*(short *)(local_10 + 0x70) + *(int *)(&DAT_00476480 + param_1[1] * 4));
        }
      }
      else {
        FUN_004323a0(local_10 + 0x44,
                     (int)*(short *)(local_10 + 0x70) + *(int *)(&DAT_00476440 + param_1[1] * 4));
      }
      *(undefined2 *)((int)local_10 + 0x5be) = 2;
    }
    FUN_004323a0(local_10,(int)*(short *)(local_10 + 0x2c) + (int)param_1[1]);
    if (*(float *)(local_10[0x30] + 0x2c) < 16.0 == (*(float *)(local_10[0x30] + 0x2c) == 16.0)) {
      if (*(float *)(local_10[0x30] + 0x2c) < 32.0 == (*(float *)(local_10[0x30] + 0x2c) == 32.0)) {
        FUN_004323a0(local_10 + 0x110,(int)*(short *)(local_10 + 0x13c) + (int)param_1[1]);
      }
      else if (*(short *)(local_10 + 0x2d) == 0x207) {
        FUN_004323a0(local_10 + 0x110,*(short *)(local_10 + 0x13c) + 1);
      }
      else {
        FUN_004323a0(local_10 + 0x110,
                     (int)*(short *)(local_10 + 0x13c) + *(int *)(&DAT_00476480 + param_1[1] * 4));
      }
    }
    else {
      FUN_004323a0(local_10 + 0x110,
                   (int)*(short *)(local_10 + 0x13c) + *(int *)(&DAT_00476440 + param_1[1] * 4));
    }
    if ((*(ushort *)(local_10 + 0x16e) & 0x10) == 0) {
      if ((*(ushort *)(local_10 + 0x16e) & 0x20) != 0) {
        local_10[0x162] = *(undefined4 *)(param_1 + 0x10);
        local_10[0x165] = *(undefined4 *)(param_1 + 0x12);
        local_10[0x16a] = *(undefined4 *)(param_1 + 0x18);
      }
    }
    else {
      if (*(float *)(param_1 + 0x12) < -999.0 == (*(float *)(param_1 + 0x12) == -999.0)) {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar7 = (float10)fcos((float10)*(float *)(param_1 + 0x12));
        fVar8 = (float10)fsin((float10)*(float *)(param_1 + 0x12));
        local_10[0x15e] = (float)(fVar7 * (float10)fVar2);
        local_10[0x15f] = (float)(fVar8 * (float10)fVar2);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar7 = (float10)fcos((float10)local_14);
        fVar8 = (float10)fsin((float10)local_14);
        local_10[0x15e] = (float)(fVar7 * (float10)fVar2);
        local_10[0x15f] = (float)(fVar8 * (float10)fVar2);
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        local_10[0x16a] = 99999;
      }
      else {
        local_10[0x16a] = *(undefined4 *)(param_1 + 0x18);
      }
      local_10[0x160] = 0;
    }
    if ((*(ushort *)(local_10 + 0x16e) & 0x1c0) != 0) {
      local_10[0x166] = *(undefined4 *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x12) < 0.0) {
        local_10[0x163] = local_8;
      }
      else {
        local_10[0x163] = *(undefined4 *)(param_1 + 0x12);
      }
      local_10[0x16b] = *(undefined4 *)(param_1 + 0x18);
      local_10[0x16d] = *(undefined4 *)(param_1 + 0x1a);
      local_10[0x16c] = 0;
    }
    if ((*(ushort *)(local_10 + 0x16e) & 0xc00) != 0) {
      if (*(float *)(param_1 + 0x10) < 0.0) {
        local_10[0x163] = local_8;
      }
      else {
        local_10[0x163] = *(undefined4 *)(param_1 + 0x10);
      }
      local_10[0x16d] = *(undefined4 *)(param_1 + 0x18);
      local_10[0x16c] = 0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

