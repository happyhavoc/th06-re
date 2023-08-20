
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_004074a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined2 *puVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  float10 fVar19;
  float10 fVar20;
  int local_2dc;
  char *local_2cc;
  char *local_2c0;
  int *local_2bc;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  uint local_2a0;
  uint local_29c;
  undefined2 local_288;
  undefined2 local_280;
  undefined2 local_278;
  undefined2 local_270;
  undefined2 local_268;
  uint local_184;
  undefined2 local_144;
  undefined2 local_13c;
  float local_bc;
  int local_b8;
  undefined *local_b4;
  int local_b0 [4];
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
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
  undefined2 *local_60;
  int *local_5c;
  undefined2 *local_58;
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
  int *local_1c;
  float local_18;
  uint local_14;
  float local_10;
  float local_c;
  int local_8;
  
LAB_004074b1:
  while (local_20 = *(int **)(param_1 + 0x990), -1 < *(int *)(param_1 + 0xc68)) {
LAB_0040954d:
    *(int *)(param_1 + 0x990) = (int)local_20 + (int)*(short *)((int)local_20 + 6);
    if ((*(byte *)(param_1 + 0xe52) >> 2 & 1) == 0) {
      puVar13 = (undefined4 *)(param_1 + 0x990);
      puVar17 = (undefined4 *)(param_1 + 0x9dc + *(int *)(param_1 + 0xc3c) * 0x4c);
      for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      }
    }
    FUN_00407440(param_1 + 0x990,*(undefined2 *)(param_1 + 0xc48 + *(int *)(param_1 + 0xc68) * 4));
    if (*(int *)(param_1 + 0xc3c) < 7) {
      *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + 1;
    }
    *(undefined4 *)(param_1 + 0xc68) = 0xffffffff;
  }
