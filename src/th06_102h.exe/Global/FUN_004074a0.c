
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_004074a0(Unknown *param_1)

{
  Unknown *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  AnmManager *pAVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  float *pfVar17;
  byte bVar18;
  int iVar19;
  int *piVar20;
  float10 fVar21;
  float10 fVar22;
  int local_2dc;
  char *local_2cc;
  char *local_2c0;
  int *local_2bc;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  uint local_2a0;
  float local_29c;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  uint local_184;
  short local_144;
  short local_13c;
  float local_bc;
  int local_b8;
  undefined *local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 *local_80;
  int local_7c;
  uint local_78;
  int local_74;
  undefined4 *local_70;
  int *local_6c;
  int local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  AnmLoadedSprite **local_58;
  int *local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
LAB_004074b1:
  while (local_20 = (int *)param_1[0xc].field13_0x3c.field9_0x24,
        -1 < (int)param_1[0x10].field10_0x28) {
LAB_0040954d:
    param_1[0xc].field13_0x3c.field9_0x24 = (int)local_20 + (int)*(short *)((int)local_20 + 6);
    if ((*(byte *)&param_1[0x12].field19_0x8a >> 2 & 1) == 0) {
      pfVar17 = (float *)&param_1[0xc].field13_0x3c.field9_0x24;
      piVar15 = (int *)(&param_1[0xc].field_0xac + (int)param_1[0xf].field67_0xc0 * 0x4c);
      for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar15 = (int)*pfVar17;
        pfVar17 = pfVar17 + 1;
        piVar15 = piVar15 + 1;
      }
    }
    FUN_00407440(&param_1[0xc].field13_0x3c.field9_0x24,
                 *(undefined2 *)(&param_1[0x10].field2_0x8 + param_1[0x10].field10_0x28));
    if ((int)param_1[0xf].field67_0xc0 < 7) {
      param_1[0xf].field67_0xc0 =
           (AnmLoadedSprite *)((int)&(param_1[0xf].field67_0xc0)->sourceFileIndex + 1);
    }
    param_1[0x10].field10_0x28 = 0xffffffff;
  }
