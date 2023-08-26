
undefined4 FUN_00433960(float *param_1)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int in_ECX;
  uint uVar5;
  float10 fVar6;
  undefined local_120;
  int local_e0;
  float local_3c;
  int local_38;
  long local_34;
  float local_30;
  float local_2c;
  float local_28;
  short *local_24;
  int *local_20;
  short *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  int *local_c;
  short *local_8;
  
  if (param_1[0x2f] == 0.0) {
    return 1;
  }
  if (*(short *)((int)param_1 + 0x8a) == 0) goto LAB_00433998;
LAB_00434098:
  local_24 = (short *)0x0;
  for (local_8 = (short *)param_1[0x2e];
      (((*(char *)(local_8 + 1) != '\x16' ||
        ((int)*(short *)((int)param_1 + 0x8a) != *(int *)(local_8 + 2))) &&
       (*(char *)(local_8 + 1) != '\0')) && (*(char *)(local_8 + 1) != '\x0f'));
      local_8 = (short *)((int)local_8 + *(byte *)((int)local_8 + 3) + 4)) {
    if ((*(char *)(local_8 + 1) == '\x16') && (*(int *)(local_8 + 2) == -1)) {
      local_24 = local_8;
    }
  }
  *(undefined2 *)((int)param_1 + 0x8a) = 0;
  param_1[0x20] = (float)((uint)param_1[0x20] & 0xffffdfff);
  if (*(char *)(local_8 + 1) != '\x16') {
    if (local_24 == (short *)0x0) {
      FUN_004241e5(1);
      goto LAB_00434338;
    }
    local_8 = local_24;
  }
  param_1[0x2f] = (float)((int)local_8 + *(byte *)((int)local_8 + 3) + 4);
  param_1[0xe] = (float)(int)*(short *)param_1[0x2f];
  param_1[0xd] = 0.0;
  param_1[0xc] = -NAN;
  param_1[0x20] = (float)((uint)param_1[0x20] | 1);
LAB_00433998:
  local_8 = (short *)param_1[0x2f];
  if ((int)param_1[0xe] < (int)*local_8) goto LAB_00434338;
  switch(*(undefined *)(local_8 + 1)) {
  case 0:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffffffe);
  case 0xf:
    param_1[0x2f] = 0.0;
    return 1;
  case 1:
    param_1[0x20] = (float)((uint)param_1[0x20] | 1);
    FUN_004323a0(param_1,*(int *)(local_8 + 2) +
                         *(int *)(in_ECX + 0x1e934 + *(short *)(param_1 + 0x2d) * 4));
    param_1[0x3f] = param_1[0xe];
    break;
  case 2:
    param_1[7] = *(float *)(local_8 + 2);
    param_1[6] = *(float *)(local_8 + 4);
    break;
  case 3:
    *(char *)((int)param_1 + 0x7f) = (char)*(undefined4 *)(local_8 + 2);
    break;
  case 4:
    param_1[0x1f] = (float)((uint)param_1[0x1f] & 0xff000000 | *(uint *)(local_8 + 2) & 0xffffff);
    break;
  case 5:
    goto switchD_004339dd_caseD_5;
  case 7:
    param_1[0x20] =
         (float)((uint)param_1[0x20] & 0xffffff3f | ((uint)param_1[0x20] >> 6 & 3 ^ 1) << 6);
    param_1[7] = param_1[7] * -1.0;
    break;
  case 8:
    param_1[0x20] =
         (float)((uint)param_1[0x20] & 0xffffff3f | ((uint)param_1[0x20] >> 6 & 3 ^ 2) << 6);
    param_1[6] = param_1[6] * -1.0;
    break;
  case 9:
    *param_1 = *(float *)(local_8 + 2);
    param_1[1] = *(float *)(local_8 + 4);
    local_10 = (float *)(local_8 + 6);
    param_1[2] = *local_10;
    break;
  case 10:
    param_1[3] = *(float *)(local_8 + 2);
    param_1[4] = *(float *)(local_8 + 4);
    local_14 = (float *)(local_8 + 6);
    param_1[5] = *local_14;
    break;
  case 0xb:
    param_1[9] = *(float *)(local_8 + 2);
    local_18 = (float *)(local_8 + 4);
    param_1[8] = *local_18;
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    break;
  case 0xc:
    local_20 = (int *)(local_8 + 2);
    param_1[0x31] = param_1[0x1f];
    param_1[0x32] = (float)((uint)param_1[0x1f] & 0xffffff | *local_20 << 0x18);
    *(short *)(param_1 + 0x21) = local_8[4];
    param_1[0x42] = 0.0;
    param_1[0x41] = 0.0;
    param_1[0x40] = -NAN;
    break;
  case 0xd:
    param_1[0x20] = (float)((uint)param_1[0x20] | 4);
    break;
  case 0xe:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffffffb);
    break;
  case 0x10:
    param_1[0x20] = (float)((uint)param_1[0x20] | 1);
    local_c = (int *)(local_8 + 2);
    uVar1 = local_8[4];
    if (uVar1 == 0) {
      local_e0 = 0;
    }
    else {
      uVar4 = FUN_0041e780(&DAT_0069d8f8);
      local_e0 = (int)((ulonglong)uVar4 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    FUN_004323a0(param_1,*local_c + local_e0 +
                         *(int *)(in_ECX + 0x1e934 + *(short *)(param_1 + 0x2d) * 4));
    param_1[0x3f] = param_1[0xe];
    break;
  case 0x11:
    if (((uint)param_1[0x20] >> 5 & 1) == 0) {
      fVar2 = *(float *)(local_8 + 6);
      fVar3 = *(float *)(local_8 + 4);
      param_1[0x24] = *(float *)(local_8 + 2);
      param_1[0x25] = fVar3;
      param_1[0x26] = fVar2;
    }
    else {
      fVar2 = *(float *)(local_8 + 6);
      fVar3 = *(float *)(local_8 + 4);
      param_1[0x39] = *(float *)(local_8 + 2);
      param_1[0x3a] = fVar3;
      param_1[0x3b] = fVar2;
    }
    break;
  case 0x12:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffff3ff);
    goto LAB_00433f53;
  case 0x13:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffff3ff | 0x400);
    goto LAB_00433f53;
  case 0x14:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffff3ff | 0x800);
