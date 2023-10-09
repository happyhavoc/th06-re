
undefined4 FUN_004149d0(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  AnmVm *pAVar6;
  float10 fVar7;
  float10 fVar8;
  float local_260;
  float local_38;
  float local_34;
  AnmVm *local_2c;
  int local_28;
  AnmVm *local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  local_24 = (AnmVm *)(param_1 + 0x5600);
  if (DAT_0069bccc == '\0') {
    FUN_0041f4a0();
    *(undefined4 *)(param_1 + 0xf5c04) = 0;
    for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
      if (*(short *)((int)local_24[5].matrix.m[3] + 2) == 0) goto LAB_00414a1a;
      *(int *)(param_1 + 0xf5c04) = *(int *)(param_1 + 0xf5c04) + 1;
      switch(*(undefined2 *)((int)local_24[5].matrix.m[3] + 2)) {
      case 1:
        goto switchD_00414a97_caseD_1;
      case 2:
        fVar1 = local_24[5].scaleInterpFinalX * 0.5 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.5 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleX * 0.5 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleY = fVar1 + local_24[5].scaleY;
        iVar4 = AnmManager::ExecuteScript(g_AnmManager,local_24 + 1);
        break;
      case 3:
        fVar1 = local_24[5].scaleInterpFinalX * 0.4 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.4 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleX * 0.4 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleY = fVar1 + local_24[5].scaleY;
        iVar4 = AnmManager::ExecuteScript(g_AnmManager,local_24 + 2);
        break;
      case 4:
        fVar1 = local_24[5].scaleInterpFinalX * 0.3333333 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.3333333 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleX * 0.3333333 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleY = fVar1 + local_24[5].scaleY;
        iVar4 = AnmManager::ExecuteScript(g_AnmManager,local_24 + 3);
        break;
      case 5:
        fVar1 = local_24[5].scaleInterpFinalX * 0.5 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.5 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleX * 0.5 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleY = fVar1 + local_24[5].scaleY;
        iVar4 = AnmManager::ExecuteScript(g_AnmManager,local_24 + 4);
        if (iVar4 != 0) {
          pAVar6 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = 0.0;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
          goto LAB_00414a1a;
        }
      default:
        goto switchD_00414a97_caseD_5;
      }
      if (iVar4 == 0) {
switchD_00414a97_caseD_5:
        local_24[5].matrix.m[1][0] = local_24[5].matrix.m[1][2];
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)(local_24[5].matrix.m[1] + 2),local_24[5].matrix.m[1] + 1);
      }
      else {
        *(undefined2 *)((int)local_24[5].matrix.m[3] + 2) = 1;
        local_24[5].matrix.m[1][2] = 0.0;
        local_24[5].matrix.m[1][1] = 0.0;
        local_24[5].matrix.m[1][0] = -NAN;
switchD_00414a97_caseD_1:
        if (*(short *)(local_24[5].matrix.m[2] + 3) != 0) {
          if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 1) == 0) {
            if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x10) == 0) {
              if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x20) != 0) {
                if ((int)local_24[5].matrix.m[1][2] < (int)local_24[5].matrix.m[1][3]) {
                  fVar8 = (float10)FUN_0041e850(local_24[5].matrix.m[0][1]);
                  local_24[5].matrix.m[0][1] = (float)fVar8;
                  local_24[5].currentTimeInScript.subFrame =
                       g_GameContext.field84_0x1a8 * (float)local_24[5].currentTimeInScript.current
                       + local_24[5].currentTimeInScript.subFrame;
                  fVar1 = local_24[5].currentTimeInScript.subFrame;
                  fVar7 = (float10)local_24[5].matrix.m[0][1];
                  fVar8 = (float10)fcos(fVar7);
                  fVar7 = (float10)fsin(fVar7);
                  local_24[5].scaleX = (float)(fVar8 * (float10)fVar1);
                  local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)fVar1);
                }
                else {
                  *(ushort *)(local_24[5].matrix.m[2] + 3) =
                       *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xffdf;
                }
              }
            }
            else if ((int)local_24[5].matrix.m[1][2] < (int)local_24[5].matrix.m[1][3]) {
              fVar1 = g_GameContext.field84_0x1a8 * (float)local_24[5].currentTimeInScript.previous;
              fVar3 = g_GameContext.field84_0x1a8 * local_24[5].uvScrollPos.y;
              local_24[5].scaleX =
                   g_GameContext.field84_0x1a8 * local_24[5].uvScrollPos.x + local_24[5].scaleX;
              local_24[5].scaleInterpFinalY = fVar3 + local_24[5].scaleInterpFinalY;
              local_24[5].scaleInterpFinalX = fVar1 + local_24[5].scaleInterpFinalX;
              fVar8 = (float10)FUN_0045be40((double)local_24[5].scaleInterpFinalY,
                                            (double)local_24[5].scaleX);
              local_24[5].matrix.m[0][1] = (float)fVar8;
            }
            else {
              *(ushort *)(local_24[5].matrix.m[2] + 3) =
                   *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xffef;
            }
          }
          else if ((int)local_24[5].matrix.m[1][2] < 0x11) {
            local_10 = 5.0 - (((float)(int)local_24[5].matrix.m[1][2] + local_24[5].matrix.m[1][1])
                             * 5.0) / 16.0;
            fVar1 = local_10 + local_24[5].currentTimeInScript.subFrame;
            fVar7 = (float10)local_24[5].matrix.m[0][1];
            fVar8 = (float10)fcos(fVar7);
            fVar7 = (float10)fsin(fVar7);
            local_24[5].scaleX = (float)(fVar8 * (float10)fVar1);
            local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)fVar1);
          }
          else {
            *(ushort *)(local_24[5].matrix.m[2] + 3) = *(ushort *)(local_24[5].matrix.m[2] + 3) ^ 1;
          }
          if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x40) == 0) {
            if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x100) == 0) {
              if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x80) == 0) {
                if ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x400) == 0) {
                  if (((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x800) != 0) &&
                     (iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,
                                           local_24->sprite->widthPx,local_24->sprite->heightPx),
                     iVar4 == 0)) {
                    fVar1 = local_24[5].angleVel.y;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (384.0 <= local_24[5].angleVel.y)) {
                      local_24[5].matrix.m[0][1] = -local_24[5].matrix.m[0][1] - 3.141593;
                      fVar8 = (float10)FUN_0041e850(local_24[5].matrix.m[0][1]);
                      local_24[5].matrix.m[0][1] = (float)fVar8;
                    }
                    fVar1 = local_24[5].angleVel.z;
                    if (fVar1 < 0.0 != NAN(fVar1)) {
                      local_24[5].matrix.m[0][1] = -local_24[5].matrix.m[0][1];
                    }
                    local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.m[0][0];
                    local_10 = local_24[5].currentTimeInScript.subFrame;
                    fVar7 = (float10)local_24[5].matrix.m[0][1];
                    fVar8 = (float10)fcos(fVar7);
                    fVar7 = (float10)fsin(fVar7);
                    local_24[5].scaleX = (float)(fVar8 * (float10)local_10);
                    local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
                    local_24[5].matrix.m[2][1] = (float)((int)local_24[5].matrix.m[2][1] + 1);
                    if ((int)local_24[5].matrix.m[2][2] <= (int)local_24[5].matrix.m[2][1]) {
                      *(ushort *)(local_24[5].matrix.m[2] + 3) =
                           *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,
                                       local_24->sprite->widthPx,local_24->sprite->heightPx);
                  if (iVar4 == 0) {
                    fVar1 = local_24[5].angleVel.y;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (384.0 <= local_24[5].angleVel.y)) {
                      local_24[5].matrix.m[0][1] = -local_24[5].matrix.m[0][1] - 3.141593;
                      fVar8 = (float10)FUN_0041e850(local_24[5].matrix.m[0][1]);
                      local_24[5].matrix.m[0][1] = (float)fVar8;
                    }
                    fVar1 = local_24[5].angleVel.z;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (448.0 <= local_24[5].angleVel.z)) {
                      local_24[5].matrix.m[0][1] = -local_24[5].matrix.m[0][1];
                    }
                    local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.m[0][0];
                    local_10 = local_24[5].currentTimeInScript.subFrame;
                    fVar7 = (float10)local_24[5].matrix.m[0][1];
                    fVar8 = (float10)fcos(fVar7);
                    fVar7 = (float10)fsin(fVar7);
                    local_24[5].scaleX = (float)(fVar8 * (float10)local_10);
                    local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
                    local_24[5].matrix.m[2][1] = (float)((int)local_24[5].matrix.m[2][1] + 1);
                    if ((int)local_24[5].matrix.m[2][2] <= (int)local_24[5].matrix.m[2][1]) {
                      *(ushort *)(local_24[5].matrix.m[2] + 3) =
                           *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((int)local_24[5].matrix.m[1][2] <
                    (int)local_24[5].matrix.m[2][0] * ((int)local_24[5].matrix.m[2][1] + 1)) {
                  local_10 = local_24[5].currentTimeInScript.subFrame -
                             ((((float)(int)local_24[5].matrix.m[1][2] + local_24[5].matrix.m[1][1])
                              - (float)((int)local_24[5].matrix.m[2][0] *
                                       (int)local_24[5].matrix.m[2][1])) *
                             local_24[5].currentTimeInScript.subFrame) /
                             (float)(int)local_24[5].matrix.m[2][0];
                }
                else {
                  local_24[5].matrix.m[2][1] = (float)((int)local_24[5].matrix.m[2][1] + 1);
                  if ((int)local_24[5].matrix.m[2][2] <= (int)local_24[5].matrix.m[2][1]) {
                    *(ushort *)(local_24[5].matrix.m[2] + 3) =
                         *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xff7f;
                  }
                  fVar8 = (float10)FUN_00428700();
                  local_24[5].matrix.m[0][1] = (float)(fVar8 + (float10)local_24[5].matrix.m[0][3]);
                  local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.m[0][0];
                  local_10 = local_24[5].currentTimeInScript.subFrame;
                }
                fVar7 = (float10)local_24[5].matrix.m[0][1];
                fVar8 = (float10)fcos(fVar7);
                fVar7 = (float10)fsin(fVar7);
                local_24[5].scaleX = (float)(fVar8 * (float10)local_10);
                local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
              }
            }
            else {
              if ((int)local_24[5].matrix.m[1][2] <
                  (int)local_24[5].matrix.m[2][0] * ((int)local_24[5].matrix.m[2][1] + 1)) {
                local_10 = local_24[5].currentTimeInScript.subFrame -
                           ((((float)(int)local_24[5].matrix.m[1][2] + local_24[5].matrix.m[1][1]) -
                            (float)((int)local_24[5].matrix.m[2][0] *
                                   (int)local_24[5].matrix.m[2][1])) *
                           local_24[5].currentTimeInScript.subFrame) /
                           (float)(int)local_24[5].matrix.m[2][0];
              }
              else {
                local_24[5].matrix.m[2][1] = (float)((int)local_24[5].matrix.m[2][1] + 1);
                if ((int)local_24[5].matrix.m[2][2] <= (int)local_24[5].matrix.m[2][1]) {
                  *(ushort *)(local_24[5].matrix.m[2] + 3) =
                       *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xfeff;
                }
                local_24[5].matrix.m[0][1] = local_24[5].matrix.m[0][3];
                local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.m[0][0];
                local_10 = local_24[5].currentTimeInScript.subFrame;
              }
              fVar7 = (float10)local_24[5].matrix.m[0][1];
              fVar8 = (float10)fcos(fVar7);
              fVar7 = (float10)fsin(fVar7);
              local_24[5].scaleX = (float)(fVar8 * (float10)local_10);
              local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
            }
          }
          else {
            if ((int)local_24[5].matrix.m[1][2] <
                (int)local_24[5].matrix.m[2][0] * ((int)local_24[5].matrix.m[2][1] + 1)) {
              local_10 = local_24[5].currentTimeInScript.subFrame -
                         ((((float)(int)local_24[5].matrix.m[1][2] + local_24[5].matrix.m[1][1]) -
                          (float)((int)local_24[5].matrix.m[2][0] * (int)local_24[5].matrix.m[2][1])
                          ) * local_24[5].currentTimeInScript.subFrame) /
                         (float)(int)local_24[5].matrix.m[2][0];
            }
            else {
              local_24[5].matrix.m[2][1] = (float)((int)local_24[5].matrix.m[2][1] + 1);
              if ((int)local_24[5].matrix.m[2][2] <= (int)local_24[5].matrix.m[2][1]) {
                *(ushort *)(local_24[5].matrix.m[2] + 3) =
                     *(ushort *)(local_24[5].matrix.m[2] + 3) & 0xffbf;
              }
              local_24[5].matrix.m[0][1] = local_24[5].matrix.m[0][1] + local_24[5].matrix.m[0][3];
              local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.m[0][0];
              local_10 = local_24[5].currentTimeInScript.subFrame;
            }
            fVar7 = (float10)local_24[5].matrix.m[0][1];
            fVar8 = (float10)fcos(fVar7);
            fVar7 = (float10)fsin(fVar7);
            local_24[5].scaleX = (float)(fVar8 * (float10)local_10);
            local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
          }
        }
        fVar1 = g_GameContext.field84_0x1a8 * local_24[5].scaleInterpFinalX;
        fVar3 = g_GameContext.field84_0x1a8 * local_24[5].scaleInterpFinalY;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = g_GameContext.field84_0x1a8 * local_24[5].scaleX + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleY = fVar1 + local_24[5].scaleY;
        iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,local_24->sprite->widthPx
                             ,local_24->sprite->heightPx);
        if (iVar4 != 0) {
          *(undefined2 *)(local_24[5].matrix.m[3] + 1) = 0;
LAB_00415b6c:
          if (*(char *)((int)local_24[5].matrix.m[3] + 7) == '\0') {
            local_8 = FUN_00426df0(&local_24[5].angleVel.y,local_24 + 5);
            if (local_8 == 1) {
              *(undefined *)((int)local_24[5].matrix.m[3] + 7) = 1;
LAB_00415be8:
              local_8 = FUN_00426c40(&local_24[5].angleVel.y,local_24 + 5);
              if ((local_8 != 0) &&
                 (*(undefined2 *)((int)local_24[5].matrix.m[3] + 2) = 5, local_8 == 2)) {
                FUN_0041f290();
              }
            }
            else if (local_8 == 2) {
              *(undefined2 *)((int)local_24[5].matrix.m[3] + 2) = 5;
              FUN_0041f290();
            }
          }
          else if (*(char *)((int)local_24[5].matrix.m[3] + 7) == '\x01') goto LAB_00415be8;
          AnmManager::ExecuteScript(g_AnmManager,local_24);
          goto switchD_00414a97_caseD_5;
        }
        if ((((((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x40) == 0) &&
              ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x100) == 0)) &&
             ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x80) == 0)) &&
            (((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x400) == 0 &&
             ((*(ushort *)(local_24[5].matrix.m[2] + 3) & 0x800) == 0)))) &&
           (*(short *)(local_24[5].matrix.m[3] + 1) == 0)) {
          pAVar6 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = 0.0;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
        }
        else {
          *(short *)(local_24[5].matrix.m[3] + 1) = *(short *)(local_24[5].matrix.m[3] + 1) + 1;
          if (*(ushort *)(local_24[5].matrix.m[3] + 1) < 0x100) goto LAB_00415b6c;
          pAVar6 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = 0.0;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
        }
      }