LAB_004074ce:
  iVar15 = DAT_006d4588;
  if (*(int *)(param_1 + 0x99c) != *local_20) {
    bVar14 = *(byte *)(param_1 + 0xe50) & 3;
    if (bVar14 == 1) {
      fVar20 = (float10)FUN_0041e850(*(undefined4 *)(param_1 + 0xc90),
                                     DAT_006c6ec0 * *(float *)(param_1 + 0xc94));
      *(float *)(param_1 + 0xc90) = (float)fVar20;
      *(float *)(param_1 + 0xc98) =
           DAT_006c6ec0 * *(float *)(param_1 + 0xc9c) + *(float *)(param_1 + 0xc98);
      fVar20 = (float10)fcos((float10)*(float *)(param_1 + 0xc90));
      fVar19 = (float10)fsin((float10)*(float *)(param_1 + 0xc90));
      *(float *)(param_1 + 0xc84) = (float)(fVar20 * (float10)*(float *)(param_1 + 0xc98));
      *(float *)(param_1 + 0xc88) = (float)(fVar19 * (float10)*(float *)(param_1 + 0xc98));
      *(undefined4 *)(param_1 + 0xc8c) = 0;
    }
    else if (bVar14 == 2) {
      FUN_004241e5();
      local_bc = ((float)*(int *)(param_1 + 0xccc) + *(float *)(param_1 + 0xcc8)) /
                 (float)*(int *)(param_1 + 0xcd0);
      if (1.0 <= local_bc) {
        local_bc = 1.0;
      }
      switch(*(byte *)(param_1 + 0xe50) >> 2 & 7) {
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
      *(float *)(param_1 + 0xc84) =
           (local_bc * *(float *)(param_1 + 0xcac) + *(float *)(param_1 + 0xcb8)) -
           *(float *)(param_1 + 0xc6c);
      *(float *)(param_1 + 0xc88) =
           (local_bc * *(float *)(param_1 + 0xcb0) + *(float *)(param_1 + 0xcbc)) -
           *(float *)(param_1 + 0xc70);
      *(float *)(param_1 + 0xc8c) =
           (local_bc * *(float *)(param_1 + 0xcb4) + *(float *)(param_1 + 0xcc0)) -
           *(float *)(param_1 + 0xc74);
      fVar20 = (float10)FUN_0045be40((double)*(float *)(param_1 + 0xc88),
                                     (double)*(float *)(param_1 + 0xc84));
      *(float *)(param_1 + 0xc90) = (float)fVar20;
      if (*(int *)(param_1 + 0xccc) < 1) {
        *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc;
        *(float *)(param_1 + 0xc6c) = *(float *)(param_1 + 0xcb8) + *(float *)(param_1 + 0xcac);
        *(float *)(param_1 + 0xc70) = *(float *)(param_1 + 0xcbc) + *(float *)(param_1 + 0xcb0);
        *(float *)(param_1 + 0xc74) = *(float *)(param_1 + 0xcc0) + *(float *)(param_1 + 0xcb4);
        *(undefined4 *)(param_1 + 0xc84) = 0;
        *(undefined4 *)(param_1 + 0xc88) = 0;
        *(undefined4 *)(param_1 + 0xc8c) = 0;
      }
    }
    if (0 < *(int *)(param_1 + 0xce4)) {
      if (0 < *(int *)(param_1 + 0xd54)) {
        *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_1 + 0xd60);
        FUN_00424285(param_1 + 0xd60,param_1 + 0xd5c);
        if (*(int *)(param_1 + 0xd54) <= *(int *)(param_1 + 0xd60)) {
          *(float *)(param_1 + 0xd04) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
          *(float *)(param_1 + 0xd08) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xca4);
          *(float *)(param_1 + 0xd0c) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xca8);
          FUN_004145c0();
          *(undefined4 *)(param_1 + 0xd60) = 0;
          *(undefined4 *)(param_1 + 0xd5c) = 0;
          *(undefined4 *)(param_1 + 0xd58) = 0xfffffc19;
        }
      }
      iVar15 = DAT_006d4588;
      if (-1 < *(short *)(param_1 + 0xe5a)) {
        cVar5 = '\0';
        if (*(float *)(param_1 + 0xc84) < 0.0 == NAN(*(float *)(param_1 + 0xc84))) {
          if (0.0 < *(float *)(param_1 + 0xc84)) {
            cVar5 = '\x02';
          }
        }
        else {
          cVar5 = '\x01';
        }
        if (*(char *)(param_1 + 0xe53) != cVar5) {
          if (cVar5 == '\0') {
            if (*(char *)(param_1 + 0xe53) == -1) {
              iVar16 = *(short *)(param_1 + 0xe54) + 0x100;
              local_268 = (undefined2)iVar16;
              *(undefined2 *)(param_1 + 0xb4) = local_268;
              FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + iVar16 * 4));
            }
            else if (*(char *)(param_1 + 0xe53) == '\x01') {
              iVar16 = *(short *)(param_1 + 0xe56) + 0x100;
              local_270 = (undefined2)iVar16;
              *(undefined2 *)(param_1 + 0xb4) = local_270;
              FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + iVar16 * 4));
            }
            else {
              iVar16 = *(short *)(param_1 + 0xe58) + 0x100;
              local_278 = (undefined2)iVar16;
              *(undefined2 *)(param_1 + 0xb4) = local_278;
              FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + iVar16 * 4));
            }
          }
          else if (cVar5 == '\x01') {
            iVar16 = *(short *)(param_1 + 0xe5a) + 0x100;
            local_280 = (undefined2)iVar16;
            *(undefined2 *)(param_1 + 0xb4) = local_280;
            FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + iVar16 * 4));
          }
          else if (cVar5 == '\x02') {
            iVar16 = *(short *)(param_1 + 0xe5c) + 0x100;
            local_288 = (undefined2)iVar16;
            *(undefined2 *)(param_1 + 0xb4) = local_288;
            FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + iVar16 * 4));
          }
          *(char *)(param_1 + 0xe53) = cVar5;
        }
      }
      if (*(int *)(param_1 + 0x9a0) != 0) {
        (**(code **)(param_1 + 0x9a0))(param_1,0);
      }
    }
    *(int **)(param_1 + 0x990) = local_20;
    *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_1 + 0x99c);
    FUN_00424285(param_1 + 0x99c,param_1 + 0x998);
    return 0;
  }
  if (((uint)*(byte *)((int)local_20 + 9) & 1 << ((byte)_DAT_0069bcb0 & 0x1f)) == 0)
  goto switchD_00407544_caseD_7f;
  local_1c = local_20 + 3;
  switch(*(undefined2 *)(local_20 + 1)) {
  case 1:
    return 0xffffffff;
  case 2:
    goto switchD_00407544_caseD_2;
  case 3:
    piVar8 = (int *)FUN_0040afb0();
    local_14 = *piVar8 - 1;
    FUN_0040b3c0();
    uVar6 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    FUN_0040b3c0();
    break;
  case 6:
    puVar9 = (uint *)FUN_0040afb0();
    local_24 = *puVar9;
    if (local_24 == 0) {
      local_29c = 0;
    }
    else {
      local_29c = FUN_0041e7f0();
      local_29c = local_29c % local_24;
    }
    local_14 = local_29c;
    FUN_0040b3c0();
    break;
  case 7:
    puVar9 = (uint *)FUN_0040afb0();
    local_28 = *puVar9;
    piVar8 = (int *)FUN_0040afb0();
    local_2c = *piVar8;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = FUN_0041e7f0();
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = local_2a0 + local_2c;
    FUN_0040b3c0();
    break;
  case 8:
    pfVar11 = (float *)FUN_0040b380();
    local_30 = *pfVar11;
    fVar20 = (float10)FUN_0041e820();
    local_18 = (float)(fVar20 * (float10)local_30);
    FUN_0040b3c0();
    break;
  case 9:
    pfVar11 = (float *)FUN_0040b380();
    local_34 = *pfVar11;
    pfVar11 = (float *)FUN_0040b380();
    local_38 = *pfVar11;
    fVar20 = (float10)FUN_0041e820();
    local_18 = (float)(fVar20 * (float10)local_34) + local_38;
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
    local_3c = (int *)FUN_0040afb0();
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = (int *)FUN_0040afb0();
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    FUN_0040b7d0(param_1,local_20[3]);
    break;
  case 0x1a:
    puVar13 = (undefined4 *)FUN_0040afb0();
    local_18 = (float)*puVar13;
    fVar20 = (float10)FUN_0041e850(local_18);
    local_18 = (float)fVar20;
    FUN_0040b3c0();
    break;
  case 0x1b:
    piVar8 = (int *)FUN_0040afb0();
    local_48 = *piVar8;
    piVar8 = (int *)FUN_0040afb0();
    local_44 = *piVar8;
    if (local_48 == local_44) {
      local_2a4 = 0;
    }
    else {
      local_2a4 = (uint)(local_44 <= local_48) * 2 + -1;
    }
    *(int *)(param_1 + 0x9d4) = local_2a4;
    break;
  case 0x1c:
    pfVar11 = (float *)FUN_0040b380();
    local_4c = *pfVar11;
    pfVar11 = (float *)FUN_0040b380();
    local_50 = *pfVar11;
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
    *(undefined4 *)(param_1 + 0x9d4) = local_2a8;
    break;
  case 0x1d:
    if (-1 < *(int *)(param_1 + 0x9d4)) break;
    goto switchD_00407544_caseD_2;
  case 0x1e:
    if (0 < *(int *)(param_1 + 0x9d4)) break;
    goto switchD_00407544_caseD_2;
  case 0x1f:
    if (*(int *)(param_1 + 0x9d4) != 0) break;
    goto switchD_00407544_caseD_2;
  case 0x20:
    uVar6 = *(uint *)(param_1 + 0x9d4);
joined_r0x00407ab4:
    if ((int)uVar6 < 1) break;
    goto switchD_00407544_caseD_2;
  case 0x21:
    if (*(int *)(param_1 + 0x9d4) < 0) break;
    goto switchD_00407544_caseD_2;
  case 0x22:
    if (*(int *)(param_1 + 0x9d4) == 0) break;
switchD_00407544_caseD_2:
    *(int *)(param_1 + 0x99c) = local_20[3];
    local_20 = (int *)((int)local_20 + local_1c[1]);
    goto LAB_004074ce;
  case 0x23:
    goto switchD_00407544_caseD_23;
  case 0x24:
    goto switchD_00407544_caseD_24;
  case 0x25:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if ((int)local_14 < local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x26:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if ((int)local_14 <= local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x27:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if (local_14 == local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x28:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if (local_1c[4] < (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x29:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if (local_1c[4] <= (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x2a:
    puVar9 = (uint *)FUN_0040afb0();
    local_14 = *puVar9;
    if (local_14 != local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x2b:
    *(int *)(param_1 + 0xc6c) = local_20[3];
    *(int *)(param_1 + 0xc70) = local_20[4];
    *(int *)(param_1 + 0xc74) = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc6c) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc70) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc74) = *puVar13;
    FUN_00412240();
    break;
  case 0x2c:
    *(int *)(param_1 + 0xc84) = local_20[3];
    *(int *)(param_1 + 0xc88) = local_20[4];
    *(int *)(param_1 + 0xc8c) = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc84) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc88) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc8c) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc;
    break;
  case 0x2d:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc90) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc98) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 1;
    break;
  case 0x2e:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc94) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 1;
    break;
  case 0x2f:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc98) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 1;
    break;
  case 0x30:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc9c) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 1;
    break;
  case 0x31:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar1 = local_c - local_10;
    fVar20 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0xc90) = (float)(fVar20 * (float10)fVar1 + (float10)local_10);
    break;
  case 0x32:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar1 = local_c - local_10;
    fVar20 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0xc90) = (float)(fVar20 * (float10)fVar1 + (float10)local_10);
    if (*(float *)(param_1 + 0xc6c) < *(float *)(param_1 + 0xe60) + 96.0) {
      if (*(float *)(param_1 + 0xc90) <= 1.570796) {
        if (*(float *)(param_1 + 0xc90) < -1.570796 != NAN(*(float *)(param_1 + 0xc90))) {
          *(float *)(param_1 + 0xc90) = -3.141593 - *(float *)(param_1 + 0xc90);
        }
      }
      else {
        *(float *)(param_1 + 0xc90) = 3.141593 - *(float *)(param_1 + 0xc90);
      }
    }
    fVar1 = *(float *)(param_1 + 0xe68) - 96.0;
    if (fVar1 < *(float *)(param_1 + 0xc6c) != (NAN(fVar1) || NAN(*(float *)(param_1 + 0xc6c)))) {
      if ((*(float *)(param_1 + 0xc90) < 1.570796 == NAN(*(float *)(param_1 + 0xc90))) ||
         (*(float *)(param_1 + 0xc90) < 0.0)) {
        if ((-1.570796 < *(float *)(param_1 + 0xc90)) &&
           (*(float *)(param_1 + 0xc90) < 0.0 != (*(float *)(param_1 + 0xc90) == 0.0))) {
          *(float *)(param_1 + 0xc90) = -3.141593 - *(float *)(param_1 + 0xc90);
        }
      }
      else {
        *(float *)(param_1 + 0xc90) = 3.141593 - *(float *)(param_1 + 0xc90);
      }
    }
    if ((*(float *)(param_1 + 0xc70) < *(float *)(param_1 + 0xe64) + 48.0) &&
       (*(float *)(param_1 + 0xc90) < 0.0 != NAN(*(float *)(param_1 + 0xc90)))) {
      *(float *)(param_1 + 0xc90) = -*(float *)(param_1 + 0xc90);
    }
    fVar1 = *(float *)(param_1 + 0xe6c) - 48.0;
    if ((fVar1 < *(float *)(param_1 + 0xc70) != (NAN(fVar1) || NAN(*(float *)(param_1 + 0xc70)))) &&
       (0.0 < *(float *)(param_1 + 0xc90))) {
      *(float *)(param_1 + 0xc90) = -*(float *)(param_1 + 0xc90);
    }
    break;
  case 0x33:
    local_10 = (float)local_20[3];
    local_c = (float)local_20[4];
    local_8 = local_20[5];
    fVar20 = (float10)FUN_00428700();
    *(float *)(param_1 + 0xc90) = (float)(fVar20 + (float10)local_10);
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xc98) = *puVar13;
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xfc | 1;
    break;
  case 0x34:
    FUN_0040abe0();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 4;
    break;
  case 0x35:
    FUN_0040abe0();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 8;
    break;
  case 0x36:
    FUN_0040abe0();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0xc;
    break;
  case 0x37:
    FUN_0040abe0();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0x10;
    break;
  case 0x38:
    FUN_0040ad10();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3;
    break;
  case 0x39:
    FUN_0040ad10();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 4;
    break;
  case 0x3a:
    FUN_0040ad10();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 8;
    break;
  case 0x3b:
    FUN_0040ad10();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0xc;
    break;
  case 0x3c:
    FUN_0040ad10();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0x10;
    break;
  case 0x3d:
    FUN_0040ae80();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 4;
    break;
  case 0x3e:
    FUN_0040ae80();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 8;
    break;
  case 0x3f:
    FUN_0040ae80();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0xc;
    break;
  case 0x40:
    FUN_0040ae80();
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xe3 | 0x10;
    break;
  case 0x41:
    *(int *)(param_1 + 0xe60) = local_20[3];
    *(int *)(param_1 + 0xe64) = local_20[4];
    *(int *)(param_1 + 0xe68) = local_20[5];
    *(int *)(param_1 + 0xe6c) = local_20[6];
    *(byte *)(param_1 + 0xe52) = *(byte *)(param_1 + 0xe52) | 1;
    break;
  case 0x42:
    *(byte *)(param_1 + 0xe52) = *(byte *)(param_1 + 0xe52) & 0xfe;
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
    local_58 = (undefined2 *)(param_1 + 0xd00);
    *local_58 = *(undefined2 *)local_54;
    *(short *)(param_1 + 0xd48) = *(short *)(local_20 + 1) + -0x43;
    puVar10 = (undefined2 *)FUN_0040afb0();
    local_58[0x22] = *puVar10;
    iVar15 = ((int)*(short *)(param_1 + 0xcde) - (int)*(short *)(param_1 + 0xcdc)) * _DAT_0069d710;
    local_58[0x22] =
         (short)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) +
         local_58[0x22] + *(short *)(param_1 + 0xcdc);
    if ((short)local_58[0x22] < 1) {
      local_58[0x22] = 1;
    }
    puVar10 = (undefined2 *)FUN_0040afb0();
    local_58[0x23] = *puVar10;
    iVar15 = ((int)*(short *)(param_1 + 0xce2) - (int)*(short *)(param_1 + 0xce0)) * _DAT_0069d710;
    local_58[0x23] =
         (short)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) +
         local_58[0x23] + *(short *)(param_1 + 0xce0);
    if ((short)local_58[0x23] < 1) {
      local_58[0x23] = 1;
    }
    fVar1 = *(float *)(param_1 + 0xc74);
    fVar2 = *(float *)(param_1 + 0xca8);
    fVar3 = *(float *)(param_1 + 0xc70);
    fVar4 = *(float *)(param_1 + 0xca4);
    *(float *)(local_58 + 2) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
    *(float *)(local_58 + 4) = fVar3 + fVar4;
    *(float *)(local_58 + 6) = fVar1 + fVar2;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_58 + 8) = *puVar13;
    fVar20 = (float10)FUN_0041e850(*(undefined4 *)(local_58 + 8));
    *(float *)(local_58 + 8) = (float)fVar20;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_58 + 0xc) = *puVar13;
    if ((NAN(*(float *)(local_58 + 0xc)) == (*(float *)(local_58 + 0xc) == 0.0)) &&
       (*(float *)(local_58 + 0xc) =
             ((*(float *)(param_1 + 0xcd8) - *(float *)(param_1 + 0xcd4)) * (float)_DAT_0069d710) /
             32.0 + *(float *)(param_1 + 0xcd4) + *(float *)(local_58 + 0xc),
       *(float *)(local_58 + 0xc) < 0.3 != NAN(*(float *)(local_58 + 0xc)))) {
      *(undefined4 *)(local_58 + 0xc) = 0x3e99999a;
    }
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_58 + 10) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_58 + 0xe) = *puVar13;
    *(float *)(local_58 + 0xe) =
         (((*(float *)(param_1 + 0xcd8) - *(float *)(param_1 + 0xcd4)) * (float)_DAT_0069d710) /
          32.0 + *(float *)(param_1 + 0xcd4)) / 2.0 + *(float *)(local_58 + 0xe);
    if (*(float *)(local_58 + 0xe) < 0.3 != NAN(*(float *)(local_58 + 0xe))) {
      *(undefined4 *)(local_58 + 0xe) = 0x3e99999a;
    }
    local_58[0x25] = 0;
    *(int *)(local_58 + 0x26) = local_54[7];
    local_14 = (uint)*(short *)((int)local_54 + 2);
    puVar10 = (undefined2 *)FUN_0040afb0();
    local_58[1] = *puVar10;
    if ((*(byte *)(param_1 + 0xe50) >> 5 & 1) == 0) {
      FUN_004145c0();
    }
    break;
  case 0x4c:
    *(int *)(param_1 + 0xd54) = local_20[3];
    iVar15 = *(int *)(param_1 + 0xd54) / 5;
    iVar16 = (-*(int *)(param_1 + 0xd54) / 5 - iVar15) * _DAT_0069d710;
    *(int *)(param_1 + 0xd54) =
         ((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) + iVar15 + *(int *)(param_1 + 0xd54);
    *(undefined4 *)(param_1 + 0xd60) = 0;
    *(undefined4 *)(param_1 + 0xd5c) = 0;
    *(undefined4 *)(param_1 + 0xd58) = 0xfffffc19;
    break;
  case 0x4d:
    *(int *)(param_1 + 0xd54) = local_20[3];
    iVar15 = *(int *)(param_1 + 0xd54) / 5;
    iVar16 = (-*(int *)(param_1 + 0xd54) / 5 - iVar15) * _DAT_0069d710;
    *(int *)(param_1 + 0xd54) =
         ((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) + iVar15 + *(int *)(param_1 + 0xd54);
    if (*(int *)(param_1 + 0xd54) != 0) {
      uVar6 = *(uint *)(param_1 + 0xd54);
      if (uVar6 == 0) {
        local_184 = 0;
      }
      else {
        local_184 = FUN_0041e7f0();
        local_184 = local_184 % uVar6;
      }
      *(uint *)(param_1 + 0xd60) = local_184;
      *(undefined4 *)(param_1 + 0xd5c) = 0;
      *(undefined4 *)(param_1 + 0xd58) = 0xfffffc19;
    }
    break;
  case 0x4e:
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) | 0x20;
    break;
  case 0x4f:
    *(byte *)(param_1 + 0xe50) = *(byte *)(param_1 + 0xe50) & 0xdf;
    break;
  case 0x50:
    *(float *)(param_1 + 0xd04) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
    *(float *)(param_1 + 0xd08) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xca4);
    *(float *)(param_1 + 0xd0c) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xca8);
    FUN_004145c0();
    break;
  case 0x51:
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xca0) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xca4) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xca8) = *puVar13;
    break;
  case 0x52:
    puVar13 = (undefined4 *)FUN_0040afb0();
    *(undefined4 *)(param_1 + 0xd30) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040afb0();
    *(undefined4 *)(param_1 + 0xd34) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040afb0();
    *(undefined4 *)(param_1 + 0xd38) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040afb0();
    *(undefined4 *)(param_1 + 0xd3c) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xd20) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xd24) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xd28) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(param_1 + 0xd2c) = *puVar13;
    break;
  case 0x53:
    FUN_00414340();
    break;
  case 0x54:
    if (local_20[3] < 0) {
      *(uint *)(param_1 + 0xd4c) = *(uint *)(param_1 + 0xd4c) & 0xfffffdff;
    }
    else {
      *(int *)(param_1 + 0xd50) = local_20[3];
      *(uint *)(param_1 + 0xd4c) = *(uint *)(param_1 + 0xd4c) | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = local_20 + 3;
    local_60 = (undefined2 *)(param_1 + 0xd64);
    *(float *)(param_1 + 0xd68) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
    *(float *)(param_1 + 0xd6c) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xca4);
    *(float *)(param_1 + 0xd70) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xca8);
    *local_60 = *(undefined2 *)local_64;
    *(undefined2 *)(param_1 + 0xd66) = *(undefined2 *)((int)local_20 + 0xe);
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_60 + 8) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_60 + 0xc) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_60 + 0x10) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_60 + 0x12) = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    *(undefined4 *)(local_60 + 0x14) = *puVar13;
    *(int *)(local_60 + 0x16) = local_64[6];
    *(int *)(local_60 + 0x18) = local_64[7];
    *(int *)(local_60 + 0x1a) = local_64[8];
    *(int *)(local_60 + 0x1c) = local_64[9];
    *(int *)(local_60 + 0x1e) = local_64[10];
    *(int *)(local_60 + 0x20) = local_64[0xb];
    *(int *)(local_60 + 0x26) = local_64[0xc];
    if (*(short *)(local_20 + 1) == 0x56) {
      local_60[0x24] = 0;
    }
    else {
      local_60[0x24] = 1;
    }
    uVar12 = FUN_00414670();
    *(undefined4 *)(param_1 + 0xdb8 + *(int *)(param_1 + 0xe38) * 4) = uVar12;
    break;
  case 0x57:
    puVar13 = (undefined4 *)FUN_0040afb0();
    *(undefined4 *)(param_1 + 0xe38) = *puVar13;
    break;
  case 0x58:
    if (*(int *)(param_1 + 0xdb8 + local_20[3] * 4) != 0) {
      iVar15 = *(int *)(param_1 + 0xdb8 + local_20[3] * 4);
      pfVar11 = (float *)FUN_0040b380();
      *(float *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 0x22c) =
           *(float *)(iVar15 + 0x22c) + *pfVar11;
    }
    break;
  case 0x59:
    if (*(int *)(param_1 + 0xdb8 + local_20[3] * 4) != 0) {
      fVar20 = (float10)FUN_00428700();
      pfVar11 = (float *)FUN_0040b380();
      *(float *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 0x22c) = (float)fVar20 + *pfVar11;
    }
    break;
  case 0x5a:
    if (*(int *)(param_1 + 0xdb8 + local_20[3] * 4) != 0) {
      fVar1 = *(float *)(param_1 + 0xc74);
      fVar2 = (float)local_20[6];
      fVar3 = *(float *)(param_1 + 0xc70);
      fVar4 = (float)local_20[5];
      iVar15 = *(int *)(param_1 + 0xdb8 + local_20[3] * 4);
      *(float *)(iVar15 + 0x220) = *(float *)(param_1 + 0xc6c) + (float)local_20[4];
      *(float *)(iVar15 + 0x224) = fVar3 + fVar4;
      *(float *)(iVar15 + 0x228) = fVar1 + fVar2;
    }
    break;
  case 0x5b:
    if ((*(int *)(param_1 + 0xdb8 + local_20[3] * 4) == 0) ||
       (*(int *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 600) == 0)) {
      *(undefined4 *)(param_1 + 0x9d4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x9d4) = 0;
    }
    break;
  case 0x5c:
    if (((*(int *)(param_1 + 0xdb8 + local_20[3] * 4) != 0) &&
        (*(int *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 600) != 0)) &&
       (*(byte *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 0x26c) < 2)) {
      *(undefined *)(*(int *)(param_1 + 0xdb8 + local_20[3] * 4) + 0x26c) = 2;
      iVar15 = *(int *)(param_1 + 0xdb8 + local_20[3] * 4);
      *(undefined4 *)(iVar15 + 0x264) = 0;
      *(undefined4 *)(iVar15 + 0x260) = 0;
      *(undefined4 *)(iVar15 + 0x25c) = 0xfffffc19;
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
    *(undefined4 *)(param_1 + 0xcd4) = 0xbf000000;
    *(undefined4 *)(param_1 + 0xcd8) = 0x3f000000;
    *(undefined2 *)(param_1 + 0xcdc) = 0;
    *(undefined2 *)(param_1 + 0xcde) = 0;
    *(undefined2 *)(param_1 + 0xce0) = 0;
    *(undefined2 *)(param_1 + 0xce2) = 0;
    iVar15 = DAT_005a5f98 * 0x40;
    local_70 = &DAT_0069bcd0 + DAT_005a5f98 * 0x10;
    local_78 = 0;
    if (_DAT_0069bcbc == 0) {
      local_2bc = local_20 + 4;
      local_2c0 = &DAT_0069bce8 + iVar15;
      do {
        cVar5 = *(char *)local_2bc;
        *local_2c0 = cVar5;
        local_2bc = (int *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (cVar5 != '\0');
      local_2cc = &DAT_0069bce8 + iVar15;
      do {
        cVar5 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (cVar5 != '\0');
      for (local_74 = (int)local_2cc - (int)(&DAT_0069bce9 + iVar15); 0 < local_74;
          local_74 = local_74 + -1) {
        local_78 = local_78 + (int)*(char *)((int)local_70 + local_74 + 0x17);
      }
      if ((uint)(byte)(&DAT_0069bce2)[iVar15] != (local_78 & 0xff)) {
        *(undefined2 *)(&DAT_0069bd0e + iVar15) = 0;
        *(undefined2 *)(&DAT_0069bd0c + iVar15) = 0;
        (&DAT_0069bce2)[iVar15] = (undefined)local_78;
      }
      *(int *)(&DAT_0069bcdc + iVar15) = DAT_005a5f94;
      if (*(ushort *)(&DAT_0069bd0c + iVar15) < 9999) {
        *(short *)(&DAT_0069bd0c + iVar15) = *(short *)(&DAT_0069bd0c + iVar15) + 1;
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
    piVar8 = local_20 + 3;
    piVar18 = local_b0;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar18 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar18 = piVar18 + 1;
    }
    puVar13 = (undefined4 *)FUN_0040b380();
    local_b0[1] = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    local_b0[2] = *puVar13;
    puVar13 = (undefined4 *)FUN_0040b380();
    local_b0[3] = *puVar13;
    FUN_00411390(local_b0[0],local_b0 + 1,CONCAT22((short)((uint)local_b0[3] >> 0x10),local_a0),
                 local_9e,local_9c);
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
    iVar16 = local_20[3];
    local_13c = (undefined2)(iVar16 + 0x100);
    *(undefined2 *)(param_1 + 0xb4) = local_13c;
    FUN_00432430(param_1,*(undefined4 *)(iVar15 + 0x1c934 + (iVar16 + 0x100) * 4));
    break;
  case 0x62:
    *(undefined2 *)(param_1 + 0xe54) = *(undefined2 *)(local_20 + 3);
    *(undefined2 *)(param_1 + 0xe56) = *(undefined2 *)((int)local_20 + 0xe);
    *(undefined2 *)(param_1 + 0xe58) = *(undefined2 *)(local_20 + 4);
    *(undefined2 *)(param_1 + 0xe5a) = *(undefined2 *)((int)local_20 + 0x12);
    *(undefined2 *)(param_1 + 0xe5c) = *(undefined2 *)(local_20 + 5);
    *(undefined *)(param_1 + 0xe53) = 0xff;
    break;
  case 99:
    if (7 < local_20[3]) {
      DebugPrint2("error : sub anim overflow\n");
    }
    iVar7 = DAT_006d4588;
    iVar16 = local_1c[1];
    iVar15 = param_1 + 0x110 + local_20[3] * 0x110;
    local_144 = (undefined2)(iVar16 + 0x100);
    *(undefined2 *)(iVar15 + 0xb4) = local_144;
    FUN_00432430(iVar15,*(undefined4 *)(iVar7 + 0x1c934 + (iVar16 + 0x100) * 4));
    break;
  case 100:
    local_5c = local_20 + 3;
    *(undefined *)(param_1 + 0xe3c) = *(undefined *)local_5c;
    *(undefined *)(param_1 + 0xe3d) = *(undefined *)((int)local_20 + 0xd);
    *(undefined *)(param_1 + 0xe3e) = *(undefined *)((int)local_20 + 0xe);
    break;
  case 0x65:
    if (local_20[3] < 0) {
      DAT_0069bc50 = 0;
      *(undefined4 *)(&DAT_005a5f60 + (uint)*(byte *)(param_1 + 0xe40) * 4) = 0;
      *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) & 0xf7;
    }
    else {
      *(int *)(&DAT_005a5f60 + local_20[3] * 4) = param_1;
      DAT_0069bc50 = 1;
      _DAT_0069bc54 = 0x3f800000;
      *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) | 8;
      *(undefined *)(param_1 + 0xe40) = *(undefined *)(local_20 + 3);
    }
    break;
  case 0x66:
    local_6c = local_20 + 3;
    uVar12 = FUN_0040ef50(0xd,param_1 + 0xc6c,1,*(undefined4 *)(PTR_DAT_00476438 + *local_6c * 4));
    *(undefined4 *)(param_1 + 0xe70 + *(int *)(param_1 + 0xea0) * 4) = uVar12;
    iVar15 = *(int *)(param_1 + 0xe70 + *(int *)(param_1 + 0xea0) * 4);
    *(int *)(iVar15 + 0x140) = local_6c[1];
    *(int *)(iVar15 + 0x144) = local_6c[2];
    *(int *)(iVar15 + 0x148) = local_6c[3];
    *(int *)(param_1 + 0xea4) = local_6c[4];
    *(int *)(param_1 + 0xea0) = *(int *)(param_1 + 0xea0) + 1;
    break;
  case 0x67:
    *(int *)(param_1 + 0xc78) = local_20[3];
    *(int *)(param_1 + 0xc7c) = local_20[4];
    *(int *)(param_1 + 0xc80) = local_20[5];
    break;
  case 0x68:
    *(byte *)(param_1 + 0xe51) =
         *(byte *)(param_1 + 0xe51) & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x69:
    *(byte *)(param_1 + 0xe51) =
         *(byte *)(param_1 + 0xe51) & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
    break;
  case 0x6a:
    FUN_004311e0(local_20[3],0);
    break;
  case 0x6b:
    *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) & 0x1f | *(char *)(local_20 + 3) << 5;
    break;
  case 0x6c:
    *(int *)(param_1 + 0xc44) = local_20[3];
    break;
  case 0x6d:
    *(int *)(param_1 + 0xc48 + local_20[4] * 4) = *local_1c;
    break;
  case 0x6e:
    *(int *)(param_1 + 0xc68) = local_20[3];
    goto LAB_0040954d;
  case 0x6f:
    *(int *)(param_1 + 0xce8) = local_20[3];
    *(undefined4 *)(param_1 + 0xce4) = *(undefined4 *)(param_1 + 0xce8);
    break;
  case 0x70:
    *(int *)(param_1 + 0xcf8) = local_20[3];
    *(undefined4 *)(param_1 + 0xcf4) = 0;
    *(undefined4 *)(param_1 + 0xcf0) = 0xfffffc19;
    break;
  case 0x71:
    *(int *)(param_1 + 0xea8) = local_20[3];
    break;
  case 0x72:
    *(int *)(param_1 + 0xeac) = local_20[3];
    break;
  case 0x73:
    *(int *)(param_1 + 0xeb0) = local_20[3];
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    *(undefined4 *)(param_1 + 0xcf4) = 0;
    *(undefined4 *)(param_1 + 0xcf0) = 0xfffffc19;
    break;
  case 0x74:
    *(int *)(param_1 + 0xeb4) = local_20[3];
    break;
  case 0x75:
    *(byte *)(param_1 + 0xe51) = *(byte *)(param_1 + 0xe51) & 0xfe | *(byte *)(local_20 + 3) & 1;
    break;
  case 0x76:
    FUN_0040ef50(local_20[3],param_1 + 0xc6c,local_20[4],local_20[5]);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < local_20[3]; local_8c = local_8c + 1) {
      local_98 = *(float *)(param_1 + 0xc6c);
      local_94 = *(float *)(param_1 + 0xc70);
      local_90 = *(undefined4 *)(param_1 + 0xc74);
      fVar20 = (float10)FUN_0041e820();
      local_98 = (float)((fVar20 * (float10)144.0 - (float10)72.0) + (float10)local_98);
      fVar20 = (float10)FUN_0041e820();
      local_94 = (float)((fVar20 * (float10)144.0 - (float10)72.0) + (float10)local_94);
      if (_DAT_0069d4b0 < 0x80) {
        FUN_0041f290();
      }
      else {
        FUN_0041f290();
      }
    }
    break;
  case 0x78:
    *(byte *)(param_1 + 0xe52) =
         *(byte *)(param_1 + 0xe52) & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x79:
    (*(code *)(&PTR_FUN_00476220)[local_20[3]])();
    break;
  case 0x7a:
    if (local_20[3] < 0) {
      *(undefined4 *)(param_1 + 0x9a0) = 0;
    }
    else {
      *(undefined **)(param_1 + 0x9a0) = (&PTR_FUN_00476220)[local_20[3]];
    }
    break;
  case 0x7b:
    FUN_0040afb0();
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
    *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(local_20 + 3);
    break;
  case 0x81:
    *(undefined2 *)(param_1 + 0x19a + *local_1c * 0x110) = *(undefined2 *)(local_20 + 4);
    break;
  case 0x82:
    *(byte *)(param_1 + 0xe52) =
         *(byte *)(param_1 + 0xe52) & 0xfb | (*(byte *)(local_20 + 3) & 1) << 2;
    break;
  case 0x83:
    *(int *)(param_1 + 0xcd4) = *local_1c;
    *(int *)(param_1 + 0xcd8) = local_20[4];
    *(undefined2 *)(param_1 + 0xcdc) = *(undefined2 *)(local_20 + 5);
    *(undefined2 *)(param_1 + 0xcde) = *(undefined2 *)(local_20 + 6);
    *(undefined2 *)(param_1 + 0xce0) = *(undefined2 *)(local_20 + 7);
    *(undefined2 *)(param_1 + 0xce2) = *(undefined2 *)(local_20 + 8);
    break;
  case 0x84:
    *(byte *)(param_1 + 0xe52) =
         *(byte *)(param_1 + 0xe52) & 0xf7 | (*(byte *)(local_20 + 3) & 1) << 3;
    break;
  case 0x85:
    *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(param_1 + 0xc44);
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    *(undefined4 *)(param_1 + 0xcf4) = 0;
    *(undefined4 *)(param_1 + 0xcf0) = 0xfffffc19;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      *(undefined4 *)(param_1 + 0xdb8 + local_68 * 4) = 0;
    }
    break;
  case 0x87:
    *(byte *)(param_1 + 0xe52) =
         *(byte *)(param_1 + 0xe52) & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
  }