LAB_00433f53:
    if (((uint)param_1[0x20] >> 5 & 1) == 0) {
      param_1[0x33] = param_1[0x24];
      param_1[0x34] = param_1[0x25];
      param_1[0x35] = param_1[0x26];
    }
    else {
      param_1[0x33] = param_1[0x39];
      param_1[0x34] = param_1[0x3a];
      param_1[0x35] = param_1[0x3b];
    }
    fVar2 = *(float *)(local_8 + 6);
    fVar3 = *(float *)(local_8 + 4);
    param_1[0x36] = *(float *)(local_8 + 2);
    param_1[0x37] = fVar3;
    param_1[0x38] = fVar2;
    *(short *)(param_1 + 0x23) = local_8[8];
    param_1[0x3e] = 0.0;
    param_1[0x3d] = 0.0;
    param_1[0x3c] = -NAN;
    break;
  case 0x15:
    goto switchD_004339dd_caseD_15;
  case 0x17:
    param_1[0x20] = (float)((uint)param_1[0x20] | 0x300);
    break;
  case 0x18:
    goto switchD_004339dd_caseD_18;
  case 0x19:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xffffffdf | (*(uint *)(local_8 + 2) & 1) << 5);
    break;
  case 0x1a:
    *(short *)(param_1 + 0x22) = local_8[2];
    break;
  case 0x1b:
    param_1[10] = param_1[10] + *(float *)(local_8 + 2);
    if (param_1[10] < 1.0) {
      if (param_1[10] < 0.0 != NAN(param_1[10])) {
        param_1[10] = param_1[10] + 1.0;
      }
    }
    else {
      param_1[10] = param_1[10] - 1.0;
    }
    break;
  case 0x1c:
    param_1[0xb] = param_1[0xb] + *(float *)(local_8 + 2);
    if (param_1[0xb] < 1.0) {
      if (param_1[0xb] < 0.0 != NAN(param_1[0xb])) {
        param_1[0xb] = param_1[0xb] + 1.0;
      }
    }
    else {
      param_1[0xb] = param_1[0xb] - 1.0;
    }
    break;
  case 0x1d:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffffffe | *(uint *)(local_8 + 2) & 1);
    break;
  case 0x1e:
    param_1[9] = *(float *)(local_8 + 2);
    param_1[8] = *(float *)(local_8 + 4);
    local_1c = local_8 + 6;
    *(short *)((int)param_1 + 0x86) = *local_1c;
    param_1[0x2b] = 0.0;
    param_1[0x2a] = 0.0;
    param_1[0x29] = -NAN;
    param_1[0x28] = param_1[7];
    param_1[0x27] = param_1[6];
    break;
  case 0x1f:
    param_1[0x20] = (float)((uint)param_1[0x20] & 0xffffefff | (*(uint *)(local_8 + 2) & 1) << 0xc);
  }
  param_1[0x2f] = (float)((int)local_8 + *(byte *)((int)local_8 + 3) + 4);
  goto LAB_00433998;
switchD_004339dd_caseD_18:
  param_1[0x20] = (float)((uint)param_1[0x20] & 0xfffffffe);
