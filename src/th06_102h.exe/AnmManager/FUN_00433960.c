
undefined4 AnmManager::FUN_00433960(Unknown *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  AnmManager *in_ECX;
  uint uVar7;
  float10 fVar8;
  undefined local_120;
  short local_e0;
  float local_3c;
  int local_38;
  long local_34;
  float local_30;
  int local_2c;
  undefined4 local_28;
  short *local_24;
  int *local_20;
  short *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  short *local_8;
  
  if (*(int *)&param_1->field_0xbc == 0) {
    return 1;
  }
  if (param_1->field19_0x8a == 0) goto LAB_00433998;
LAB_00434098:
  local_24 = (short *)0x0;
  for (local_8 = *(short **)&param_1->field_0xb8;
      (((*(char *)(local_8 + 1) != '\x16' ||
        ((int)(short)param_1->field19_0x8a != *(int *)(local_8 + 2))) &&
       (*(char *)(local_8 + 1) != '\0')) && (*(char *)(local_8 + 1) != '\x0f'));
      local_8 = (short *)((int)local_8 + *(byte *)((int)local_8 + 3) + 4)) {
    if ((*(char *)(local_8 + 1) == '\x16') && (*(int *)(local_8 + 2) == -1)) {
      local_24 = local_8;
    }
  }
  param_1->field19_0x8a = 0;
  param_1->field15_0x80 = param_1->field15_0x80 & 0xffffdfff;
  if (*(char *)(local_8 + 1) != '\x16') {
    if (local_24 == (short *)0x0) {
      FUN_004241e5(1);
      goto LAB_00434338;
    }
    local_8 = local_24;
  }
  *(uint *)&param_1->field_0xbc = (int)local_8 + *(byte *)((int)local_8 + 3) + 4;
  (param_1->field12_0x30).current = (int)**(short **)&param_1->field_0xbc;
  (param_1->field12_0x30).subFrame = 0.0;
  (param_1->field12_0x30).previous = -999;
  param_1->field15_0x80 = param_1->field15_0x80 | 1;
LAB_00433998:
  local_8 = *(short **)&param_1->field_0xbc;
  if ((param_1->field12_0x30).current < (int)*local_8) goto LAB_00434338;
  switch(*(undefined *)(local_8 + 1)) {
  case 0:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffe;
  case 0xf:
    *(undefined4 *)&param_1->field_0xbc = 0;
    return 1;
  case 1:
    param_1->field15_0x80 = param_1->field15_0x80 | 1;
    FUN_004323a0(in_ECX,param_1,
                 (short)*(undefined4 *)(local_8 + 2) +
                 (short)in_ECX->spriteIndices[*(short *)&param_1->field_0xb4]);
    param_1[1].field12_0x30.current = (param_1->field12_0x30).current;
    break;
  case 2:
    param_1->field7_0x1c = *(float *)(local_8 + 2);
    param_1->field6_0x18 = *(float *)(local_8 + 4);
    break;
  case 3:
    *(char *)((int)&param_1->field14_0x7c + 3) = (char)*(undefined4 *)(local_8 + 2);
    break;
  case 4:
    param_1->field14_0x7c = param_1->field14_0x7c & 0xff000000U | *(uint *)(local_8 + 2) & 0xffffff;
    break;
  case 5:
    goto switchD_004339dd_caseD_5;
  case 7:
    param_1->field15_0x80 =
         param_1->field15_0x80 & 0xffffff3f | (param_1->field15_0x80 >> 6 & 3 ^ 1) << 6;
    param_1->field7_0x1c = param_1->field7_0x1c * -1.0;
    break;
  case 8:
    param_1->field15_0x80 =
         param_1->field15_0x80 & 0xffffff3f | (param_1->field15_0x80 >> 6 & 3 ^ 2) << 6;
    param_1->field6_0x18 = param_1->field6_0x18 * -1.0;
    break;
  case 9:
    param_1->field0_0x0 = *(undefined4 *)(local_8 + 2);
    param_1->field1_0x4 = *(undefined4 *)(local_8 + 4);
    local_10 = (undefined4 *)(local_8 + 6);
    param_1->field2_0x8 = *local_10;
    break;
  case 10:
    param_1->field3_0xc = *(undefined4 *)(local_8 + 2);
    param_1->field4_0x10 = *(undefined4 *)(local_8 + 4);
    local_14 = (undefined4 *)(local_8 + 6);
    param_1->field5_0x14 = *local_14;
    break;
  case 0xb:
    param_1->field9_0x24 = *(undefined4 *)(local_8 + 2);
    local_18 = (undefined4 *)(local_8 + 4);
    param_1->field8_0x20 = *local_18;
    param_1->field17_0x86 = 0;
    break;
  case 0xc:
    local_20 = (int *)(local_8 + 2);
    param_1[1].field0_0x0 = param_1->field14_0x7c;
    param_1[1].field1_0x4 = param_1->field14_0x7c & 0xffffffU | *local_20 << 0x18;
    param_1->field16_0x84 = local_8[4];
    param_1[1].field13_0x3c.field2_0x8 = 0;
    param_1[1].field13_0x3c.field1_0x4 = 0;
    param_1[1].field13_0x3c.field0_0x0 = -NAN;
    break;
  case 0xd:
    param_1->field15_0x80 = param_1->field15_0x80 | 4;
    break;
  case 0xe:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffb;
    break;
  case 0x10:
    param_1->field15_0x80 = param_1->field15_0x80 | 1;
    local_c = (undefined4 *)(local_8 + 2);
    uVar1 = local_8[4];
    if (uVar1 == 0) {
      local_e0 = 0;
    }
    else {
      uVar6 = FUN_0041e780(&DAT_0069d8f8);
      local_e0 = (short)((ulonglong)uVar6 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    FUN_004323a0(in_ECX,param_1,
                 (short)*local_c + local_e0 +
                 (short)in_ECX->spriteIndices[*(short *)&param_1->field_0xb4]);
    param_1[1].field12_0x30.current = (param_1->field12_0x30).current;
    break;
  case 0x11:
    if ((param_1->field15_0x80 >> 5 & 1) == 0) {
      fVar4 = *(float *)(local_8 + 6);
      uVar2 = *(undefined4 *)(local_8 + 4);
      *(undefined4 *)&param_1->field_0x90 = *(undefined4 *)(local_8 + 2);
      *(undefined4 *)&param_1->field_0x94 = uVar2;
      param_1->field31_0x98 = fVar4;
    }
    else {
      uVar2 = *(undefined4 *)(local_8 + 6);
      uVar3 = *(undefined4 *)(local_8 + 4);
      param_1[1].field8_0x20 = *(undefined4 *)(local_8 + 2);
      param_1[1].field9_0x24 = uVar3;
      param_1[1].field10_0x28 = uVar2;
    }
    break;
  case 0x12:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffff3ff;
    goto LAB_00433f53;
  case 0x13:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffff3ff | 0x400;
    goto LAB_00433f53;
  case 0x14:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffff3ff | 0x800;
LAB_00433f53:
    if ((param_1->field15_0x80 >> 5 & 1) == 0) {
      param_1[1].field2_0x8 = *(undefined4 *)&param_1->field_0x90;
      param_1[1].field3_0xc = *(undefined4 *)&param_1->field_0x94;
      param_1[1].field4_0x10 = param_1->field31_0x98;
    }
    else {
      param_1[1].field2_0x8 = param_1[1].field8_0x20;
      param_1[1].field3_0xc = param_1[1].field9_0x24;
      param_1[1].field4_0x10 = param_1[1].field10_0x28;
    }
    fVar4 = *(float *)(local_8 + 6);
    fVar5 = *(float *)(local_8 + 4);
    param_1[1].field5_0x14 = *(undefined4 *)(local_8 + 2);
    param_1[1].field6_0x18 = fVar5;
    param_1[1].field7_0x1c = fVar4;
    param_1->field20_0x8c = local_8[8];
    param_1[1].field12_0x30.subFrame = 0.0;
    param_1[1].field12_0x30.previous = 0;
    param_1[1].field11_0x2c = 0xfffffc19;
    break;
  case 0x15:
    goto switchD_004339dd_caseD_15;
  case 0x17:
    param_1->field15_0x80 = param_1->field15_0x80 | 0x300;
    break;
  case 0x18:
    goto switchD_004339dd_caseD_18;
  case 0x19:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xffffffdf | (*(uint *)(local_8 + 2) & 1) << 5;
    break;
  case 0x1a:
    param_1->field18_0x88 = local_8[2];
    break;
  case 0x1b:
    param_1->field10_0x28 = (float)param_1->field10_0x28 + *(float *)(local_8 + 2);
    if ((float)param_1->field10_0x28 < 1.0) {
      if ((float)param_1->field10_0x28 < 0.0 != NAN((float)param_1->field10_0x28)) {
        param_1->field10_0x28 = (float)param_1->field10_0x28 + 1.0;
      }
    }
    else {
      param_1->field10_0x28 = (float)param_1->field10_0x28 - 1.0;
    }
    break;
  case 0x1c:
    param_1->field11_0x2c = (float)param_1->field11_0x2c + *(float *)(local_8 + 2);
    if ((float)param_1->field11_0x2c < 1.0) {
      if ((float)param_1->field11_0x2c < 0.0 != NAN((float)param_1->field11_0x2c)) {
        param_1->field11_0x2c = (float)param_1->field11_0x2c + 1.0;
      }
    }
    else {
      param_1->field11_0x2c = (float)param_1->field11_0x2c - 1.0;
    }
    break;
  case 0x1d:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffe | *(uint *)(local_8 + 2) & 1;
    break;
  case 0x1e:
    param_1->field9_0x24 = *(undefined4 *)(local_8 + 2);
    param_1->field8_0x20 = *(undefined4 *)(local_8 + 4);
    local_1c = local_8 + 6;
    param_1->field17_0x86 = *local_1c;
    *(undefined4 *)&param_1->field_0xac = 0;
    *(undefined4 *)&param_1->field_0xa8 = 0;
    *(undefined4 *)&param_1->field_0xa4 = 0xfffffc19;
    *(float *)&param_1->field_0xa0 = param_1->field7_0x1c;
    *(float *)&param_1->field_0x9c = param_1->field6_0x18;
    break;
  case 0x1f:
    param_1->field15_0x80 = param_1->field15_0x80 & 0xffffefff | (*(uint *)(local_8 + 2) & 1) << 0xc
    ;
  }
  *(uint *)&param_1->field_0xbc = (int)local_8 + *(byte *)((int)local_8 + 3) + 4;
  goto LAB_00433998;
switchD_004339dd_caseD_18:
  param_1->field15_0x80 = param_1->field15_0x80 & 0xfffffffe;
switchD_004339dd_caseD_15:
  if (param_1->field19_0x8a == 0) {
    param_1->field15_0x80 = param_1->field15_0x80 | 0x2000;
    FUN_004241e5(1);
LAB_00434338:
    if (NAN((float)param_1->field3_0xc) == ((float)param_1->field3_0xc == 0.0)) {
      fVar8 = (float10)FUN_0041e850(param_1->field0_0x0,
                                    (float)g_GameContext._424_4_ * (float)param_1->field3_0xc);
      param_1->field0_0x0 = (float)fVar8;
    }
    if (NAN((float)param_1->field4_0x10) == ((float)param_1->field4_0x10 == 0.0)) {
      fVar8 = (float10)FUN_0041e850(param_1->field1_0x4,
                                    (float)g_GameContext._424_4_ * (float)param_1->field4_0x10);
      param_1->field1_0x4 = (float)fVar8;
    }
    if (NAN((float)param_1->field5_0x14) == ((float)param_1->field5_0x14 == 0.0)) {
      fVar8 = (float10)FUN_0041e850(param_1->field2_0x8,
                                    (float)g_GameContext._424_4_ * (float)param_1->field5_0x14);
      param_1->field2_0x8 = (float)fVar8;
    }
    if ((short)param_1->field17_0x86 < 1) {
      param_1->field6_0x18 =
           (float)g_GameContext._424_4_ * (float)param_1->field8_0x20 + param_1->field6_0x18;
      param_1->field7_0x1c =
           (float)g_GameContext._424_4_ * (float)param_1->field9_0x24 + param_1->field7_0x1c;
    }
    else {
      *(undefined4 *)&param_1->field_0xa4 = *(undefined4 *)&param_1->field_0xac;
      FUN_00424285(&g_GameContext,(int *)&param_1->field_0xac,(float *)&param_1->field_0xa8);
      if (*(int *)&param_1->field_0xac < (int)(short)param_1->field17_0x86) {
        param_1->field7_0x1c =
             (((float)*(int *)&param_1->field_0xac + *(float *)&param_1->field_0xa8) *
             ((float)param_1->field9_0x24 - *(float *)&param_1->field_0xa0)) /
             (float)(int)(short)param_1->field17_0x86 + *(float *)&param_1->field_0xa0;
        param_1->field6_0x18 =
             (((float)*(int *)&param_1->field_0xac + *(float *)&param_1->field_0xa8) *
             ((float)param_1->field8_0x20 - *(float *)&param_1->field_0x9c)) /
             (float)(int)(short)param_1->field17_0x86 + *(float *)&param_1->field_0x9c;
      }
      else {
        param_1->field6_0x18 = (float)param_1->field8_0x20;
        param_1->field7_0x1c = (float)param_1->field9_0x24;
        param_1->field17_0x86 = 0;
        param_1->field8_0x20 = 0;
        param_1->field9_0x24 = 0;
      }
      if ((param_1->field15_0x80 >> 6 & 1) != 0) {
        param_1->field7_0x1c = param_1->field7_0x1c * -1.0;
      }
      if ((param_1->field15_0x80 >> 6 & 2) != 0) {
        param_1->field6_0x18 = param_1->field6_0x18 * -1.0;
      }
    }
    if (0 < (short)param_1->field16_0x84) {
      param_1[1].field13_0x3c.field0_0x0 = (float)param_1[1].field13_0x3c.field2_0x8;
      FUN_00424285(&g_GameContext,&param_1[1].field13_0x3c.field2_0x8,
                   (float *)&param_1[1].field13_0x3c.field1_0x4);
      local_2c = param_1[1].field0_0x0;
      local_28 = param_1[1].field1_0x4;
      local_30 = ((float)param_1[1].field13_0x3c.field2_0x8 +
                 (float)param_1[1].field13_0x3c.field1_0x4) /
                 (float)(int)(short)param_1->field16_0x84;
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
      param_1->field14_0x7c = local_2c;
      if ((int)(short)param_1->field16_0x84 <= param_1[1].field13_0x3c.field2_0x8) {
        param_1->field16_0x84 = 0;
      }
    }
    if (param_1->field20_0x8c != 0) {
      local_3c = ((float)(int)param_1[1].field12_0x30.subFrame +
                 (float)param_1[1].field12_0x30.previous) / (float)(int)(short)param_1->field20_0x8c
      ;
      if (1.0 <= local_3c) {
        local_3c = 1.0;
      }
      uVar7 = param_1->field15_0x80 >> 10 & 3;
      if (uVar7 == 1) {
        local_3c = 1.0 - (1.0 - local_3c) * (1.0 - local_3c);
      }
      else if (uVar7 == 2) {
        local_3c = 1.0 - local_3c;
        local_3c = 1.0 - local_3c * local_3c * local_3c * local_3c;
      }
      if ((param_1->field15_0x80 >> 5 & 1) == 0) {
        *(float *)&param_1->field_0x90 =
             (1.0 - local_3c) * (float)param_1[1].field2_0x8 +
             local_3c * (float)param_1[1].field5_0x14;
        *(float *)&param_1->field_0x94 =
             (1.0 - local_3c) * (float)param_1[1].field3_0xc + local_3c * param_1[1].field6_0x18;
        param_1->field31_0x98 =
             (1.0 - local_3c) * (float)param_1[1].field4_0x10 + local_3c * param_1[1].field7_0x1c;
      }
      else {
        param_1[1].field8_0x20 =
             (1.0 - local_3c) * (float)param_1[1].field2_0x8 +
             local_3c * (float)param_1[1].field5_0x14;
        param_1[1].field9_0x24 =
             (1.0 - local_3c) * (float)param_1[1].field3_0xc + local_3c * param_1[1].field6_0x18;
        param_1[1].field10_0x28 =
             (1.0 - local_3c) * (float)param_1[1].field4_0x10 + local_3c * param_1[1].field7_0x1c;
      }
      if ((int)(short)param_1->field20_0x8c <= (int)param_1[1].field12_0x30.subFrame) {
        param_1->field20_0x8c = 0;
      }
      param_1[1].field11_0x2c = param_1[1].field12_0x30.subFrame;
      FUN_00424285(&g_GameContext,(int *)&param_1[1].field12_0x30.subFrame,
                   (float *)&param_1[1].field12_0x30);
    }
    (param_1->field12_0x30).previous = (param_1->field12_0x30).current;
    FUN_00424285(&g_GameContext,&(param_1->field12_0x30).current,&(param_1->field12_0x30).subFrame);
    return 0;
  }
  goto LAB_00434098;
switchD_004339dd_caseD_5:
  *(int *)&param_1->field_0xbc = *(int *)&param_1->field_0xb8 + *(int *)(local_8 + 2);
  (param_1->field12_0x30).current = (int)**(short **)&param_1->field_0xbc;
  goto LAB_00433998;
}

