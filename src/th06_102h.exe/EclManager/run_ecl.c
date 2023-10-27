
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 EclManager::run_ecl(AnmVm *param_1)

{
  float fVar1;
  float fVar2;
  AnmLoadedSprite *pAVar3;
  float fVar4;
  short sVar5;
  ushort uVar6;
  D3DCOLOR DVar7;
  char cVar8;
  AnmManager *pAVar9;
  uint *puVar10;
  AnmLoadedSprite **ppAVar11;
  int *piVar12;
  D3DCOLOR *pDVar13;
  uint uVar14;
  AnmRawInstr **ppAVar15;
  AnmVm *pAVar16;
  float *pfVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  float10 fVar22;
  float10 fVar23;
  float fVar24;
  float fVar25;
  int local_2dc;
  byte *local_2cc;
  byte *local_2c0;
  float *local_2bc;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  uint local_2a0;
  float local_29c;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  float local_184;
  short local_144;
  short local_13c;
  float local_bc;
  int local_b8;
  undefined *local_b4;
  float local_b0 [4];
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  AnmRawInstr *local_98;
  AnmLoadedSprite *local_94;
  D3DCOLOR local_90;
  int local_8c;
  int local_88;
  int local_84;
  Catk *local_80;
  int local_7c;
  uint csum;
  uint local_74;
  Catk *local_70;
  float *local_6c;
  int local_68;
  float *local_64;
  AnmTimer *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
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
  float *local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
LAB_004074b1:
  while (local_20 = (float *)param_1[9].rotation.x, -1 < (int)param_1[0xb].beginingOfScript) {
LAB_0040954d:
    param_1[9].rotation.x = (float)((int)local_20 + (int)*(short *)((int)local_20 + 6));
    if ((*(byte *)((int)&param_1[0xd].flags + 2) >> 2 & 1) == 0) {
      pAVar16 = param_1 + 9;
      pfVar17 = (float *)((int)&param_1[9].matrix +
                         *(int *)&param_1[0xb].posInterpEndTime * 0x4c + 0x10);
      for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pfVar17 = (pAVar16->rotation).x;
        pAVar16 = (AnmVm *)&(pAVar16->rotation).y;
        pfVar17 = pfVar17 + 1;
      }
    }
    FUN_00407440(param_1 + 9,
                 *(undefined2 *)
                  ((int)(&param_1[0xb].matrix + 1) +
                  (undefined *)((int)(param_1[0xb].beginingOfScript)->args + 3) * 4));
    if (*(int *)&param_1[0xb].posInterpEndTime < 7) {
      *(int *)&param_1[0xb].posInterpEndTime = *(int *)&param_1[0xb].posInterpEndTime + 1;
    }
    param_1[0xb].beginingOfScript = (AnmRawInstr *)0xffffffff;
  }