LAB_004074ce:
  pAVar11 = g_AnmManager;
  if (param_1[0xc].field13_0x3c.field12_0x30 != *local_20) {
    bVar18 = *(byte *)&param_1[0x12].field18_0x88 & 3;
    if (bVar18 == 1) {
      fVar22 = (float10)FUN_0041e850(param_1[0x10].field13_0x3c.field5_0x14);
      param_1[0x10].field13_0x3c.field5_0x14 = (float)fVar22;
      param_1[0x10].field13_0x3c.field7_0x1c =
           (int)((float)g_GameContext._424_4_ * (float)param_1[0x10].field13_0x3c.field8_0x20 +
                (float)param_1[0x10].field13_0x3c.field7_0x1c);
      fVar4 = (float)param_1[0x10].field13_0x3c.field7_0x1c;
      fVar21 = (float10)param_1[0x10].field13_0x3c.field5_0x14;
      fVar22 = (float10)fcos(fVar21);
      fVar21 = (float10)fsin(fVar21);
      param_1[0x10].field13_0x3c.field2_0x8 = (int)(float)(fVar22 * (float10)fVar4);
      param_1[0x10].field13_0x3c.field3_0xc = (int)(float)(fVar21 * (float10)fVar4);
      param_1[0x10].field13_0x3c.field4_0x10 = 0;
    }
    else if (bVar18 == 2) {
      FUN_004241e5();
      local_bc = ((float)*(int *)&param_1[0x10].field20_0x8c + *(float *)&param_1[0x10].field18_0x88
                 ) / (float)*(int *)&param_1[0x10].field_0x90;
      if (1.0 <= local_bc) {
        local_bc = 1.0;
      }
      switch(*(byte *)&param_1[0x12].field18_0x88 >> 2 & 7) {
      case 0:
        local_bc = 1.0 - local_bc;
        break;
      case 1:
        local_bc = 1.0 - local_bc * local_bc;
        break;
      case 2:
        local_bc = 1.0 - local_bc * local_bc * local_bc * local_bc;
        break;
      case 3:
        local_bc = (1.0 - local_bc) * (1.0 - local_bc);
        break;
      case 4:
        local_bc = 1.0 - local_bc;
        local_bc = local_bc * local_bc * local_bc * local_bc;
      }
      fVar4 = (float)param_1[0x10].field13_0x3c.field14_0x38;
      fVar5 = (float)param_1[0x10].field13_0x3c.field13_0x34;
      fVar6 = (float)param_1[0x10].field15_0x80;
      fVar7 = (float)param_1[0x10].field14_0x7c;
      fVar2 = param_1[0x10].field12_0x30.subFrame;
      fVar3 = (float)param_1[0x10].field12_0x30.previous;
      param_1[0x10].field13_0x3c.field2_0x8 =
           (int)((local_bc * (float)param_1[0x10].field13_0x3c.field12_0x30 +
                 param_1[0x10].field13_0x3c.field15_0x3c) - (float)param_1[0x10].field11_0x2c);
      param_1[0x10].field13_0x3c.field3_0xc = (int)((local_bc * fVar5 + fVar7) - fVar3);
      param_1[0x10].field13_0x3c.field4_0x10 = (int)((local_bc * fVar4 + fVar6) - fVar2);
      fVar22 = (float10)FUN_0045be40((double)(float)param_1[0x10].field13_0x3c.field3_0xc,
                                     (double)(float)param_1[0x10].field13_0x3c.field2_0x8);
      param_1[0x10].field13_0x3c.field5_0x14 = (float)fVar22;
      if (*(int *)&param_1[0x10].field20_0x8c < 1) {
        *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc;
        fVar4 = (float)param_1[0x10].field15_0x80;
        fVar5 = (float)param_1[0x10].field13_0x3c.field14_0x38;
        fVar6 = (float)param_1[0x10].field13_0x3c.field13_0x34;
        param_1[0x10].field11_0x2c =
             param_1[0x10].field13_0x3c.field15_0x3c +
             (float)param_1[0x10].field13_0x3c.field12_0x30;
        param_1[0x10].field12_0x30.previous = (int)((float)param_1[0x10].field14_0x7c + fVar6);
        param_1[0x10].field12_0x30.subFrame = fVar4 + fVar5;
        param_1[0x10].field13_0x3c.field2_0x8 = 0;
        param_1[0x10].field13_0x3c.field3_0xc = 0;
        param_1[0x10].field13_0x3c.field4_0x10 = 0;
      }
    }
    if (0 < *(int *)&param_1[0x10].field_0xa4) {
      if (0 < (int)param_1[0x11].field13_0x3c.field5_0x14) {
        param_1[0x11].field13_0x3c.field6_0x18 = param_1[0x11].field13_0x3c.field8_0x20;
        FUN_00424285(&g_GameContext,&param_1[0x11].field13_0x3c.field8_0x20,
                     (float *)&param_1[0x11].field13_0x3c.field7_0x1c);
        if ((int)param_1[0x11].field13_0x3c.field5_0x14 <= param_1[0x11].field13_0x3c.field8_0x20) {
          fVar4 = param_1[0x10].field12_0x30.subFrame;
          fVar5 = (float)param_1[0x10].field13_0x3c.field11_0x2c;
          fVar6 = (float)param_1[0x10].field12_0x30.previous;
          fVar7 = param_1[0x10].field13_0x3c.field10_0x28;
          param_1[0x11].field0_0x0 =
               (float)param_1[0x10].field11_0x2c + (float)param_1[0x10].field13_0x3c.field9_0x24;
          param_1[0x11].field1_0x4 = fVar6 + fVar7;
          param_1[0x11].field2_0x8 = fVar4 + fVar5;
          FUN_004145c0();
          param_1[0x11].field13_0x3c.field8_0x20 = 0;
          param_1[0x11].field13_0x3c.field7_0x1c = 0;
          param_1[0x11].field13_0x3c.field6_0x18 = -999;
        }
      }
      pAVar11 = g_AnmManager;
      if (-1 < *(short *)&param_1[0x12].field_0x92) {
        cVar8 = '\0';
        fVar4 = (float)param_1[0x10].field13_0x3c.field2_0x8;
        if (fVar4 < 0.0 == NAN(fVar4)) {
          if (0.0 < (float)param_1[0x10].field13_0x3c.field2_0x8) {
            cVar8 = '\x02';
          }
        }
        else {
          cVar8 = '\x01';
        }
        if (*(char *)((int)&param_1[0x12].field19_0x8a + 1) != cVar8) {
          if (cVar8 == '\0') {
            if (*(char *)((int)&param_1[0x12].field19_0x8a + 1) == -1) {
              sVar9 = param_1[0x12].field20_0x8c;
              local_268 = sVar9 + 0x100;
              *(short *)&param_1->field_0xb4 = local_268;
              FUN_00432430(param_1,(int)pAVar11->scripts[sVar9 + 0x100]);
            }
            else if (*(char *)((int)&param_1[0x12].field19_0x8a + 1) == '\x01') {
              sVar9 = *(short *)&param_1[0x12].field_0x8e;
              local_270 = sVar9 + 0x100;
              *(short *)&param_1->field_0xb4 = local_270;
              FUN_00432430(param_1,(int)pAVar11->scripts[sVar9 + 0x100]);
            }
            else {
              sVar9 = *(short *)&param_1[0x12].field_0x90;
              local_278 = sVar9 + 0x100;
              *(short *)&param_1->field_0xb4 = local_278;
              FUN_00432430(param_1,(int)pAVar11->scripts[sVar9 + 0x100]);
            }
          }
          else if (cVar8 == '\x01') {
            sVar9 = *(short *)&param_1[0x12].field_0x92;
            local_280 = sVar9 + 0x100;
            *(short *)&param_1->field_0xb4 = local_280;
            FUN_00432430(param_1,(int)pAVar11->scripts[sVar9 + 0x100]);
          }
          else if (cVar8 == '\x02') {
            sVar9 = *(short *)&param_1[0x12].field_0x94;
            local_288 = sVar9 + 0x100;
            *(short *)&param_1->field_0xb4 = local_288;
            FUN_00432430(param_1,(int)pAVar11->scripts[sVar9 + 0x100]);
          }
          *(char *)((int)&param_1[0x12].field19_0x8a + 1) = cVar8;
        }
      }
      if (param_1[0xc].field13_0x3c.field13_0x34 != 0) {
        (*(code *)param_1[0xc].field13_0x3c.field13_0x34)(param_1);
      }
    }
    param_1[0xc].field13_0x3c.field9_0x24 = (int)local_20;
    param_1[0xc].field13_0x3c.field10_0x28 = (float)param_1[0xc].field13_0x3c.field12_0x30;
    FUN_00424285(&g_GameContext,&param_1[0xc].field13_0x3c.field12_0x30,
                 (float *)&param_1[0xc].field13_0x3c.field11_0x2c);
    return 0;
  }
  if (((uint)*(byte *)((int)local_20 + 9) & 1 << ((byte)CUR_RANK & 0x1f)) == 0)
  goto switchD_00407544_caseD_7f;
  local_1c = (float *)(local_20 + 3);
  switch(*(undefined2 *)(local_20 + 1)) {
  case 1:
    return 0xffffffff;
  case 2:
    goto switchD_00407544_caseD_2;
  case 3:
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 5,(undefined4 *)0x0);
    local_14 = (float)(*piVar15 - 1);
    FUN_0040b3c0();
    fVar4 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    FUN_0040b3c0();
    break;
  case 6:
    puVar13 = (uint *)FUN_0040afb0((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_24 = *puVar13;
    if (local_24 == 0) {
      local_29c = 0.0;
    }
    else {
      uVar12 = FUN_0041e7f0();
      local_29c = (float)(uVar12 % local_24);
    }
    local_14 = local_29c;
    FUN_0040b3c0();
    break;
  case 7:
    puVar13 = (uint *)FUN_0040afb0((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_28 = *puVar13;
    piVar15 = FUN_0040afb0((int)param_1,(int *)(local_1c + 2),(undefined4 *)0x0);
    local_2c = *piVar15;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = FUN_0041e7f0();
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = (float)(local_2a0 + local_2c);
    FUN_0040b3c0();
    break;
  case 8:
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_30 = *pfVar17;
    fVar22 = (float10)FUN_0041e820();
    local_18 = (float)(fVar22 * (float10)local_30);
    FUN_0040b3c0();
    break;
  case 9:
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_34 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 2,(undefined4 *)0x0);
    local_38 = *pfVar17;
    fVar22 = (float10)FUN_0041e820();
    local_18 = (float)(fVar22 * (float10)local_34) + local_38;
    FUN_0040b3c0();
    break;
  case 10:
    FUN_0040b3c0();
    break;
  case 0xb:
    FUN_0040b3c0();
    break;
  case 0xc:
    FUN_0040b3c0();
    break;
  case 0xd:
  case 0x14:
    FUN_0040b420();
    break;
  case 0xe:
  case 0x15:
    FUN_0040b4d0();
    break;
  case 0xf:
  case 0x16:
    FUN_0040b580();
    break;
  case 0x10:
  case 0x17:
    FUN_0040b650();
    break;
  case 0x11:
  case 0x18:
    FUN_0040b700();
    break;
  case 0x12:
    local_3c = FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    FUN_0040b7d0(param_1,local_20[3]);
    break;
  case 0x1a:
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    local_18 = (float)*piVar15;
    fVar22 = (float10)FUN_0041e850(local_18);
    local_18 = (float)fVar22;
    FUN_0040b3c0();
    break;
  case 0x1b:
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    local_48 = *piVar15;
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_44 = *piVar15;
    if (local_48 == local_44) {
      local_2a4 = 0;
    }
    else {
      local_2a4 = (uint)(local_44 <= local_48) * 2 + -1;
    }
    *(int *)&param_1[0xc].field_0xa4 = local_2a4;
    break;
  case 0x1c:
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 3),(undefined4 *)0x0);
    local_4c = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_50 = *pfVar17;
    if ((NAN(local_4c) || NAN(local_50)) == (local_4c == local_50)) {
      if (local_4c < local_50 == (NAN(local_4c) || NAN(local_50))) {
        local_2ac = 1;
      }
      else {
        local_2ac = 0xffffffff;
      }
      local_2a8 = local_2ac;
    }
    else {
      local_2a8 = 0;
    }
    *(undefined4 *)&param_1[0xc].field_0xa4 = local_2a8;
    break;
  case 0x1d:
    if (-1 < *(int *)&param_1[0xc].field_0xa4) break;
    goto switchD_00407544_caseD_2;
  case 0x1e:
    if (0 < *(int *)&param_1[0xc].field_0xa4) break;
    goto switchD_00407544_caseD_2;
  case 0x1f:
    if (*(int *)&param_1[0xc].field_0xa4 != 0) break;
    goto switchD_00407544_caseD_2;
  case 0x20:
    fVar4 = *(float *)&param_1[0xc].field_0xa4;
joined_r0x00407ab4:
    if ((int)fVar4 < 1) break;
    goto switchD_00407544_caseD_2;
  case 0x21:
    if (*(int *)&param_1[0xc].field_0xa4 < 0) break;
    goto switchD_00407544_caseD_2;
  case 0x22:
    if (*(int *)&param_1[0xc].field_0xa4 == 0) break;
switchD_00407544_caseD_2:
    param_1[0xc].field13_0x3c.field12_0x30 = local_20[3];
    local_20 = (int *)((int)local_20 + (int)local_1c[1]);
    goto LAB_004074ce;
  case 0x23:
    goto switchD_00407544_caseD_23;
  case 0x24:
    goto switchD_00407544_caseD_24;
  case 0x25:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_14 < (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x26:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_14 <= (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x27:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if (local_14 == local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x28:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_1c[4] < (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x29:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_1c[4] <= (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x2a:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,local_20 + 6,(undefined4 *)0x0);
    local_14 = *pfVar17;
    if (local_14 != local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x2b:
    param_1[0x10].field11_0x2c = local_20[3];
    param_1[0x10].field12_0x30.previous = local_20[4];
    param_1[0x10].field12_0x30.subFrame = (float)local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0x10].field11_0x2c,(undefined4 *)0x0);
    param_1[0x10].field11_0x2c = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0x10].field12_0x30,(undefined4 *)0x0);
    param_1[0x10].field12_0x30.previous = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&param_1[0x10].field12_0x30.subFrame,(undefined4 *)0x0);
    param_1[0x10].field12_0x30.subFrame = *pfVar17;
    FUN_00412240();
    break;
  case 0x2c:
    param_1[0x10].field13_0x3c.field2_0x8 = local_20[3];
    param_1[0x10].field13_0x3c.field3_0xc = local_20[4];
    param_1[0x10].field13_0x3c.field4_0x10 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0x10].field13_0x3c.field2_0x8,
                           (undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field2_0x8 = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0x10].field13_0x3c.field3_0xc,
                           (undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field3_0xc = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0x10].field13_0x3c.field4_0x10,
                           (undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field4_0x10 = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc;
    break;
  case 0x2d:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field5_0x14 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&local_c,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field7_0x1c = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc | 1;
    break;
  case 0x2e:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field6_0x18 = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc | 1;
    break;
  case 0x2f:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field7_0x1c = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc | 1;
    break;
  case 0x30:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field8_0x20 = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc | 1;
    break;
  case 0x31:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar4 = local_c - local_10;
    fVar22 = (float10)FUN_0041e820();
    param_1[0x10].field13_0x3c.field5_0x14 = (float)(fVar22 * (float10)fVar4 + (float10)local_10);
    break;
  case 0x32:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar4 = local_c - local_10;
    fVar22 = (float10)FUN_0041e820();
    param_1[0x10].field13_0x3c.field5_0x14 = (float)(fVar22 * (float10)fVar4 + (float10)local_10);
    if ((float)param_1[0x10].field11_0x2c < param_1[0x12].field31_0x98 + 96.0) {
      if (param_1[0x10].field13_0x3c.field5_0x14 <= 1.570796) {
        fVar4 = param_1[0x10].field13_0x3c.field5_0x14;
        if (fVar4 < -1.570796 != NAN(fVar4)) {
          param_1[0x10].field13_0x3c.field5_0x14 =
               -3.141593 - param_1[0x10].field13_0x3c.field5_0x14;
        }
      }
      else {
        param_1[0x10].field13_0x3c.field5_0x14 = 3.141593 - param_1[0x10].field13_0x3c.field5_0x14;
      }
    }
    fVar4 = *(float *)&param_1[0x12].field_0xa0 - 96.0;
    if (fVar4 < (float)param_1[0x10].field11_0x2c !=
        (NAN(fVar4) || NAN((float)param_1[0x10].field11_0x2c))) {
      fVar4 = param_1[0x10].field13_0x3c.field5_0x14;
      if ((fVar4 < 1.570796 == NAN(fVar4)) || (param_1[0x10].field13_0x3c.field5_0x14 < 0.0)) {
        if ((-1.570796 < param_1[0x10].field13_0x3c.field5_0x14) &&
           (fVar4 = param_1[0x10].field13_0x3c.field5_0x14, fVar4 < 0.0 != (fVar4 == 0.0))) {
          param_1[0x10].field13_0x3c.field5_0x14 =
               -3.141593 - param_1[0x10].field13_0x3c.field5_0x14;
        }
      }
      else {
        param_1[0x10].field13_0x3c.field5_0x14 = 3.141593 - param_1[0x10].field13_0x3c.field5_0x14;
      }
    }
    if (((float)param_1[0x10].field12_0x30.previous < *(float *)&param_1[0x12].field_0x9c + 48.0) &&
       (fVar4 = param_1[0x10].field13_0x3c.field5_0x14, fVar4 < 0.0 != NAN(fVar4))) {
      param_1[0x10].field13_0x3c.field5_0x14 = -param_1[0x10].field13_0x3c.field5_0x14;
    }
    fVar5 = *(float *)&param_1[0x12].field_0xa4 - 48.0;
    fVar4 = (float)param_1[0x10].field12_0x30.previous;
    if ((fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4))) &&
       (0.0 < param_1[0x10].field13_0x3c.field5_0x14)) {
      param_1[0x10].field13_0x3c.field5_0x14 = -param_1[0x10].field13_0x3c.field5_0x14;
    }
    break;
  case 0x33:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar22 = (float10)FUN_00428700();
    param_1[0x10].field13_0x3c.field5_0x14 = (float)(fVar22 + (float10)local_10);
    pfVar17 = FUN_0040b380((int)param_1,&local_c,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field7_0x1c = (int)*pfVar17;
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xfc | 1;
    break;
  case 0x34:
    FUN_0040abe0();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 4;
    break;
  case 0x35:
    FUN_0040abe0();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 8;
    break;
  case 0x36:
    FUN_0040abe0();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0xc;
    break;
  case 0x37:
    FUN_0040abe0();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0x10;
    break;
  case 0x38:
    FUN_0040ad10();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3;
    break;
  case 0x39:
    FUN_0040ad10();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 4;
    break;
  case 0x3a:
    FUN_0040ad10();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 8;
    break;
  case 0x3b:
    FUN_0040ad10();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0xc;
    break;
  case 0x3c:
    FUN_0040ad10();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0x10;
    break;
  case 0x3d:
    FUN_0040ae80();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 4;
    break;
  case 0x3e:
    FUN_0040ae80();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 8;
    break;
  case 0x3f:
    FUN_0040ae80();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0xc;
    break;
  case 0x40:
    FUN_0040ae80();
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xe3 | 0x10;
    break;
  case 0x41:
    param_1[0x12].field31_0x98 = (float)local_20[3];
    *(int *)&param_1[0x12].field_0x9c = local_20[4];
    *(int *)&param_1[0x12].field_0xa0 = local_20[5];
    *(int *)&param_1[0x12].field_0xa4 = local_20[6];
    *(byte *)&param_1[0x12].field19_0x8a = *(byte *)&param_1[0x12].field19_0x8a | 1;
    break;
  case 0x42:
    *(byte *)&param_1[0x12].field19_0x8a = *(byte *)&param_1[0x12].field19_0x8a & 0xfe;
    break;
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    local_54 = local_20 + 3;
    local_58 = &param_1[0x10].field67_0xc0;
    *(undefined2 *)local_58 = *(undefined2 *)local_54;
    *(short *)&param_1[0x11].field13_0x3c.field2_0x8 = *(short *)(local_20 + 1) + -0x43;
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 4,(undefined4 *)0x0);
    *(undefined2 *)(local_58 + 0x11) = *(undefined2 *)piVar15;
    iVar19 = ((int)*(short *)&param_1[0x10].field_0x9e - (int)*(short *)&param_1[0x10].field_0x9c) *
             _DAT_0069d710;
    *(short *)(local_58 + 0x11) =
         (short)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) +
         *(short *)(local_58 + 0x11) + *(short *)&param_1[0x10].field_0x9c;
    if (*(short *)(local_58 + 0x11) < 1) {
      *(undefined2 *)(local_58 + 0x11) = 1;
    }
    piVar15 = FUN_0040afb0((int)param_1,local_54 + 2,(undefined4 *)0x0);
    *(undefined2 *)((int)local_58 + 0x46) = *(undefined2 *)piVar15;
    iVar19 = ((int)*(short *)&param_1[0x10].field_0xa2 - (int)*(short *)&param_1[0x10].field_0xa0) *
             _DAT_0069d710;
    *(short *)((int)local_58 + 0x46) =
         (short)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) +
         *(short *)((int)local_58 + 0x46) + *(short *)&param_1[0x10].field_0xa0;
    if (*(short *)((int)local_58 + 0x46) < 1) {
      *(undefined2 *)((int)local_58 + 0x46) = 1;
    }
    fVar4 = param_1[0x10].field12_0x30.subFrame;
    fVar5 = (float)param_1[0x10].field13_0x3c.field11_0x2c;
    fVar6 = (float)param_1[0x10].field12_0x30.previous;
    fVar7 = param_1[0x10].field13_0x3c.field10_0x28;
    local_58[1] = (AnmLoadedSprite *)
                  ((float)param_1[0x10].field11_0x2c + (float)param_1[0x10].field13_0x3c.field9_0x24
                  );
    local_58[2] = (AnmLoadedSprite *)(fVar6 + fVar7);
    local_58[3] = (AnmLoadedSprite *)(fVar4 + fVar5);
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_54 + 5),(undefined4 *)0x0);
    local_58[4] = (AnmLoadedSprite *)*pfVar17;
    fVar22 = (float10)FUN_0041e850(local_58[4]);
    local_58[4] = (AnmLoadedSprite *)(float)fVar22;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_54 + 3),(undefined4 *)0x0);
    local_58[6] = (AnmLoadedSprite *)*pfVar17;
    if ((NAN((float)local_58[6]) == ((float)local_58[6] == 0.0)) &&
       (local_58[6] = (AnmLoadedSprite *)
                      (((param_1[0x10].field31_0x98 - *(float *)&param_1[0x10].field_0x94) *
                       (float)_DAT_0069d710) / 32.0 + *(float *)&param_1[0x10].field_0x94 +
                      (float)local_58[6]), (float)local_58[6] < 0.3 != NAN((float)local_58[6]))) {
      local_58[6] = (AnmLoadedSprite *)0x3e99999a;
    }
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_54 + 6),(undefined4 *)0x0);
    local_58[5] = (AnmLoadedSprite *)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_54 + 4),(undefined4 *)0x0);
    local_58[7] = (AnmLoadedSprite *)*pfVar17;
    local_58[7] = (AnmLoadedSprite *)
                  ((((param_1[0x10].field31_0x98 - *(float *)&param_1[0x10].field_0x94) *
                    (float)_DAT_0069d710) / 32.0 + *(float *)&param_1[0x10].field_0x94) / 2.0 +
                  (float)local_58[7]);
    if ((float)local_58[7] < 0.3 != NAN((float)local_58[7])) {
      local_58[7] = (AnmLoadedSprite *)0x3e99999a;
    }
    *(undefined2 *)((int)local_58 + 0x4a) = 0;
    local_58[0x13] = (AnmLoadedSprite *)local_54[7];
    local_14 = (float)(int)*(short *)((int)local_54 + 2);
    piVar15 = FUN_0040afb0((int)param_1,(int *)&local_14,(undefined4 *)0x0);
    *(undefined2 *)((int)local_58 + 2) = *(undefined2 *)piVar15;
    if ((*(byte *)&param_1[0x12].field18_0x88 >> 5 & 1) == 0) {
      FUN_004145c0();
    }
    break;
  case 0x4c:
    param_1[0x11].field13_0x3c.field5_0x14 = (float)local_20[3];
    iVar19 = (int)param_1[0x11].field13_0x3c.field5_0x14 / 5;
    iVar14 = (-(int)param_1[0x11].field13_0x3c.field5_0x14 / 5 - iVar19) * _DAT_0069d710;
    param_1[0x11].field13_0x3c.field5_0x14 =
         (float)(((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) + iVar19 +
                (int)param_1[0x11].field13_0x3c.field5_0x14);
    param_1[0x11].field13_0x3c.field8_0x20 = 0;
    param_1[0x11].field13_0x3c.field7_0x1c = 0;
    param_1[0x11].field13_0x3c.field6_0x18 = -999;
    break;
  case 0x4d:
    param_1[0x11].field13_0x3c.field5_0x14 = (float)local_20[3];
    iVar19 = (int)param_1[0x11].field13_0x3c.field5_0x14 / 5;
    iVar14 = (-(int)param_1[0x11].field13_0x3c.field5_0x14 / 5 - iVar19) * _DAT_0069d710;
    param_1[0x11].field13_0x3c.field5_0x14 =
         (float)(((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) + iVar19 +
                (int)param_1[0x11].field13_0x3c.field5_0x14);
    if (param_1[0x11].field13_0x3c.field5_0x14 != 0.0) {
      fVar4 = param_1[0x11].field13_0x3c.field5_0x14;
      if (fVar4 == 0.0) {
        local_184 = 0;
      }
      else {
        local_184 = FUN_0041e7f0();
        local_184 = local_184 % (uint)fVar4;
      }
      param_1[0x11].field13_0x3c.field8_0x20 = local_184;
      param_1[0x11].field13_0x3c.field7_0x1c = 0;
      param_1[0x11].field13_0x3c.field6_0x18 = -999;
    }
    break;
  case 0x4e:
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 | 0x20;
    break;
  case 0x4f:
    *(byte *)&param_1[0x12].field18_0x88 = *(byte *)&param_1[0x12].field18_0x88 & 0xdf;
    break;
  case 0x50:
    fVar4 = param_1[0x10].field12_0x30.subFrame;
    fVar5 = (float)param_1[0x10].field13_0x3c.field11_0x2c;
    fVar6 = (float)param_1[0x10].field12_0x30.previous;
    fVar7 = param_1[0x10].field13_0x3c.field10_0x28;
    param_1[0x11].field0_0x0 =
         (float)param_1[0x10].field11_0x2c + (float)param_1[0x10].field13_0x3c.field9_0x24;
    param_1[0x11].field1_0x4 = fVar6 + fVar7;
    param_1[0x11].field2_0x8 = fVar4 + fVar5;
    FUN_004145c0();
    break;
  case 0x51:
    pfVar17 = FUN_0040b380((int)param_1,local_1c,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field9_0x24 = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 1,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field10_0x28 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 2,(undefined4 *)0x0);
    param_1[0x10].field13_0x3c.field11_0x2c = (int)*pfVar17;
    break;
  case 0x52:
    piVar15 = FUN_0040afb0((int)param_1,(int *)local_1c,(undefined4 *)0x0);
    param_1[0x11].field11_0x2c = *piVar15;
    piVar15 = FUN_0040afb0((int)param_1,(int *)(local_1c + 1),(undefined4 *)0x0);
    param_1[0x11].field12_0x30.previous = *piVar15;
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_1c + 2),(undefined4 *)0x0);
    param_1[0x11].field12_0x30.subFrame = *pfVar17;
    piVar15 = FUN_0040afb0((int)param_1,(int *)(local_1c + 3),(undefined4 *)0x0);
    param_1[0x11].field12_0x30.current = *piVar15;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 4,(undefined4 *)0x0);
    param_1[0x11].field7_0x1c = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 5,(undefined4 *)0x0);
    param_1[0x11].field8_0x20 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 6,(undefined4 *)0x0);
    param_1[0x11].field9_0x24 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 7,(undefined4 *)0x0);
    param_1[0x11].field10_0x28 = *pfVar17;
    break;
  case 0x53:
    FUN_00414340();
    break;
  case 0x54:
    if (local_20[3] < 0) {
      param_1[0x11].field13_0x3c.field3_0xc = param_1[0x11].field13_0x3c.field3_0xc & 0xfffffdff;
    }
    else {
      param_1[0x11].field13_0x3c.field4_0x10 = local_20[3];
      param_1[0x11].field13_0x3c.field3_0xc = param_1[0x11].field13_0x3c.field3_0xc | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = local_20 + 3;
    local_60 = &param_1[0x11].field13_0x3c.field9_0x24;
    fVar4 = param_1[0x10].field12_0x30.subFrame;
    fVar5 = (float)param_1[0x10].field13_0x3c.field11_0x2c;
    fVar6 = (float)param_1[0x10].field12_0x30.previous;
    fVar7 = param_1[0x10].field13_0x3c.field10_0x28;
    param_1[0x11].field13_0x3c.field10_0x28 =
         (float)param_1[0x10].field11_0x2c + (float)param_1[0x10].field13_0x3c.field9_0x24;
    param_1[0x11].field13_0x3c.field11_0x2c = (int)(fVar6 + fVar7);
    param_1[0x11].field13_0x3c.field12_0x30 = (int)(fVar4 + fVar5);
    *(undefined2 *)local_60 = *(undefined2 *)local_64;
    *(undefined2 *)((int)&param_1[0x11].field13_0x3c.field9_0x24 + 2) =
         *(undefined2 *)((int)local_20 + 0xe);
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
    local_60[4] = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_64 + 2),(undefined4 *)0x0);
    local_60[6] = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_64 + 3),(undefined4 *)0x0);
    local_60[8] = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_64 + 4),(undefined4 *)0x0);
    local_60[9] = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,(float *)(local_64 + 5),(undefined4 *)0x0);
    local_60[10] = (int)*pfVar17;
    local_60[0xb] = local_64[6];
    local_60[0xc] = local_64[7];
    local_60[0xd] = local_64[8];
    local_60[0xe] = local_64[9];
    local_60[0xf] = local_64[10];
    local_60[0x10] = local_64[0xb];
    local_60[0x13] = local_64[0xc];
    if (*(short *)(local_20 + 1) == 0x56) {
      *(undefined2 *)(local_60 + 0x12) = 0;
    }
    else {
      *(undefined2 *)(local_60 + 0x12) = 1;
    }
    uVar16 = FUN_00414670();
    *(undefined4 *)(&param_1[0x11].field_0xb4 + param_1[0x12].field13_0x3c.field13_0x34 * 4) =
         uVar16;
    break;
  case 0x57:
    piVar15 = FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    param_1[0x12].field13_0x3c.field13_0x34 = *piVar15;
    break;
  case 0x58:
    if (*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) != 0) {
      iVar19 = *(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4);
      pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
      *(float *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 0x22c) =
           *(float *)(iVar19 + 0x22c) + *pfVar17;
    }
    break;
  case 0x59:
    if (*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) != 0) {
      fVar22 = (float10)FUN_00428700();
      pfVar17 = FUN_0040b380((int)param_1,(float *)(local_20 + 4),(undefined4 *)0x0);
      *(float *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 0x22c) =
           (float)fVar22 + *pfVar17;
    }
    break;
  case 0x5a:
    if (*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) != 0) {
      fVar4 = param_1[0x10].field12_0x30.subFrame;
      fVar5 = (float)local_20[6];
      fVar6 = (float)param_1[0x10].field12_0x30.previous;
      fVar7 = (float)local_20[5];
      iVar19 = *(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4);
      *(float *)(iVar19 + 0x220) = (float)param_1[0x10].field11_0x2c + (float)local_20[4];
      *(float *)(iVar19 + 0x224) = fVar6 + fVar7;
      *(float *)(iVar19 + 0x228) = fVar4 + fVar5;
    }
    break;
  case 0x5b:
    if ((*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) == 0) ||
       (*(int *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 600) == 0)) {
      *(undefined4 *)&param_1[0xc].field_0xa4 = 1;
    }
    else {
      *(undefined4 *)&param_1[0xc].field_0xa4 = 0;
    }
    break;
  case 0x5c:
    if (((*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) != 0) &&
        (*(int *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 600) != 0)) &&
       (*(byte *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 0x26c) < 2)) {
      *(undefined *)(*(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4) + 0x26c) = 2;
      iVar19 = *(int *)(&param_1[0x11].field_0xb4 + local_20[3] * 4);
      *(undefined4 *)(iVar19 + 0x264) = 0;
      *(undefined4 *)(iVar19 + 0x260) = 0;
      *(undefined4 *)(iVar19 + 0x25c) = 0xfffffc19;
    }
    break;
  case 0x5d:
    FUN_00417bfd((int)*(short *)(local_20 + 3),local_20 + 4);
    _DAT_005a5f8c = 1;
    DAT_005a5f90 = 1;
    DAT_005a5f98 = (int)*(short *)((int)local_20 + 0xe);
    DAT_005a5f94 = *(int *)(&DAT_00476120 + DAT_005a5f98 * 4);
    FUN_00414340();
    _DAT_00487b90 = 1;
    _DAT_00487b94 = 0;
    *(undefined4 *)&param_1[0x10].field_0x94 = 0xbf000000;
    param_1[0x10].field31_0x98 = 0.5;
    *(undefined2 *)&param_1[0x10].field_0x9c = 0;
    *(undefined2 *)&param_1[0x10].field_0x9e = 0;
    *(undefined2 *)&param_1[0x10].field_0xa0 = 0;
    *(undefined2 *)&param_1[0x10].field_0xa2 = 0;
    iVar19 = DAT_005a5f98 * 0x40;
    local_70 = &DAT_0069bcd0 + DAT_005a5f98 * 0x10;
    local_78 = 0;
    if (_DAT_0069bcbc == 0) {
      local_2bc = local_20 + 4;
      local_2c0 = &DAT_0069bce8 + iVar19;
      do {
        cVar8 = *(char *)local_2bc;
        *local_2c0 = cVar8;
        local_2bc = (int *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (cVar8 != '\0');
      local_2cc = &DAT_0069bce8 + iVar19;
      do {
        cVar8 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (cVar8 != '\0');
      for (local_74 = (int)local_2cc - (int)(&DAT_0069bce9 + iVar19); 0 < local_74;
          local_74 = local_74 + -1) {
        local_78 = local_78 + (int)*(char *)((int)local_70 + local_74 + 0x17);
      }
      if ((uint)(byte)(&DAT_0069bce2)[iVar19] != (local_78 & 0xff)) {
        *(undefined2 *)(&DAT_0069bd0e + iVar19) = 0;
        *(undefined2 *)(&DAT_0069bd0c + iVar19) = 0;
        (&DAT_0069bce2)[iVar19] = (undefined)local_78;
      }
      *(int *)(&DAT_0069bcdc + iVar19) = DAT_005a5f94;
      if (*(ushort *)(&DAT_0069bd0c + iVar19) < 9999) {
        *(short *)(&DAT_0069bd0c + iVar19) = *(short *)(&DAT_0069bd0c + iVar19) + 1;
      }
    }
    break;
  case 0x5e:
    if (DAT_005a5f90 != 0) {
      FUN_0041732c();
      if ((DAT_005a5f90 == 1) && (local_7c = FUN_00414360(0x3200,1), _DAT_005a5f8c != 0)) {
        local_80 = &DAT_0069bcd0 + DAT_005a5f98 * 0x10;
        if (DAT_005a5f94 < 500000) {
          local_2dc = DAT_005a5f94 / 10;
        }
        else {
          local_2dc = 50000;
        }
        local_88 = local_2dc;
        local_7c = DAT_005a5f94 + (DAT_005a5f94 * DAT_0069bc48) / 10;
        FUN_00417458();
        DAT_0069bca4 = DAT_0069bca4 + local_7c;
        if (_DAT_0069bcbc == 0) {
          *(short *)((int)local_80 + 0x3e) = *(short *)((int)local_80 + 0x3e) + 1;
          for (local_84 = 4; 0 < local_84; local_84 = local_84 + -1) {
            *(undefined *)((int)local_80 + local_84 + 0x13) =
                 *(undefined *)((int)local_80 + local_84 + 0x12);
          }
          *(char *)((int)local_80 + 0x13) = DAT_0069d4be + DAT_0069d4bd * '\x02';
        }
        DAT_0069bcc8 = DAT_0069bcc8 + 1;
      }
      DAT_005a5f90 = 0;
    }
    _DAT_00487b90 = 0;
    break;
  case 0x5f:
    piVar15 = local_20 + 3;
    piVar20 = &local_b0;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *piVar20 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar20 = piVar20 + 1;
    }
    pfVar17 = FUN_0040b380((int)param_1,&local_ac,(undefined4 *)0x0);
    local_ac = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&local_a8,(undefined4 *)0x0);
    local_a8 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&local_a4,(undefined4 *)0x0);
    local_a4 = *pfVar17;
    FUN_00411390(local_b0,&local_ac,CONCAT22((short)((uint)local_a4 >> 0x10),local_a0),local_9e,
                 local_9c);
    break;
  case 0x60:
    local_b4 = &DAT_004b8898;
    for (local_b8 = 0; local_b8 < 0x100; local_b8 = local_b8 + 1) {
      if (((((char)local_b4[0xe50] < '\0') && (((byte)local_b4[0xe51] >> 3 & 1) == 0)) &&
          (*(undefined4 *)(local_b4 + 0xce4) = 0, (local_b4[0xe51] & 1) == 0)) &&
         (-1 < *(int *)(local_b4 + 0xc44))) {
        FUN_00407440(local_b4 + 0x990,*(undefined2 *)(local_b4 + 0xc44));
        *(undefined4 *)(local_b4 + 0xc44) = 0xffffffff;
      }
      local_b4 = local_b4 + 0xec8;
    }
    break;
  case 0x61:
    iVar19 = local_20[3];
    local_13c = (short)iVar19 + 0x100;
    *(short *)&param_1->field_0xb4 = local_13c;
    FUN_00432430(param_1,(int)pAVar11->scripts[iVar19 + 0x100]);
    break;
  case 0x62:
    param_1[0x12].field20_0x8c = *(undefined2 *)(local_20 + 3);
    *(undefined2 *)&param_1[0x12].field_0x8e = *(undefined2 *)((int)local_20 + 0xe);
    *(undefined2 *)&param_1[0x12].field_0x90 = *(undefined2 *)(local_20 + 4);
    *(undefined2 *)&param_1[0x12].field_0x92 = *(undefined2 *)((int)local_20 + 0x12);
    *(undefined2 *)&param_1[0x12].field_0x94 = *(undefined2 *)(local_20 + 5);
    *(undefined *)((int)&param_1[0x12].field19_0x8a + 1) = 0xff;
    break;
  case 99:
    if (7 < local_20[3]) {
      DebugPrint2("error : sub anim overflow\n");
    }
    pAVar11 = g_AnmManager;
    fVar4 = local_1c[1];
    local_144 = SUB42(fVar4,0) + 0x100;
    pUVar1 = (Unknown *)((int)param_1 + local_20[3] * 0x110 + 0x110);
    *(short *)&pUVar1->field_0xb4 = local_144;
    FUN_00432430(pUVar1,(int)pAVar11->scripts[(int)fVar4 + 0x100]);
    break;
  case 100:
    local_5c = local_20 + 3;
    *(undefined *)&param_1[0x12].field13_0x3c.field14_0x38 = *(undefined *)local_5c;
    *(undefined *)((int)&param_1[0x12].field13_0x3c.field14_0x38 + 1) =
         *(undefined *)((int)local_20 + 0xd);
    *(undefined *)((int)&param_1[0x12].field13_0x3c.field14_0x38 + 2) =
         *(undefined *)((int)local_20 + 0xe);
    break;
  case 0x65:
    if (local_20[3] < 0) {
      DAT_0069bc50 = 0;
      *(undefined4 *)(&DAT_005a5f60 + (uint)*(byte *)&param_1[0x12].field13_0x3c.field15_0x3c * 4) =
           0;
      *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
           *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0xf7;
    }
    else {
      *(Unknown **)(&DAT_005a5f60 + local_20[3] * 4) = param_1;
      DAT_0069bc50 = 1;
      _DAT_0069bc54 = 0x3f800000;
      *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
           *(byte *)((int)&param_1[0x12].field18_0x88 + 1) | 8;
      *(undefined *)&param_1[0x12].field13_0x3c.field15_0x3c = *(undefined *)(local_20 + 3);
    }
    break;
  case 0x66:
    local_6c = local_20 + 3;
    uVar16 = FUN_0040ef50(0xd,&param_1[0x10].field11_0x2c,1,
                          *(undefined4 *)(PTR_DAT_00476438 + *local_6c * 4));
    *(undefined4 *)(&param_1[0x12].field_0xa8 + param_1[0x13].field5_0x14 * 4) = uVar16;
    iVar19 = *(int *)(&param_1[0x12].field_0xa8 + param_1[0x13].field5_0x14 * 4);
    *(int *)(iVar19 + 0x140) = local_6c[1];
    *(int *)(iVar19 + 0x144) = local_6c[2];
    *(int *)(iVar19 + 0x148) = local_6c[3];
    param_1[0x13].field6_0x18 = (float)local_6c[4];
    param_1[0x13].field5_0x14 = param_1[0x13].field5_0x14 + 1;
    break;
  case 0x67:
    param_1[0x10].field12_0x30.current = local_20[3];
    param_1[0x10].field13_0x3c.field0_0x0 = (float)local_20[4];
    param_1[0x10].field13_0x3c.field1_0x4 = local_20[5];
    break;
  case 0x68:
    *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
         *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1
    ;
    break;
  case 0x69:
    *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
         *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0xef | (*(byte *)(local_20 + 3) & 1) << 4
    ;
    break;
  case 0x6a:
    FUN_004311e0(local_20[3]);
    break;
  case 0x6b:
    *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
         *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0x1f | *(char *)(local_20 + 3) << 5;
    break;
  case 0x6c:
    param_1[0x10].field1_0x4 = local_20[3];
    break;
  case 0x6d:
    (&param_1[0x10].field2_0x8)[local_20[4]] = *local_1c;
    break;
  case 0x6e:
    param_1[0x10].field10_0x28 = local_20[3];
    goto LAB_0040954d;
  case 0x6f:
    *(int *)&param_1[0x10].field_0xa8 = local_20[3];
    *(undefined4 *)&param_1[0x10].field_0xa4 = *(undefined4 *)&param_1[0x10].field_0xa8;
    break;
  case 0x70:
    *(int *)&param_1[0x10].field_0xb8 = local_20[3];
    *(undefined4 *)&param_1[0x10].field_0xb4 = 0;
    *(undefined4 *)&param_1[0x10].field52_0xb0 = 0xfffffc19;
    break;
  case 0x71:
    param_1[0x13].field7_0x1c = (float)local_20[3];
    break;
  case 0x72:
    param_1[0x13].field8_0x20 = local_20[3];
    break;
  case 0x73:
    param_1[0x13].field9_0x24 = local_20[3];
    *(undefined4 *)&param_1[0x10].field_0xb8 = 0;
    *(undefined4 *)&param_1[0x10].field_0xb4 = 0;
    *(undefined4 *)&param_1[0x10].field52_0xb0 = 0xfffffc19;
    break;
  case 0x74:
    param_1[0x13].field10_0x28 = local_20[3];
    break;
  case 0x75:
    *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
         *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0xfe | *(byte *)(local_20 + 3) & 1;
    break;
  case 0x76:
    FUN_0040ef50(local_20[3],&param_1[0x10].field11_0x2c,local_20[4],local_20[5]);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < local_20[3]; local_8c = local_8c + 1) {
      local_98 = (float)param_1[0x10].field11_0x2c;
      local_94 = (float)param_1[0x10].field12_0x30.previous;
      local_90 = param_1[0x10].field12_0x30.subFrame;
      fVar22 = (float10)FUN_0041e820();
      local_98 = (float)((fVar22 * (float10)144.0 - (float10)72.0) + (float10)local_98);
      fVar22 = (float10)FUN_0041e820();
      local_94 = (float)((fVar22 * (float10)144.0 - (float10)72.0) + (float10)local_94);
      if (_DAT_0069d4b0 < 0x80) {
        FUN_0041f290();
      }
      else {
        FUN_0041f290();
      }
    }
    break;
  case 0x78:
    *(byte *)&param_1[0x12].field19_0x8a =
         *(byte *)&param_1[0x12].field19_0x8a & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x79:
    (*(code *)(&PTR_FUN_00476220)[local_20[3]])(param_1);
    break;
  case 0x7a:
    if (local_20[3] < 0) {
      param_1[0xc].field13_0x3c.field13_0x34 = 0;
    }
    else {
      param_1[0xc].field13_0x3c.field13_0x34 = (int)(&PTR_FUN_00476220)[local_20[3]];
    }
    break;
  case 0x7b:
    FUN_0040afb0((int)param_1,local_20 + 3,(undefined4 *)0x0);
    FUN_00424145();
    break;
  case 0x7c:
    FUN_0041f290();
    break;
  case 0x7d:
    DAT_00487db8 = 1;
    break;
  case 0x7e:
    _DAT_0069bc44 = local_20[3];
    DAT_0069d70c = DAT_0069d70c + 0x708;
    break;
  case 0x80:
    param_1->field19_0x8a = *(undefined2 *)(local_20 + 3);
    break;
  case 0x81:
    *(undefined2 *)((int)param_1 + (int)*local_1c * 0x110 + 0x19a) = *(undefined2 *)(local_20 + 4);
    break;
  case 0x82:
    *(byte *)&param_1[0x12].field19_0x8a =
         *(byte *)&param_1[0x12].field19_0x8a & 0xfb | (*(byte *)(local_20 + 3) & 1) << 2;
    break;
  case 0x83:
    *(float *)&param_1[0x10].field_0x94 = *local_1c;
    param_1[0x10].field31_0x98 = (float)local_20[4];
    *(undefined2 *)&param_1[0x10].field_0x9c = *(undefined2 *)(local_20 + 5);
    *(undefined2 *)&param_1[0x10].field_0x9e = *(undefined2 *)(local_20 + 6);
    *(undefined2 *)&param_1[0x10].field_0xa0 = *(undefined2 *)(local_20 + 7);
    *(undefined2 *)&param_1[0x10].field_0xa2 = *(undefined2 *)(local_20 + 8);
    break;
  case 0x84:
    *(byte *)&param_1[0x12].field19_0x8a =
         *(byte *)&param_1[0x12].field19_0x8a & 0xf7 | (*(byte *)(local_20 + 3) & 1) << 3;
    break;
  case 0x85:
    param_1[0x13].field10_0x28 = param_1[0x10].field1_0x4;
    *(undefined4 *)&param_1[0x10].field_0xb8 = 0;
    *(undefined4 *)&param_1[0x10].field_0xb4 = 0;
    *(undefined4 *)&param_1[0x10].field52_0xb0 = 0xfffffc19;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      *(undefined4 *)(&param_1[0x11].field_0xb4 + local_68 * 4) = 0;
    }
    break;
  case 0x87:
    *(byte *)&param_1[0x12].field19_0x8a =
         *(byte *)&param_1[0x12].field19_0x8a & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
  }