switchD_004339dd_caseD_15:
  if (*(short *)((int)param_1 + 0x8a) == 0) {
    param_1[0x20] = (float)((uint)param_1[0x20] | 0x2000);
    FUN_004241e5(1);
LAB_00434338:
    if (NAN(param_1[3]) == (param_1[3] == 0.0)) {
      fVar6 = (float10)FUN_0041e850(*param_1,DAT_006c6ec0 * param_1[3]);
      *param_1 = (float)fVar6;
    }
    if (NAN(param_1[4]) == (param_1[4] == 0.0)) {
      fVar6 = (float10)FUN_0041e850(param_1[1],DAT_006c6ec0 * param_1[4]);
      param_1[1] = (float)fVar6;
    }
    if (NAN(param_1[5]) == (param_1[5] == 0.0)) {
      fVar6 = (float10)FUN_0041e850(param_1[2],DAT_006c6ec0 * param_1[5]);
      param_1[2] = (float)fVar6;
    }
    if (*(short *)((int)param_1 + 0x86) < 1) {
      param_1[6] = DAT_006c6ec0 * param_1[8] + param_1[6];
      param_1[7] = DAT_006c6ec0 * param_1[9] + param_1[7];
    }
    else {
      param_1[0x29] = param_1[0x2b];
      FUN_00424285(param_1 + 0x2b,param_1 + 0x2a);
      if ((int)param_1[0x2b] < (int)*(short *)((int)param_1 + 0x86)) {
        param_1[7] = (((float)(int)param_1[0x2b] + param_1[0x2a]) * (param_1[9] - param_1[0x28])) /
                     (float)(int)*(short *)((int)param_1 + 0x86) + param_1[0x28];
        param_1[6] = (((float)(int)param_1[0x2b] + param_1[0x2a]) * (param_1[8] - param_1[0x27])) /
                     (float)(int)*(short *)((int)param_1 + 0x86) + param_1[0x27];
      }
      else {
        param_1[6] = param_1[8];
        param_1[7] = param_1[9];
        *(undefined2 *)((int)param_1 + 0x86) = 0;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
      }
      if (((uint)param_1[0x20] >> 6 & 1) != 0) {
        param_1[7] = param_1[7] * -1.0;
      }
      if (((uint)param_1[0x20] >> 6 & 2) != 0) {
        param_1[6] = param_1[6] * -1.0;
      }
    }
    if (0 < *(short *)(param_1 + 0x21)) {
      param_1[0x40] = param_1[0x42];
      FUN_00424285(param_1 + 0x42,param_1 + 0x41);
      local_2c = param_1[0x31];
      local_28 = param_1[0x32];
      local_30 = ((float)(int)param_1[0x42] + param_1[0x41]) /
                 (float)(int)*(short *)(param_1 + 0x21);
      if (1.0 <= local_30) {
        local_30 = 1.0;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = __ftol2((double)(((float)(uint)*(byte *)((int)&local_28 + local_38) -
                                    (float)(uint)*(byte *)((int)&local_2c + local_38)) * local_30 +
                                   (float)(uint)*(byte *)((int)&local_2c + local_38)));
        if (local_34 < 0) {
          local_34 = 0;
        }
        if (local_34 < 0x100) {
          local_120 = (undefined)local_34;
        }
        else {
          local_120 = 0xff;
        }
        *(undefined *)((int)&local_2c + local_38) = local_120;
      }
      param_1[0x1f] = local_2c;
      if ((int)*(short *)(param_1 + 0x21) <= (int)param_1[0x42]) {
        *(undefined2 *)(param_1 + 0x21) = 0;
      }
    }
    if (*(short *)(param_1 + 0x23) != 0) {
      local_3c = ((float)(int)param_1[0x3e] + param_1[0x3d]) /
                 (float)(int)*(short *)(param_1 + 0x23);
      if (1.0 <= local_3c) {
        local_3c = 1.0;
      }
      uVar5 = (uint)param_1[0x20] >> 10 & 3;
      if (uVar5 == 1) {
        local_3c = 1.0 - (1.0 - local_3c) * (1.0 - local_3c);
      }
      else if (uVar5 == 2) {
        local_3c = 1.0 - local_3c;
        local_3c = 1.0 - local_3c * local_3c * local_3c * local_3c;
      }
      if (((uint)param_1[0x20] >> 5 & 1) == 0) {
        param_1[0x24] = (1.0 - local_3c) * param_1[0x33] + local_3c * param_1[0x36];
        param_1[0x25] = (1.0 - local_3c) * param_1[0x34] + local_3c * param_1[0x37];
        param_1[0x26] = (1.0 - local_3c) * param_1[0x35] + local_3c * param_1[0x38];
      }
      else {
        param_1[0x39] = (1.0 - local_3c) * param_1[0x33] + local_3c * param_1[0x36];
        param_1[0x3a] = (1.0 - local_3c) * param_1[0x34] + local_3c * param_1[0x37];
        param_1[0x3b] = (1.0 - local_3c) * param_1[0x35] + local_3c * param_1[0x38];
      }
      if ((int)*(short *)(param_1 + 0x23) <= (int)param_1[0x3e]) {
        *(undefined2 *)(param_1 + 0x23) = 0;
      }
      param_1[0x3c] = param_1[0x3e];
      FUN_00424285(param_1 + 0x3e,param_1 + 0x3d);
    }
    param_1[0xc] = param_1[0xe];
    FUN_00424285(param_1 + 0xe,param_1 + 0xd);
    return 0;
  }
  goto LAB_00434098;
switchD_004339dd_caseD_5:
  param_1[0x2f] = (float)((int)param_1[0x2e] + *(int *)(local_8 + 2));
  param_1[0xe] = (float)(int)*(short *)param_1[0x2f];
  goto LAB_00433998;
}