LAB_004074ce:
  pAVar9 = g_AnmManager;
  if (param_1[9].angleVel.x != *local_20) {
    bVar18 = *(byte *)&param_1[0xd].flags & 3;
    if (bVar18 == 1) {
      fVar23 = (float10)FUN_0041e850(param_1[0xb].posInterpFinal.z);
      param_1[0xb].posInterpFinal.z = (float)fVar23;
      param_1[0xb].pos2.y = g_GameContext.field81_0x1a8 * param_1[0xb].pos2.z + param_1[0xb].pos2.y;
      fVar25 = param_1[0xb].pos2.y;
      fVar22 = (float10)param_1[0xb].posInterpFinal.z;
      fVar23 = (float10)fcos(fVar22);
      fVar22 = (float10)fsin(fVar22);
      param_1[0xb].posInterpInitial.z = (float)(fVar23 * (float10)fVar25);
      param_1[0xb].posInterpFinal.x = (float)(fVar22 * (float10)fVar25);
      param_1[0xb].posInterpFinal.y = 0.0;
    }
    else if (bVar18 == 2) {
      FUN_004241e5();
      local_bc = ((float)(int)param_1[0xc].angleVel.x + param_1[0xc].rotation.z) /
                 (float)(int)param_1[0xc].angleVel.y;
      if (1.0 <= local_bc) {
        local_bc = 1.0;
      }
      switch(*(byte *)&param_1[0xd].flags >> 2 & 7) {
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
      fVar25 = param_1[0xb].alphaInterpTime.subFrame;
      fVar24 = (float)param_1[0xb].alphaInterpTime.previous;
      fVar4 = param_1[0xc].rotation.x;
      fVar1 = *(float *)&param_1[0xb].fontWidth;
      fVar2 = (float)param_1[0xb].alphaInterpInitial;
      pAVar3 = param_1[0xb].sprite;
      param_1[0xb].posInterpInitial.z =
           (local_bc * (float)param_1[0xb].timeOfLastSpriteSet +
           (float)param_1[0xb].alphaInterpTime.current) - (float)param_1[0xb].currentInstruction;
      param_1[0xb].posInterpFinal.x = (local_bc * fVar24 + fVar1) - (float)pAVar3;
      param_1[0xb].posInterpFinal.y = (local_bc * fVar25 + fVar4) - fVar2;
      fVar23 = (float10)FUN_0045be40((double)param_1[0xb].posInterpFinal.x,
                                     (double)param_1[0xb].posInterpInitial.z);
      param_1[0xb].posInterpFinal.z = (float)fVar23;
      if ((int)param_1[0xc].angleVel.x < 1) {
        *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc;
        fVar25 = param_1[0xc].rotation.x;
        fVar24 = param_1[0xb].alphaInterpTime.subFrame;
        fVar4 = (float)param_1[0xb].alphaInterpTime.previous;
        param_1[0xb].currentInstruction =
             (AnmRawInstr *)
             ((float)param_1[0xb].alphaInterpTime.current + (float)param_1[0xb].timeOfLastSpriteSet)
        ;
        param_1[0xb].sprite = (AnmLoadedSprite *)(*(float *)&param_1[0xb].fontWidth + fVar4);
        param_1[0xb].alphaInterpInitial = (D3DCOLOR)(fVar25 + fVar24);
        param_1[0xb].posInterpInitial.z = 0.0;
        param_1[0xb].posInterpFinal.x = 0.0;
        param_1[0xb].posInterpFinal.y = 0.0;
      }
    }
    if (0 < (int)param_1[0xc].scaleInterpFinalX) {
      if (0 < (int)param_1[0xc].pos.y) {
        param_1[0xc].pos.z = param_1[0xc].scaleInterpInitialX;
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)&param_1[0xc].scaleInterpInitialX,
                   &param_1[0xc].scaleInterpInitialY);
        if ((int)param_1[0xc].pos.y <= (int)param_1[0xc].scaleInterpInitialX) {
          fVar25 = (float)param_1[0xb].alphaInterpInitial;
          fVar24 = (float)param_1[0xb].posInterpTime.current;
          pAVar3 = param_1[0xb].sprite;
          fVar4 = param_1[0xb].posInterpTime.subFrame;
          param_1[0xc].matrix.m[0][2] =
               (float)param_1[0xb].currentInstruction + (float)param_1[0xb].posInterpTime.previous;
          param_1[0xc].matrix.m[0][3] = (float)pAVar3 + fVar4;
          param_1[0xc].matrix.m[1][0] = fVar25 + fVar24;
          FUN_004145c0((int)(param_1[0xc].matrix.m[0] + 1));
          param_1[0xc].scaleInterpInitialX = 0.0;
          param_1[0xc].scaleInterpInitialY = 0.0;
          param_1[0xc].pos.z = -NAN;
        }
      }
      pAVar9 = g_AnmManager;
      if (-1 < param_1[0xd].pendingInterrupt) {
        cVar8 = '\0';
        fVar25 = param_1[0xb].posInterpInitial.z;
        if (fVar25 < 0.0 == NAN(fVar25)) {
          if (0.0 < param_1[0xb].posInterpInitial.z) {
            cVar8 = '\x02';
          }
        }
        else {
          cVar8 = '\x01';
        }
        if (*(char *)((int)&param_1[0xd].flags + 3) != cVar8) {
          if (cVar8 == '\0') {
            if (*(char *)((int)&param_1[0xd].flags + 3) == -1) {
              uVar6 = param_1[0xd].alphaInterpEndTime;
              local_268 = uVar6 + 0x100;
              param_1->anmFileIndex = local_268;
              AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[(short)uVar6 + 0x100]);
            }
            else if (*(char *)((int)&param_1[0xd].flags + 3) == '\x01') {
              uVar6 = param_1[0xd].scaleInterpEndTime;
              local_270 = uVar6 + 0x100;
              param_1->anmFileIndex = local_270;
              AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[(short)uVar6 + 0x100]);
            }
            else {
              uVar6 = param_1[0xd].autoRotate;
              local_278 = uVar6 + 0x100;
              param_1->anmFileIndex = local_278;
              AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[(short)uVar6 + 0x100]);
            }
          }
          else if (cVar8 == '\x01') {
            sVar5 = param_1[0xd].pendingInterrupt;
            local_280 = sVar5 + 0x100;
            param_1->anmFileIndex = local_280;
            AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[sVar5 + 0x100]);
          }
          else if (cVar8 == '\x02') {
            uVar6 = param_1[0xd].posInterpEndTime;
            local_288 = uVar6 + 0x100;
            param_1->anmFileIndex = local_288;
            AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[(short)uVar6 + 0x100]);
          }
          *(char *)((int)&param_1[0xd].flags + 3) = cVar8;
        }
      }
      if (param_1[9].angleVel.y != 0.0) {
        (*(code *)param_1[9].angleVel.y)(param_1);
      }
    }
    param_1[9].rotation.x = (float)local_20;
    param_1[9].rotation.y = param_1[9].angleVel.x;
    GameContext::FUN_00424285(&g_GameContext,(int *)&param_1[9].angleVel,&param_1[9].rotation.z);
    return 0;
  }
  if (((uint)*(byte *)((int)local_20 + 9) & 1 << ((byte)g_GameManager.difficulty & 0x1f)) == 0)
  goto switchD_00407544_caseD_7f;
  local_1c = local_20 + 3;
  switch(*(undefined2 *)(local_20 + 1)) {
  case 1:
    return 0xffffffff;
  case 2:
    goto switchD_00407544_caseD_2;
  case 3:
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_20 + 5),(undefined4 *)0x0);
    local_14 = (float)(*piVar12 - 1);
    FUN_0040b3c0((int)param_1,local_1c[2],(int *)&local_14);
    fVar25 = local_14;
    goto joined_r0x00407ab4;
  case 4:
  case 5:
    FUN_0040b3c0((int)param_1,local_20[3],(int *)(local_20 + 4));
    break;
  case 6:
    puVar10 = (uint *)FUN_0040afb0((int)param_1,(int *)(local_20 + 4),(undefined4 *)0x0);
    local_24 = *puVar10;
    if (local_24 == 0) {
      local_29c = 0.0;
    }
    else {
      uVar14 = FUN_0041e7f0(&DAT_0069d8f8);
      local_29c = (float)(uVar14 % local_24);
    }
    local_14 = local_29c;
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&local_14);
    break;
  case 7:
    puVar10 = (uint *)FUN_0040afb0((int)param_1,(int *)(local_20 + 4),(undefined4 *)0x0);
    local_28 = *puVar10;
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_1c + 2),(undefined4 *)0x0);
    local_2c = *piVar12;
    if (local_28 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = FUN_0041e7f0(&DAT_0069d8f8);
      local_2a0 = local_2a0 % local_28;
    }
    local_14 = (float)(local_2a0 + local_2c);
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&local_14);
    break;
  case 8:
    pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_30 = *pfVar17;
    local_18 = FUN_0041e820(&DAT_0069d8f8);
    local_18 = local_18 * local_30;
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&local_18);
    break;
  case 9:
    pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_34 = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 2,(undefined4 *)0x0);
    local_38 = *pfVar17;
    fVar25 = FUN_0041e820(&DAT_0069d8f8);
    local_18 = fVar25 * local_34 + local_38;
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&local_18);
    break;
  case 10:
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&param_1[0xb].currentInstruction);
    break;
  case 0xb:
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&param_1[0xb].sprite);
    break;
  case 0xc:
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&param_1[0xb].alphaInterpInitial);
    break;
  case 0xd:
  case 0x14:
    FUN_0040b420(param_1);
    break;
  case 0xe:
  case 0x15:
    FUN_0040b4d0(param_1);
    break;
  case 0xf:
  case 0x16:
    FUN_0040b580(param_1);
    break;
  case 0x10:
  case 0x17:
    FUN_0040b650(param_1);
    break;
  case 0x11:
  case 0x18:
    FUN_0040b700(param_1);
    break;
  case 0x12:
    local_3c = FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    *local_3c = *local_3c + 1;
    break;
  case 0x13:
    local_40 = FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    *local_40 = *local_40 + -1;
    break;
  case 0x19:
    FUN_0040b7d0(param_1,local_20[3],local_20 + 4);
    break;
  case 0x1a:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    local_18 = *pfVar17;
    fVar23 = (float10)FUN_0041e850(local_18);
    local_18 = (float)fVar23;
    FUN_0040b3c0((int)param_1,local_20[3],(int *)&local_18);
    break;
  case 0x1b:
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    local_48 = *piVar12;
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_20 + 4),(undefined4 *)0x0);
    local_44 = *piVar12;
    if (local_48 == local_44) {
      local_2a4 = 0.0;
    }
    else {
      local_2a4 = (float)((uint)(local_44 <= local_48) * 2 + -1);
    }
    param_1[9].matrix.m[0][2] = local_2a4;
    break;
  case 0x1c:
    pfVar17 = FUN_0040b380((int)param_1,local_20 + 3,(undefined4 *)0x0);
    local_4c = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
    local_50 = *pfVar17;
    if ((NAN(local_4c) || NAN(local_50)) == (local_4c == local_50)) {
      if (local_4c < local_50 == (NAN(local_4c) || NAN(local_50))) {
        local_2ac = 1.401298e-45;
      }
      else {
        local_2ac = -NAN;
      }
      local_2a8 = local_2ac;
    }
    else {
      local_2a8 = 0.0;
    }
    param_1[9].matrix.m[0][2] = local_2a8;
    break;
  case 0x1d:
    if (-1 < (int)param_1[9].matrix.m[0][2]) break;
    goto switchD_00407544_caseD_2;
  case 0x1e:
    if (0 < (int)param_1[9].matrix.m[0][2]) break;
    goto switchD_00407544_caseD_2;
  case 0x1f:
    if (param_1[9].matrix.m[0][2] != 0.0) break;
    goto switchD_00407544_caseD_2;
  case 0x20:
    fVar25 = param_1[9].matrix.m[0][2];