LAB_00414a1a:
      local_24 = (AnmVm *)(local_24[5].matrix.m[3] + 2);
    }
    local_2c = (AnmVm *)(param_1 + 0xec000);
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (local_2c[2].currentTimeInScript.current != 0) {
        local_2c[2].angleVel.z =
             g_GameContext.field84_0x1a8 * local_2c[2].scaleInterpFinalY + local_2c[2].angleVel.z;
        if (local_2c[2].scaleY < local_2c[2].angleVel.z - local_2c[2].angleVel.y) {
          local_2c[2].angleVel.y = local_2c[2].angleVel.z - local_2c[2].scaleY;
        }
        fVar1 = local_2c[2].angleVel.y;
        if (fVar1 < 0.0 != NAN(fVar1)) {
          local_2c[2].angleVel.y = 0.0;
        }
        local_1c = local_2c[2].scaleX / 2.0;
        local_20 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_38 = (local_2c[2].angleVel.z - local_2c[2].angleVel.y) / 2.0 + local_2c[2].angleVel.y
                   + local_2c[2].rotation.x;
        local_34 = local_2c[2].rotation.y;
        local_2c->scaleX = local_2c[2].scaleX / local_2c->sprite->widthPx;
        local_14 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_2c->scaleY = local_14 / local_2c->sprite->heightPx;
        (local_2c->rotation).z = 1.570796 - local_2c[2].angleVel.x;
        cVar2 = *(char *)local_2c[2].matrix.m[1];
        if (cVar2 == '\0') {
          if ((*(ushort *)(local_2c[2].matrix.m[0] + 3) & 1) == 0) {
            if ((int)local_2c[2].scaleInterpFinalX < 0x1f) {
              local_260 = local_2c[2].scaleInterpFinalX;
            }
            else {
              local_260 = 4.203895e-44;
            }
            if ((int)local_2c[2].scaleInterpFinalX - (int)local_260 <
                (int)local_2c[2].matrix.m[0][2]) {
              local_14 = (((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]) *
                         local_2c[2].scaleX) / (float)(int)local_2c[2].scaleInterpFinalX;
            }
            else {
              local_14 = 1.2;
            }
            local_2c->scaleX = local_14 / 16.0;
            local_20 = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((double)((((float)(int)local_2c[2].matrix.m[0][2] +
                                         local_2c[2].matrix.m[0][1]) * 255.0) /
                                       (float)(int)local_2c[2].scaleInterpFinalX));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            local_2c->color = local_28 << 0x18;
          }
          if ((int)local_2c[2].uvScrollPos.x <= (int)local_2c[2].matrix.m[0][2]) {
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         (int)local_2c[2].matrix.m[0][2] % 0xc == 0);
          }
          if ((int)local_2c[2].scaleInterpFinalX <= (int)local_2c[2].matrix.m[0][2]) {
            local_2c[2].matrix.m[0][2] = 0.0;
            local_2c[2].matrix.m[0][1] = 0.0;
            local_2c[2].matrix.m[0][0] = -NAN;
            *(char *)local_2c[2].matrix.m[1] = *(char *)local_2c[2].matrix.m[1] + '\x01';
            goto LAB_004161bf;
          }
        }
        else {
          if (cVar2 == '\x01') {
LAB_004161bf:
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         (int)local_2c[2].matrix.m[0][2] % 0xc == 0);
            if ((int)local_2c[2].matrix.m[0][2] < (int)local_2c[2].uvScrollPos.y) goto LAB_00416422;
            local_2c[2].matrix.m[0][2] = 0.0;
            local_2c[2].matrix.m[0][1] = 0.0;
            local_2c[2].matrix.m[0][0] = -NAN;
            *(char *)local_2c[2].matrix.m[1] = *(char *)local_2c[2].matrix.m[1] + '\x01';
            if (local_2c[2].currentTimeInScript.previous == 0) {
              local_2c[2].currentTimeInScript.current = 0;
              goto LAB_00415e08;
            }
          }
          else if (cVar2 != '\x02') goto LAB_00416422;
          if ((*(ushort *)(local_2c[2].matrix.m[0] + 3) & 1) == 0) {
            if (0 < local_2c[2].currentTimeInScript.previous) {
              local_14 = local_2c[2].scaleX -
                         (((float)(int)local_2c[2].matrix.m[0][2] + local_2c[2].matrix.m[0][1]) *
                         local_2c[2].scaleX) / (float)local_2c[2].currentTimeInScript.previous;
              local_2c->scaleX = local_14 / 16.0;
              local_20 = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((double)((((float)(int)local_2c[2].matrix.m[0][2] +
                                         local_2c[2].matrix.m[0][1]) * 255.0) /
                                       (float)(int)local_2c[2].scaleInterpFinalX));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            local_2c->color = local_28 << 0x18;
          }
          if ((int)local_2c[2].matrix.m[0][2] < (int)local_2c[2].currentTimeInScript.subFrame) {
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         (int)local_2c[2].matrix.m[0][2] % 0xc == 0);
          }
          if (local_2c[2].currentTimeInScript.previous <= (int)local_2c[2].matrix.m[0][2]) {
            local_2c[2].currentTimeInScript.current = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= local_2c[2].angleVel.y) {
          local_2c[2].currentTimeInScript.current = 0;
        }
        local_2c[2].matrix.m[0][0] = local_2c[2].matrix.m[0][2];
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)(local_2c[2].matrix.m[0] + 2),local_2c[2].matrix.m[0] + 1);
        AnmManager::ExecuteScript(g_AnmManager,local_2c);
      }
LAB_00415e08:
      local_2c = (AnmVm *)(local_2c[2].matrix.m[1] + 1);
    }
    *(undefined4 *)(param_1 + 0xf5c08) = *(undefined4 *)(param_1 + 0xf5c10);
    GameContext::FUN_00424285
              (&g_GameContext,(int *)(param_1 + 0xf5c10),(float *)(param_1 + 0xf5c0c));
  }
  return 1;
}