switchD_00407544_caseD_7f:
  local_20 = (int *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  goto LAB_004074ce;
switchD_00407544_caseD_24:
  if ((*(byte *)(param_1 + 0xe52) >> 2 & 1) != 0) {
    DebugPrint2("error : no Stack Ret\n");
  }
  *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + -1;
  puVar13 = (undefined4 *)(param_1 + 0x9dc + *(int *)(param_1 + 0xc3c) * 0x4c);
  puVar17 = (undefined4 *)(param_1 + 0x990);
  for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar17 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar17 = puVar17 + 1;
  }
  goto LAB_004074b1;
switchD_00407544_caseD_23:
  local_14 = local_20[3];
  *(int *)(param_1 + 0x990) = (int)local_20 + (int)*(short *)((int)local_20 + 6);
  if ((*(byte *)(param_1 + 0xe52) >> 2 & 1) == 0) {
    puVar13 = (undefined4 *)(param_1 + 0x990);
    puVar17 = (undefined4 *)(param_1 + 0x9dc + *(int *)(param_1 + 0xc3c) * 0x4c);
    for (iVar15 = 0x13; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar17 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  FUN_00407440(param_1 + 0x990,local_14 & 0xffff);
  if (((*(byte *)(param_1 + 0xe52) >> 2 & 1) == 0) && (*(int *)(param_1 + 0xc3c) < 7)) {
    *(int *)(param_1 + 0xc3c) = *(int *)(param_1 + 0xc3c) + 1;
  }
  *(int *)(param_1 + 0x9a4) = local_20[4];
  *(int *)(param_1 + 0x9b4) = local_20[5];
  goto LAB_004074b1;
}