joined_r0x00407ab4:
    if ((int)fVar25 < 1) break;
    goto switchD_00407544_caseD_2;
  case 0x21:
    if ((int)param_1[9].matrix.m[0][2] < 0) break;
    goto switchD_00407544_caseD_2;
  case 0x22:
    if (param_1[9].matrix.m[0][2] == 0.0) break;
switchD_00407544_caseD_2:
    param_1[9].angleVel.x = local_20[3];
    local_20 = (float *)((int)local_20 + (int)local_1c[1]);
    goto LAB_004074ce;
  case 0x23:
    goto switchD_00407544_caseD_23;
  case 0x24:
    goto switchD_00407544_caseD_24;
  case 0x25:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_14 < (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x26:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_14 <= (int)local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x27:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if (local_14 == local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x28:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_1c[4] < (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x29:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if ((int)local_1c[4] <= (int)local_14) goto switchD_00407544_caseD_23;
    break;
  case 0x2a:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 6),(undefined4 *)0x0);
    local_14 = *pfVar17;
    if (local_14 != local_1c[4]) goto switchD_00407544_caseD_23;
    break;
  case 0x2b:
    param_1[0xb].currentInstruction = (AnmRawInstr *)local_20[3];
    param_1[0xb].sprite = (AnmLoadedSprite *)local_20[4];
    param_1[0xb].alphaInterpInitial = (D3DCOLOR)local_20[5];
    ppAVar15 = (AnmRawInstr **)
               FUN_0040b380((int)param_1,(float *)&param_1[0xb].currentInstruction,(undefined4 *)0x0
                           );
    param_1[0xb].currentInstruction = *ppAVar15;
    ppAVar11 = (AnmLoadedSprite **)
               FUN_0040b380((int)param_1,(float *)&param_1[0xb].sprite,(undefined4 *)0x0);
    param_1[0xb].sprite = *ppAVar11;
    pfVar17 = FUN_0040b380((int)param_1,(float *)&param_1[0xb].alphaInterpInitial,(undefined4 *)0x0)
    ;
    param_1[0xb].alphaInterpInitial = (D3DCOLOR)*pfVar17;
    FUN_00412240();
    break;
  case 0x2c:
    param_1[0xb].posInterpInitial.z = local_20[3];
    param_1[0xb].posInterpFinal.x = local_20[4];
    param_1[0xb].posInterpFinal.y = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&param_1[0xb].posInterpInitial.z,(undefined4 *)0x0);
    param_1[0xb].posInterpInitial.z = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&param_1[0xb].posInterpFinal.x,(undefined4 *)0x0);
    param_1[0xb].posInterpFinal.x = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&param_1[0xb].posInterpFinal.y,(undefined4 *)0x0);
    param_1[0xb].posInterpFinal.y = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc;
    break;
  case 0x2d:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0xb].posInterpFinal.z = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,&local_c,(undefined4 *)0x0);
    param_1[0xb].pos2.y = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc | 1;
    break;
  case 0x2e:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0xb].pos2.x = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc | 1;
    break;
  case 0x2f:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0xb].pos2.y = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc | 1;
    break;
  case 0x30:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    pfVar17 = FUN_0040b380((int)param_1,&local_10,(undefined4 *)0x0);
    param_1[0xb].pos2.z = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc | 1;
    break;
  case 0x31:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    fVar25 = local_c - local_10;
    fVar24 = FUN_0041e820(&DAT_0069d8f8);
    param_1[0xb].posInterpFinal.z = fVar24 * fVar25 + local_10;
    break;
  case 0x32:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    fVar25 = local_c - local_10;
    fVar24 = FUN_0041e820(&DAT_0069d8f8);
    param_1[0xb].posInterpFinal.z = fVar24 * fVar25 + local_10;
    if ((float)param_1[0xb].currentInstruction < param_1[0xd].pos.x + 96.0) {
      if (param_1[0xb].posInterpFinal.z <= 1.570796) {
        fVar25 = param_1[0xb].posInterpFinal.z;
        if (fVar25 < -1.570796 != NAN(fVar25)) {
          param_1[0xb].posInterpFinal.z = -3.141593 - param_1[0xb].posInterpFinal.z;
        }
      }
      else {
        param_1[0xb].posInterpFinal.z = 3.141593 - param_1[0xb].posInterpFinal.z;
      }
    }
    fVar25 = param_1[0xd].pos.z - 96.0;
    if (fVar25 < (float)param_1[0xb].currentInstruction !=
        (NAN(fVar25) || NAN((float)param_1[0xb].currentInstruction))) {
      fVar25 = param_1[0xb].posInterpFinal.z;
      if ((fVar25 < 1.570796 == NAN(fVar25)) || (param_1[0xb].posInterpFinal.z < 0.0)) {
        if ((-1.570796 < param_1[0xb].posInterpFinal.z) &&
           (fVar25 = param_1[0xb].posInterpFinal.z, fVar25 < 0.0 != (fVar25 == 0.0))) {
          param_1[0xb].posInterpFinal.z = -3.141593 - param_1[0xb].posInterpFinal.z;
        }
      }
      else {
        param_1[0xb].posInterpFinal.z = 3.141593 - param_1[0xb].posInterpFinal.z;
      }
    }
    if (((float)param_1[0xb].sprite < param_1[0xd].pos.y + 48.0) &&
       (fVar25 = param_1[0xb].posInterpFinal.z, fVar25 < 0.0 != NAN(fVar25))) {
      param_1[0xb].posInterpFinal.z = -param_1[0xb].posInterpFinal.z;
    }
    fVar25 = param_1[0xd].scaleInterpInitialY - 48.0;
    if ((fVar25 < (float)param_1[0xb].sprite != (NAN(fVar25) || NAN((float)param_1[0xb].sprite))) &&
       (0.0 < param_1[0xb].posInterpFinal.z)) {
      param_1[0xb].posInterpFinal.z = -param_1[0xb].posInterpFinal.z;
    }
    break;
  case 0x33:
    local_10 = local_20[3];
    local_c = local_20[4];
    local_8 = local_20[5];
    fVar23 = Player::FUN_00428700(&g_Player,(float *)&param_1[0xb].currentInstruction);
    param_1[0xb].posInterpFinal.z = (float)(fVar23 + (float10)local_10);
    pfVar17 = FUN_0040b380((int)param_1,&local_c,(undefined4 *)0x0);
    param_1[0xb].pos2.y = *pfVar17;
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xfc | 1;
    break;
  case 0x34:
    FUN_0040abe0();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 4;
    break;
  case 0x35:
    FUN_0040abe0();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 8;
    break;
  case 0x36:
    FUN_0040abe0();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0xc;
    break;
  case 0x37:
    FUN_0040abe0();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0x10;
    break;
  case 0x38:
    FUN_0040ad10();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3;
    break;
  case 0x39:
    FUN_0040ad10();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 4;
    break;
  case 0x3a:
    FUN_0040ad10();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 8;
    break;
  case 0x3b:
    FUN_0040ad10();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0xc;
    break;
  case 0x3c:
    FUN_0040ad10();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0x10;
    break;
  case 0x3d:
    FUN_0040ae80();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 4;
    break;
  case 0x3e:
    FUN_0040ae80();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 8;
    break;
  case 0x3f:
    FUN_0040ae80();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0xc;
    break;
  case 0x40:
    FUN_0040ae80();
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xe3 | 0x10;
    break;
  case 0x41:
    param_1[0xd].pos.x = local_20[3];
    param_1[0xd].pos.y = local_20[4];
    param_1[0xd].pos.z = local_20[5];
    param_1[0xd].scaleInterpInitialY = local_20[6];
    *(byte *)((int)&param_1[0xd].flags + 2) = *(byte *)((int)&param_1[0xd].flags + 2) | 1;
    break;
  case 0x42:
    *(byte *)((int)&param_1[0xd].flags + 2) = *(byte *)((int)&param_1[0xd].flags + 2) & 0xfe;
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
    local_58 = param_1[0xc].matrix.m[0] + 1;
    *(undefined2 *)local_58 = *(undefined2 *)local_54;
    param_1[0xc].autoRotate = *(short *)(local_20 + 1) - 0x43;
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_20 + 4),(undefined4 *)0x0);
    *(undefined2 *)(local_58 + 0x11) = *(undefined2 *)piVar12;
    iVar19 = ((int)*(short *)((int)&param_1[0xc].scaleX + 2) - (int)*(short *)&param_1[0xc].scaleX)
             * g_GameManager.rank;
    *(short *)(local_58 + 0x11) =
         (short)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) +
         *(short *)(local_58 + 0x11) + *(short *)&param_1[0xc].scaleX;
    if (*(short *)(local_58 + 0x11) < 1) {
      *(undefined2 *)(local_58 + 0x11) = 1;
    }
    piVar12 = FUN_0040afb0((int)param_1,(int *)(local_54 + 2),(undefined4 *)0x0);
    *(undefined2 *)((int)local_58 + 0x46) = *(undefined2 *)piVar12;
    iVar19 = ((int)*(short *)((int)&param_1[0xc].scaleInterpFinalY + 2) -
             (int)*(short *)&param_1[0xc].scaleInterpFinalY) * g_GameManager.rank;
    *(short *)((int)local_58 + 0x46) =
         (short)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) +
         *(short *)((int)local_58 + 0x46) + *(short *)&param_1[0xc].scaleInterpFinalY;
    if (*(short *)((int)local_58 + 0x46) < 1) {
      *(undefined2 *)((int)local_58 + 0x46) = 1;
    }
    fVar25 = (float)param_1[0xb].alphaInterpInitial;
    fVar24 = (float)param_1[0xb].posInterpTime.current;
    pAVar3 = param_1[0xb].sprite;
    fVar4 = param_1[0xb].posInterpTime.subFrame;
    local_58[1] = (float)param_1[0xb].currentInstruction +
                  (float)param_1[0xb].posInterpTime.previous;
    local_58[2] = (float)pAVar3 + fVar4;
    local_58[3] = fVar25 + fVar24;
    pfVar17 = FUN_0040b380((int)param_1,local_54 + 5,(undefined4 *)0x0);
    local_58[4] = *pfVar17;
    fVar23 = (float10)FUN_0041e850(local_58[4]);
    local_58[4] = (float)fVar23;
    pfVar17 = FUN_0040b380((int)param_1,local_54 + 3,(undefined4 *)0x0);
    local_58[6] = *pfVar17;
    if ((NAN(local_58[6]) == (local_58[6] == 0.0)) &&
       (fVar25 = param_1[0xc].angleVel.z,
       local_58[6] = ((param_1[0xc].scaleY - fVar25) * (float)g_GameManager.rank) / 32.0 + fVar25 +
                     local_58[6], local_58[6] < 0.3 != NAN(local_58[6]))) {
      local_58[6] = 0.3;
    }
    pfVar17 = FUN_0040b380((int)param_1,local_54 + 6,(undefined4 *)0x0);
    local_58[5] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_54 + 4,(undefined4 *)0x0);
    local_58[7] = *pfVar17;
    fVar25 = param_1[0xc].angleVel.z;
    local_58[7] = (((param_1[0xc].scaleY - fVar25) * (float)g_GameManager.rank) / 32.0 + fVar25) /
                  2.0 + local_58[7];
    if (local_58[7] < 0.3 != NAN(local_58[7])) {
      local_58[7] = 0.3;
    }
    *(undefined2 *)((int)local_58 + 0x4a) = 0;
    local_58[0x13] = local_54[7];
    local_14 = (float)(int)*(short *)((int)local_54 + 2);
    piVar12 = FUN_0040afb0((int)param_1,(int *)&local_14,(undefined4 *)0x0);
    *(undefined2 *)((int)local_58 + 2) = *(undefined2 *)piVar12;
    if ((*(byte *)&param_1[0xd].flags >> 5 & 1) == 0) {
      FUN_004145c0((int)local_58);
    }
    break;
  case 0x4c:
    param_1[0xc].pos.y = local_20[3];
    iVar19 = (int)param_1[0xc].pos.y / 5;
    iVar20 = (-(int)param_1[0xc].pos.y / 5 - iVar19) * g_GameManager.rank;
    param_1[0xc].pos.y =
         (float)(((int)(iVar20 + (iVar20 >> 0x1f & 0x1fU)) >> 5) + iVar19 + (int)param_1[0xc].pos.y)
    ;
    param_1[0xc].scaleInterpInitialX = 0.0;
    param_1[0xc].scaleInterpInitialY = 0.0;
    param_1[0xc].pos.z = -NAN;
    break;
  case 0x4d:
    param_1[0xc].pos.y = local_20[3];
    iVar19 = (int)param_1[0xc].pos.y / 5;
    iVar20 = (-(int)param_1[0xc].pos.y / 5 - iVar19) * g_GameManager.rank;
    param_1[0xc].pos.y =
         (float)(((int)(iVar20 + (iVar20 >> 0x1f & 0x1fU)) >> 5) + iVar19 + (int)param_1[0xc].pos.y)
    ;
    if (param_1[0xc].pos.y != 0.0) {
      local_184 = param_1[0xc].pos.y;
      if (local_184 == 0.0) {
        local_184 = 0.0;
      }
      else {
        uVar14 = FUN_0041e7f0(&DAT_0069d8f8);
        local_184 = (float)(uVar14 % (uint)local_184);
      }
      param_1[0xc].scaleInterpInitialX = local_184;
      param_1[0xc].scaleInterpInitialY = 0.0;
      param_1[0xc].pos.z = -NAN;
    }
    break;
  case 0x4e:
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags | 0x20;
    break;
  case 0x4f:
    *(byte *)&param_1[0xd].flags = *(byte *)&param_1[0xd].flags & 0xdf;
    break;
  case 0x50:
    fVar25 = (float)param_1[0xb].alphaInterpInitial;
    fVar24 = (float)param_1[0xb].posInterpTime.current;
    pAVar3 = param_1[0xb].sprite;
    fVar4 = param_1[0xb].posInterpTime.subFrame;
    param_1[0xc].matrix.m[0][2] =
         (float)param_1[0xb].currentInstruction + (float)param_1[0xb].posInterpTime.previous;
    param_1[0xc].matrix.m[0][3] = (float)pAVar3 + fVar4;
    param_1[0xc].matrix.m[1][0] = fVar25 + fVar24;
    FUN_004145c0((int)(param_1[0xc].matrix.m[0] + 1));
    break;
  case 0x51:
    pfVar17 = FUN_0040b380((int)param_1,local_1c,(undefined4 *)0x0);
    param_1[0xb].posInterpTime.previous = (int)*pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 1,(undefined4 *)0x0);
    param_1[0xb].posInterpTime.subFrame = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 2,(undefined4 *)0x0);
    param_1[0xb].posInterpTime.current = (int)*pfVar17;
    break;
  case 0x52:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)local_1c,(undefined4 *)0x0);
    param_1[0xc].matrix.m[3][1] = *pfVar17;
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_1c + 1),(undefined4 *)0x0);
    param_1[0xc].matrix.m[3][2] = *pfVar17;
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_1c + 2),(undefined4 *)0x0);
    param_1[0xc].matrix.m[3][3] = *pfVar17;
    pDVar13 = (D3DCOLOR *)FUN_0040afb0((int)param_1,(int *)(local_1c + 3),(undefined4 *)0x0);
    param_1[0xc].color = *pDVar13;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 4,(undefined4 *)0x0);
    param_1[0xc].matrix.m[2][1] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 5,(undefined4 *)0x0);
    param_1[0xc].matrix.m[2][2] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 6,(undefined4 *)0x0);
    param_1[0xc].matrix.m[2][3] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_1c + 7,(undefined4 *)0x0);
    param_1[0xc].matrix.m[3][0] = *pfVar17;
    break;
  case 0x53:
    FUN_00414340(0x5a5ff8);
    break;
  case 0x54:
    if ((int)local_20[3] < 0) {
      *(uint *)&param_1[0xc].posInterpEndTime = *(uint *)&param_1[0xc].posInterpEndTime & 0xfffffdff
      ;
    }
    else {
      param_1[0xc].pos.x = local_20[3];
      *(uint *)&param_1[0xc].posInterpEndTime = *(uint *)&param_1[0xc].posInterpEndTime | 0x200;
    }
    break;
  case 0x55:
  case 0x56:
    local_64 = local_20 + 3;
    local_60 = &param_1[0xc].scaleInterpTime;
    fVar25 = (float)param_1[0xb].alphaInterpInitial;
    fVar24 = (float)param_1[0xb].posInterpTime.current;
    pAVar3 = param_1[0xb].sprite;
    fVar4 = param_1[0xb].posInterpTime.subFrame;
    param_1[0xc].scaleInterpTime.subFrame =
         (float)param_1[0xb].currentInstruction + (float)param_1[0xb].posInterpTime.previous;
    param_1[0xc].scaleInterpTime.current = (int)((float)pAVar3 + fVar4);
    *(float *)&param_1[0xc].spriteNumber = fVar25 + fVar24;
    *(undefined2 *)&local_60->previous = *(undefined2 *)local_64;
    *(undefined2 *)((int)&param_1[0xc].scaleInterpTime.previous + 2) =
         *(undefined2 *)((int)local_20 + 0xe);
    pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
    *(float *)((int)(local_60 + 1) + 4) = *pfVar17;
    ppAVar15 = (AnmRawInstr **)FUN_0040b380((int)param_1,local_64 + 2,(undefined4 *)0x0);
    *(AnmRawInstr **)(local_60 + 2) = *ppAVar15;
    pfVar17 = FUN_0040b380((int)param_1,local_64 + 3,(undefined4 *)0x0);
    *(float *)((int)(local_60 + 2) + 8) = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_64 + 4,(undefined4 *)0x0);
    *(float *)(local_60 + 3) = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_64 + 5,(undefined4 *)0x0);
    ((D3DXVECTOR3 *)((int)(local_60 + 3) + 4))->x = *pfVar17;
    *(float *)((int)(local_60 + 3) + 8) = local_64[6];
    *(float *)(local_60 + 4) = local_64[7];
    *(float *)((int)(local_60 + 4) + 4) = local_64[8];
    *(float *)((int)(local_60 + 4) + 8) = local_64[9];
    *(float *)(local_60 + 5) = local_64[10];
    *(float *)((int)(local_60 + 5) + 4) = local_64[0xb];
    *(float *)((int)(local_60 + 6) + 4) = local_64[0xc];
    if (*(short *)(local_20 + 1) == 0x56) {
      *(undefined2 *)(local_60 + 6) = 0;
    }
    else {
      *(undefined2 *)(local_60 + 6) = 1;
    }
    iVar19 = FUN_00414670();
    (&param_1[0xc].posInterpTime.current)[(int)param_1[0xd].matrix.m[2][3]] = iVar19;
    break;
  case 0x57:
    pfVar17 = (float *)FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    param_1[0xd].matrix.m[2][3] = *pfVar17;
    break;
  case 0x58:
    if ((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] != 0) {
      iVar19 = (&param_1[0xc].posInterpTime.current)[(int)local_20[3]];
      pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
      *(float *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 0x22c) =
           *(float *)(iVar19 + 0x22c) + *pfVar17;
    }
    break;
  case 0x59:
    if ((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] != 0) {
      fVar23 = Player::FUN_00428700
                         (&g_Player,
                          (float *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 0x220)
                         );
      pfVar17 = FUN_0040b380((int)param_1,local_20 + 4,(undefined4 *)0x0);
      *(float *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 0x22c) =
           (float)fVar23 + *pfVar17;
    }
    break;
  case 0x5a:
    if ((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] != 0) {
      fVar25 = (float)param_1[0xb].alphaInterpInitial;
      fVar24 = local_20[6];
      pAVar3 = param_1[0xb].sprite;
      fVar4 = local_20[5];
      iVar19 = (&param_1[0xc].posInterpTime.current)[(int)local_20[3]];
      *(float *)(iVar19 + 0x220) = (float)param_1[0xb].currentInstruction + local_20[4];
      *(float *)(iVar19 + 0x224) = (float)pAVar3 + fVar4;
      *(float *)(iVar19 + 0x228) = fVar25 + fVar24;
    }
    break;
  case 0x5b:
    if (((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] == 0) ||
       (*(int *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 600) == 0)) {
      param_1[9].matrix.m[0][2] = 1.401298e-45;
    }
    else {
      param_1[9].matrix.m[0][2] = 0.0;
    }
    break;
  case 0x5c:
    if ((((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] != 0) &&
        (*(int *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 600) != 0)) &&
       (*(byte *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 0x26c) < 2)) {
      *(undefined *)((&param_1[0xc].posInterpTime.current)[(int)local_20[3]] + 0x26c) = 2;
      iVar19 = (&param_1[0xc].posInterpTime.current)[(int)local_20[3]];
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
    DAT_005a5f94 = INT_ARRAY_00476120[DAT_005a5f98];
    FUN_00414340(0x5a5ff8);
    g_Stage.spellcardEclRelated0 = 1;
    g_Stage.spellcardEclRelated1 = 0;
    param_1[0xc].angleVel.z = -0.5;
    param_1[0xc].scaleY = 0.5;
    *(undefined2 *)&param_1[0xc].scaleX = 0;
    *(undefined2 *)((int)&param_1[0xc].scaleX + 2) = 0;
    *(undefined2 *)&param_1[0xc].scaleInterpFinalY = 0;
    *(undefined2 *)((int)&param_1[0xc].scaleInterpFinalY + 2) = 0;
    iVar19 = DAT_005a5f98;
    iVar20 = DAT_005a5f98 * 0x40;
    local_70 = g_GameManager.catk + DAT_005a5f98;
    csum = 0;
    if (g_GameManager.field6_0x18._4_4_ == 0) {
      local_2bc = local_20 + 4;
      local_2c0 = g_GameManager.catk[DAT_005a5f98].name;
      do {
        bVar18 = *(byte *)local_2bc;
        *local_2c0 = bVar18;
        local_2bc = (float *)((int)local_2bc + 1);
        local_2c0 = local_2c0 + 1;
      } while (bVar18 != 0);
      local_2cc = g_GameManager.catk[iVar19].name;
      do {
        bVar18 = *local_2cc;
        local_2cc = local_2cc + 1;
      } while (bVar18 != 0);
      for (local_74 = (int)local_2cc - (iVar20 + 0x69bce9); 0 < (int)local_74;
          local_74 = local_74 - 1) {
        csum = csum + (int)(char)local_70->name[local_74 - 1];
      }
      if ((uint)g_GameManager.catk[iVar19].name_csum != (csum & 0xff)) {
        g_GameManager.catk[iVar19].unk_3e = 0;
        g_GameManager.catk[iVar19].num_successes = 0;
        g_GameManager.catk[iVar19].name_csum = (byte)csum;
      }
      g_GameManager.catk[iVar19].unk_c = DAT_005a5f94;
      if ((ushort)g_GameManager.catk[iVar19].num_successes < 9999) {
        g_GameManager.catk[iVar19].num_successes = g_GameManager.catk[iVar19].num_successes + 1;
      }
    }
    break;
  case 0x5e:
    if (DAT_005a5f90 != 0) {
      FUN_0041732c();
      if ((DAT_005a5f90 == 1) && (local_7c = FUN_00414360(0x3200,1), _DAT_005a5f8c != 0)) {
        local_80 = g_GameManager.catk + DAT_005a5f98;
        if ((int)DAT_005a5f94 < 500000) {
          local_2dc = (int)DAT_005a5f94 / 10;
        }
        else {
          local_2dc = 50000;
        }
        local_88 = local_2dc;
        local_7c = DAT_005a5f94 + (int)(DAT_005a5f94 * DAT_0069bc48) / 10;
        FUN_00417458(&DAT_0069bc30,local_7c);
        g_GameManager.score = g_GameManager.score + local_7c;
        if (g_GameManager.field6_0x18._4_4_ == 0) {
          local_80->unk_3e = local_80->unk_3e + 1;
          for (local_84 = 4; 0 < local_84; local_84 = local_84 + -1) {
            local_80->name[local_84 + -5] = local_80->name[local_84 + -6];
          }
          local_80->unk_13 = g_GameManager.shottype + g_GameManager.character * '\x02';
        }
        g_GameManager.field6_0x18._16_4_ = g_GameManager.field6_0x18._16_4_ + 1;
      }
      DAT_005a5f90 = 0;
    }
    g_Stage.spellcardEclRelated0 = 0;
    break;
  case 0x5f:
    pfVar17 = local_20 + 3;
    pfVar21 = local_b0;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *pfVar21 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      pfVar21 = pfVar21 + 1;
    }
    pfVar17 = FUN_0040b380((int)param_1,local_b0 + 1,(undefined4 *)0x0);
    local_b0[1] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_b0 + 2,(undefined4 *)0x0);
    local_b0[2] = *pfVar17;
    pfVar17 = FUN_0040b380((int)param_1,local_b0 + 3,(undefined4 *)0x0);
    local_b0[3] = *pfVar17;
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
    fVar25 = local_20[3];
    local_13c = SUB42(fVar25,0) + 0x100;
    param_1->anmFileIndex = local_13c;
    AnmManager::SetAndExecuteScript(pAVar9,param_1,pAVar9->scripts[(int)fVar25 + 0x100]);
    break;
  case 0x62:
    param_1[0xd].alphaInterpEndTime = *(ushort *)(local_20 + 3);
    param_1[0xd].scaleInterpEndTime = *(ushort *)((int)local_20 + 0xe);
    param_1[0xd].autoRotate = *(ushort *)(local_20 + 4);
    param_1[0xd].pendingInterrupt = *(short *)((int)local_20 + 0x12);
    param_1[0xd].posInterpEndTime = *(ushort *)(local_20 + 5);
    *(undefined *)((int)&param_1[0xd].flags + 3) = 0xff;
    break;
  case 99:
    if (7 < (int)local_20[3]) {
      DebugPrint2("error : sub anim overflow\n");
    }
    pAVar9 = g_AnmManager;
    fVar25 = local_1c[1];
    local_144 = SUB42(fVar25,0) + 0x100;
    fVar24 = local_20[3];
    param_1[(int)fVar24 + 1].anmFileIndex = local_144;
    AnmManager::SetAndExecuteScript
              (pAVar9,param_1 + (int)fVar24 + 1,pAVar9->scripts[(int)fVar25 + 0x100]);
    break;
  case 100:
    local_5c = local_20 + 3;
    *(undefined *)param_1[0xd].matrix.m[3] = *(undefined *)local_5c;
    *(undefined *)((int)param_1[0xd].matrix.m[3] + 1) = *(undefined *)((int)local_20 + 0xd);
    *(undefined *)((int)param_1[0xd].matrix.m[3] + 2) = *(undefined *)((int)local_20 + 0xe);
    break;
  case 0x65:
    if ((int)local_20[3] < 0) {
      DAT_0069bc50 = 0;
      *(undefined4 *)(&DAT_005a5f60 + (uint)*(byte *)(param_1[0xd].matrix.m[3] + 1) * 4) = 0;
      *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) & 0xf7;
    }
    else {
      *(AnmVm **)(&DAT_005a5f60 + (int)local_20[3] * 4) = param_1;
      DAT_0069bc50 = 1;
      _DAT_0069bc54 = 0x3f800000;
      *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) | 8;
      *(undefined *)(param_1[0xd].matrix.m[3] + 1) = *(undefined *)(local_20 + 3);
    }
    break;
  case 0x66:
    local_6c = local_20 + 3;
    pAVar16 = EffectManager::FUN_0040ef50
                        ((int *)&g_EffectManager,0xd,(float *)&param_1[0xb].currentInstruction,1,
                         *(D3DCOLOR *)(PTR_DAT_00476438 + (int)*local_6c * 4));
    *(AnmVm **)((int)(&param_1[0xd].matrix + 1) + ((int)param_1[0xd].posInterpInitial.y + 9) * 4) =
         pAVar16;
    DVar7 = *(D3DCOLOR *)
             ((int)(&param_1[0xd].matrix + 1) + ((int)param_1[0xd].posInterpInitial.y + 9) * 4);
    *(float *)(DVar7 + 0x140) = local_6c[1];
    *(float *)(DVar7 + 0x144) = local_6c[2];
    *(float *)(DVar7 + 0x148) = local_6c[3];
    param_1[0xd].posInterpInitial.z = local_6c[4];
    param_1[0xd].posInterpInitial.y = (float)((int)param_1[0xd].posInterpInitial.y + 1);
    break;
  case 0x67:
    param_1[0xb].alphaInterpFinal = (D3DCOLOR)local_20[3];
    param_1[0xb].posInterpInitial.x = local_20[4];
    param_1[0xb].posInterpInitial.y = local_20[5];
    break;
  case 0x68:
    *(byte *)((int)&param_1[0xd].flags + 1) =
         *(byte *)((int)&param_1[0xd].flags + 1) & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x69:
    *(byte *)((int)&param_1[0xd].flags + 1) =
         *(byte *)((int)&param_1[0xd].flags + 1) & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
    break;
  case 0x6a:
    FUN_004311e0((int)local_20[3]);
    break;
  case 0x6b:
    *(byte *)((int)&param_1[0xd].flags + 1) =
         *(byte *)((int)&param_1[0xd].flags + 1) & 0x1f | *(char *)(local_20 + 3) << 5;
    break;
  case 0x6c:
    param_1[0xb].pos.y = local_20[3];
    break;
  case 0x6d:
    *(float *)((int)(&param_1[0xb].matrix + 1) + ((int)local_20[4] + 7) * 4) = *local_1c;
    break;
  case 0x6e:
    param_1[0xb].beginingOfScript = (AnmRawInstr *)local_20[3];
    goto LAB_0040954d;
  case 0x6f:
    param_1[0xc].uvScrollPos.x = local_20[3];
    param_1[0xc].scaleInterpFinalX = param_1[0xc].uvScrollPos.x;
    break;
  case 0x70:
    param_1[0xc].currentTimeInScript.current = (int)local_20[3];
    param_1[0xc].currentTimeInScript.subFrame = 0.0;
    param_1[0xc].currentTimeInScript.previous = -999;
    break;
  case 0x71:
    param_1[0xd].posInterpFinal.x = local_20[3];
    break;
  case 0x72:
    param_1[0xd].posInterpFinal.y = local_20[3];
    break;
  case 0x73:
    param_1[0xd].posInterpFinal.z = local_20[3];
    param_1[0xc].currentTimeInScript.current = 0;
    param_1[0xc].currentTimeInScript.subFrame = 0.0;
    param_1[0xc].currentTimeInScript.previous = -999;
    break;
  case 0x74:
    param_1[0xd].pos2.x = local_20[3];
    break;
  case 0x75:
    *(byte *)((int)&param_1[0xd].flags + 1) =
         *(byte *)((int)&param_1[0xd].flags + 1) & 0xfe | *(byte *)(local_20 + 3) & 1;
    break;
  case 0x76:
    EffectManager::FUN_0040ef50
              ((int *)&g_EffectManager,(int)local_20[3],(float *)&param_1[0xb].currentInstruction,
               (int)local_20[4],(D3DCOLOR)local_20[5]);
    break;
  case 0x77:
    for (local_8c = 0; local_8c < (int)local_20[3]; local_8c = local_8c + 1) {
      local_98 = param_1[0xb].currentInstruction;
      local_94 = param_1[0xb].sprite;
      local_90 = param_1[0xb].alphaInterpInitial;
      fVar25 = FUN_0041e820(&DAT_0069d8f8);
      local_98 = (AnmRawInstr *)((fVar25 * 144.0 - 72.0) + (float)local_98);
      fVar25 = FUN_0041e820(&DAT_0069d8f8);
      local_94 = (AnmLoadedSprite *)((fVar25 * 144.0 - 72.0) + (float)local_94);
      if (g_GameManager.current_power < 0x80) {
        FUN_0041f290();
      }
      else {
        FUN_0041f290();
      }
    }
    break;
  case 0x78:
    *(byte *)((int)&param_1[0xd].flags + 2) =
         *(byte *)((int)&param_1[0xd].flags + 2) & 0xfd | (*(byte *)(local_20 + 3) & 1) << 1;
    break;
  case 0x79:
    (*(code *)(&PTR_FUN_00476220)[(int)local_20[3]])(param_1);
    break;
  case 0x7a:
    if ((int)local_20[3] < 0) {
      param_1[9].angleVel.y = 0.0;
    }
    else {
      param_1[9].angleVel.y = (float)(&PTR_FUN_00476220)[(int)local_20[3]];
    }
    break;
  case 0x7b:
    FUN_0040afb0((int)param_1,(int *)(local_20 + 3),(undefined4 *)0x0);
    FUN_00424145();
    break;
  case 0x7c:
    FUN_0041f290();
    break;
  case 0x7d:
    g_Stage.unpauseFlag = '\x01';
    break;
  case 0x7e:
    _DAT_0069bc44 = local_20[3];
    g_GameManager._6764_4_ = g_GameManager._6764_4_ + 0x708;
    break;
  case 0x80:
    param_1->pendingInterrupt = *(short *)(local_20 + 3);
    break;
  case 0x81:
    param_1[(int)*local_1c + 1].pendingInterrupt = *(short *)(local_20 + 4);
    break;
  case 0x82:
    *(byte *)((int)&param_1[0xd].flags + 2) =
         *(byte *)((int)&param_1[0xd].flags + 2) & 0xfb | (*(byte *)(local_20 + 3) & 1) << 2;
    break;
  case 0x83:
    param_1[0xc].angleVel.z = *local_1c;
    param_1[0xc].scaleY = local_20[4];
    *(undefined2 *)&param_1[0xc].scaleX = *(undefined2 *)(local_20 + 5);
    *(undefined2 *)((int)&param_1[0xc].scaleX + 2) = *(undefined2 *)(local_20 + 6);
    *(undefined2 *)&param_1[0xc].scaleInterpFinalY = *(undefined2 *)(local_20 + 7);
    *(undefined2 *)((int)&param_1[0xc].scaleInterpFinalY + 2) = *(undefined2 *)(local_20 + 8);
    break;
  case 0x84:
    *(byte *)((int)&param_1[0xd].flags + 2) =
         *(byte *)((int)&param_1[0xd].flags + 2) & 0xf7 | (*(byte *)(local_20 + 3) & 1) << 3;
    break;
  case 0x85:
    param_1[0xd].pos2.x = param_1[0xb].pos.y;
    param_1[0xc].currentTimeInScript.current = 0;
    param_1[0xc].currentTimeInScript.subFrame = 0.0;
    param_1[0xc].currentTimeInScript.previous = -999;
    break;
  case 0x86:
    for (local_68 = 0; local_68 < 0x20; local_68 = local_68 + 1) {
      (&param_1[0xc].posInterpTime.current)[local_68] = 0;
    }
    break;
  case 0x87:
    *(byte *)((int)&param_1[0xd].flags + 2) =
         *(byte *)((int)&param_1[0xd].flags + 2) & 0xef | (*(byte *)(local_20 + 3) & 1) << 4;
  }