switchD_00407544_caseD_7f:
  local_20 = (int *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  goto LAB_004074ce;
switchD_00407544_caseD_24:
  if ((*(byte *)&param_1[0x12].field19_0x8a >> 2 & 1) != 0) {
    DebugPrint2("error : no Stack Ret\n");
  }
  param_1[0xf].field67_0xc0 = (AnmLoadedSprite *)((int)&param_1[0xf].field67_0xc0[-1].spriteId + 3);
  piVar15 = (int *)(&param_1[0xc].field_0xac + (int)param_1[0xf].field67_0xc0 * 0x4c);
  pfVar17 = (float *)&param_1[0xc].field13_0x3c.field9_0x24;
  for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar17 = (float)*piVar15;
    piVar15 = piVar15 + 1;
    pfVar17 = pfVar17 + 1;
  }
  goto LAB_004074b1;
switchD_00407544_caseD_23:
  local_14 = (float)local_20[3];
  param_1[0xc].field13_0x3c.field9_0x24 = (int)local_20 + (int)*(short *)((int)local_20 + 6);
  if ((*(byte *)&param_1[0x12].field19_0x8a >> 2 & 1) == 0) {
    pfVar17 = (float *)&param_1[0xc].field13_0x3c.field9_0x24;
    piVar15 = (int *)(&param_1[0xc].field_0xac + (int)param_1[0xf].field67_0xc0 * 0x4c);
    for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
      *piVar15 = (int)*pfVar17;
      pfVar17 = pfVar17 + 1;
      piVar15 = piVar15 + 1;
    }
  }
  FUN_00407440(&param_1[0xc].field13_0x3c.field9_0x24,(uint)local_14 & 0xffff);
  if (((*(byte *)&param_1[0x12].field19_0x8a >> 2 & 1) == 0) && ((int)param_1[0xf].field67_0xc0 < 7)
     ) {
    param_1[0xf].field67_0xc0 =
         (AnmLoadedSprite *)((int)&(param_1[0xf].field67_0xc0)->sourceFileIndex + 1);
  }
  param_1[0xc].field13_0x3c.field14_0x38 = local_20[4];
  uVar10 = *(undefined2 *)((int)(local_20 + 5) + 2);
  param_1[0xc].field16_0x84 = *(undefined2 *)(local_20 + 5);
  param_1[0xc].field17_0x86 = uVar10;
  goto LAB_004074b1;
}