switchD_00407544_caseD_7f:
  local_20 = (float *)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  goto LAB_004074ce;
switchD_00407544_caseD_24:
  if ((*(byte *)((int)&param_1[0xd].flags + 2) >> 2 & 1) != 0) {
    DebugPrint2("error : no Stack Ret\n");
  }
  *(int *)&param_1[0xb].posInterpEndTime = *(int *)&param_1[0xb].posInterpEndTime + -1;
  pfVar17 = (float *)((int)&param_1[9].matrix + *(int *)&param_1[0xb].posInterpEndTime * 0x4c + 0x10
                     );
  pAVar16 = param_1 + 9;
  for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
    (pAVar16->rotation).x = *pfVar17;
    pfVar17 = pfVar17 + 1;
    pAVar16 = (AnmVm *)&(pAVar16->rotation).y;
  }
  goto LAB_004074b1;
switchD_00407544_caseD_23:
  local_14 = local_20[3];
  param_1[9].rotation.x = (float)((int)local_20 + (int)*(short *)((int)local_20 + 6));
  if ((*(byte *)((int)&param_1[0xd].flags + 2) >> 2 & 1) == 0) {
    pAVar16 = param_1 + 9;
    pfVar17 = (float *)((int)&param_1[9].matrix +
                       *(int *)&param_1[0xb].posInterpEndTime * 0x4c + 0x10);
    for (iVar19 = 0x13; iVar19 != 0; iVar19 = iVar19 + -1) {
      *pfVar17 = (pAVar16->rotation).x;
      pAVar16 = (AnmVm *)&(pAVar16->rotation).y;
      pfVar17 = pfVar17 + 1;
    }
  }
  FUN_00407440(param_1 + 9,(uint)local_14 & 0xffff);
  if (((*(byte *)((int)&param_1[0xd].flags + 2) >> 2 & 1) == 0) &&
     (*(int *)&param_1[0xb].posInterpEndTime < 7)) {
    *(int *)&param_1[0xb].posInterpEndTime = *(int *)&param_1[0xb].posInterpEndTime + 1;
  }
  param_1[9].angleVel.z = local_20[4];
  param_1[9].scaleInterpFinalX = local_20[5];
  goto LAB_004074b1;
}

