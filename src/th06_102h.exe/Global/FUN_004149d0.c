
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
      if (*(short *)((int)&local_24[5].matrix.field0_0x0 + 0x32) == 0) goto LAB_00414a1a;
      *(int *)(param_1 + 0xf5c04) = *(int *)(param_1 + 0xf5c04) + 1;
      switch(*(undefined2 *)((int)&local_24[5].matrix.field0_0x0 + 0x32)) {
      case 1:
        goto switchD_00414a97_caseD_1;
      case 2:
        fVar1 = local_24[5].scaleInterpFinalX * 0.5 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.5 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleY * 0.5 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleX = fVar1 + local_24[5].scaleX;
        iVar4 = AnmManager::FUN_00433960(g_AnmManager,local_24 + 1);
        break;
      case 3:
        fVar1 = local_24[5].scaleInterpFinalX * 0.4 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.4 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleY * 0.4 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleX = fVar1 + local_24[5].scaleX;
        iVar4 = AnmManager::FUN_00433960(g_AnmManager,local_24 + 2);
        break;
      case 4:
        fVar1 = local_24[5].scaleInterpFinalX * 0.3333333 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.3333333 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleY * 0.3333333 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleX = fVar1 + local_24[5].scaleX;
        iVar4 = AnmManager::FUN_00433960(g_AnmManager,local_24 + 3);
        break;
      case 5:
        fVar1 = local_24[5].scaleInterpFinalX * 0.5 * g_GameContext.field84_0x1a8;
        fVar3 = local_24[5].scaleInterpFinalY * 0.5 * g_GameContext.field84_0x1a8;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = local_24[5].scaleY * 0.5 * g_GameContext.field84_0x1a8 + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleX = fVar1 + local_24[5].scaleX;
        iVar4 = AnmManager::FUN_00433960(g_AnmManager,local_24 + 4);
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
        local_24[5].matrix.field0_0x0.field0._21 = local_24[5].matrix.field0_0x0.field0._23;
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)&local_24[5].matrix.field0_0x0.field0._23,
                   &local_24[5].matrix.field0_0x0.field0._22);
      }
      else {
        *(undefined2 *)((int)&local_24[5].matrix.field0_0x0 + 0x32) = 1;
        local_24[5].matrix.field0_0x0.field0._23 = 0.0;
        local_24[5].matrix.field0_0x0.field0._22 = 0.0;
        local_24[5].matrix.field0_0x0.field0._21 = -NAN;
switchD_00414a97_caseD_1:
        if (*(short *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) != 0) {
          if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 1) == 0) {
            if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x10) == 0) {
              if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x20) != 0) {
                if ((int)local_24[5].matrix.field0_0x0.field0._23 <
                    (int)local_24[5].matrix.field0_0x0.field0._24) {
                  fVar8 = (float10)FUN_0041e850(local_24[5].matrix.field0_0x0.field0._12);
                  local_24[5].matrix.field0_0x0.field0._12 = (float)fVar8;
                  local_24[5].currentTimeInScript.subFrame =
                       g_GameContext.field84_0x1a8 * (float)local_24[5].currentTimeInScript.current
                       + local_24[5].currentTimeInScript.subFrame;
                  fVar1 = local_24[5].currentTimeInScript.subFrame;
                  fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
                  fVar8 = (float10)fcos(fVar7);
                  fVar7 = (float10)fsin(fVar7);
                  local_24[5].scaleY = (float)(fVar8 * (float10)fVar1);
                  local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)fVar1);
                }
                else {
                  *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                       *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xffdf;
                }
              }
            }
            else if ((int)local_24[5].matrix.field0_0x0.field0._23 <
                     (int)local_24[5].matrix.field0_0x0.field0._24) {
              fVar1 = g_GameContext.field84_0x1a8 * (float)local_24[5].currentTimeInScript.previous;
              fVar3 = g_GameContext.field84_0x1a8 * local_24[5].uvScrollPos.y;
              local_24[5].scaleY =
                   g_GameContext.field84_0x1a8 * local_24[5].uvScrollPos.x + local_24[5].scaleY;
              local_24[5].scaleInterpFinalY = fVar3 + local_24[5].scaleInterpFinalY;
              local_24[5].scaleInterpFinalX = fVar1 + local_24[5].scaleInterpFinalX;
              fVar8 = (float10)FUN_0045be40((double)local_24[5].scaleInterpFinalY,
                                            (double)local_24[5].scaleY);
              local_24[5].matrix.field0_0x0.field0._12 = (float)fVar8;
            }
            else {
              *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                   *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xffef;
            }
          }
          else if ((int)local_24[5].matrix.field0_0x0.field0._23 < 0x11) {
            local_10 = 5.0 - (((float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x18) +
                              local_24[5].matrix.field0_0x0.field0._22) * 5.0) / 16.0;
            fVar1 = local_10 + local_24[5].currentTimeInScript.subFrame;
            fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
            fVar8 = (float10)fcos(fVar7);
            fVar7 = (float10)fsin(fVar7);
            local_24[5].scaleY = (float)(fVar8 * (float10)fVar1);
            local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)fVar1);
          }
          else {
            *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                 *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) ^ 1;
          }
          if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x40) == 0) {
            if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x100) == 0) {
              if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x80) == 0) {
                if ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x400) == 0) {
                  if (((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x800) != 0) &&
                     (iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,
                                           local_24->sprite->widthPx,local_24->sprite->heightPx),
                     iVar4 == 0)) {
                    fVar1 = local_24[5].angleVel.y;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (384.0 <= local_24[5].angleVel.y)) {
                      local_24[5].matrix.field0_0x0.field0._12 =
                           -local_24[5].matrix.field0_0x0.field0._12 - 3.141593;
                      fVar8 = (float10)FUN_0041e850(local_24[5].matrix.field0_0x0.field0._12);
                      local_24[5].matrix.field0_0x0.field0._12 = (float)fVar8;
                    }
                    fVar1 = local_24[5].angleVel.z;
                    if (fVar1 < 0.0 != NAN(fVar1)) {
                      local_24[5].matrix.field0_0x0.field0._12 =
                           -local_24[5].matrix.field0_0x0.field0._12;
                    }
                    local_24[5].currentTimeInScript.subFrame =
                         local_24[5].matrix.field0_0x0.field0._11;
                    local_10 = local_24[5].currentTimeInScript.subFrame;
                    fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
                    fVar8 = (float10)fcos(fVar7);
                    fVar7 = (float10)fsin(fVar7);
                    local_24[5].scaleY = (float)(fVar8 * (float10)local_10);
                    local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
                    local_24[5].matrix.field0_0x0.field0._32 =
                         (float)((int)local_24[5].matrix.field0_0x0.field0._32 + 1);
                    if ((int)local_24[5].matrix.field0_0x0.field0._33 <=
                        (int)local_24[5].matrix.field0_0x0.field0._32) {
                      *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                           *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xf7ff;
                    }
                  }
                }
                else {
                  iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,
                                       local_24->sprite->widthPx,local_24->sprite->heightPx);
                  if (iVar4 == 0) {
                    fVar1 = local_24[5].angleVel.y;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (384.0 <= local_24[5].angleVel.y)) {
                      local_24[5].matrix.field0_0x0.field0._12 =
                           -local_24[5].matrix.field0_0x0.field0._12 - 3.141593;
                      fVar8 = (float10)FUN_0041e850(local_24[5].matrix.field0_0x0.field0._12);
                      local_24[5].matrix.field0_0x0.field0._12 = (float)fVar8;
                    }
                    fVar1 = local_24[5].angleVel.z;
                    if ((fVar1 < 0.0 != NAN(fVar1)) || (448.0 <= local_24[5].angleVel.z)) {
                      local_24[5].matrix.field0_0x0.field0._12 =
                           -local_24[5].matrix.field0_0x0.field0._12;
                    }
                    local_24[5].currentTimeInScript.subFrame =
                         local_24[5].matrix.field0_0x0.field0._11;
                    local_10 = local_24[5].currentTimeInScript.subFrame;
                    fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
                    fVar8 = (float10)fcos(fVar7);
                    fVar7 = (float10)fsin(fVar7);
                    local_24[5].scaleY = (float)(fVar8 * (float10)local_10);
                    local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
                    local_24[5].matrix.field0_0x0.field0._32 =
                         (float)((int)local_24[5].matrix.field0_0x0.field0._32 + 1);
                    if ((int)local_24[5].matrix.field0_0x0.field0._33 <=
                        (int)local_24[5].matrix.field0_0x0.field0._32) {
                      *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                           *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xfbff;
                    }
                  }
                }
              }
              else {
                if ((int)local_24[5].matrix.field0_0x0.field0._23 <
                    *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                    ((int)local_24[5].matrix.field0_0x0.field0._32 + 1)) {
                  local_10 = local_24[5].currentTimeInScript.subFrame -
                             ((((float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x18) +
                               local_24[5].matrix.field0_0x0.field0._22) -
                              (float)(*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                                     *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x24))) *
                             local_24[5].currentTimeInScript.subFrame) /
                             (float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20);
                }
                else {
                  local_24[5].matrix.field0_0x0.field0._32 =
                       (float)((int)local_24[5].matrix.field0_0x0.field0._32 + 1);
                  if ((int)local_24[5].matrix.field0_0x0.field0._33 <=
                      (int)local_24[5].matrix.field0_0x0.field0._32) {
                    *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                         *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xff7f;
                  }
                  fVar8 = (float10)FUN_00428700();
                  local_24[5].matrix.field0_0x0.field0._12 =
                       (float)(fVar8 + (float10)local_24[5].matrix.field0_0x0.field0._14);
                  local_24[5].currentTimeInScript.subFrame =
                       local_24[5].matrix.field0_0x0.field0._11;
                  local_10 = local_24[5].currentTimeInScript.subFrame;
                }
                fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
                fVar8 = (float10)fcos(fVar7);
                fVar7 = (float10)fsin(fVar7);
                local_24[5].scaleY = (float)(fVar8 * (float10)local_10);
                local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
              }
            }
            else {
              if ((int)local_24[5].matrix.field0_0x0.field0._23 <
                  *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                  ((int)local_24[5].matrix.field0_0x0.field0._32 + 1)) {
                local_10 = local_24[5].currentTimeInScript.subFrame -
                           ((((float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x18) +
                             local_24[5].matrix.field0_0x0.field0._22) -
                            (float)(*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                                   *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x24))) *
                           local_24[5].currentTimeInScript.subFrame) /
                           (float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20);
              }
              else {
                local_24[5].matrix.field0_0x0.field0._32 =
                     (float)((int)local_24[5].matrix.field0_0x0.field0._32 + 1);
                if ((int)local_24[5].matrix.field0_0x0.field0._33 <=
                    (int)local_24[5].matrix.field0_0x0.field0._32) {
                  *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                       *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xfeff;
                }
                local_24[5].matrix.field0_0x0.field0._12 = local_24[5].matrix.field0_0x0.field0._14;
                local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.field0_0x0.field0._11;
                local_10 = local_24[5].currentTimeInScript.subFrame;
              }
              fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
              fVar8 = (float10)fcos(fVar7);
              fVar7 = (float10)fsin(fVar7);
              local_24[5].scaleY = (float)(fVar8 * (float10)local_10);
              local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
            }
          }
          else {
            if ((int)local_24[5].matrix.field0_0x0.field0._23 <
                *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                ((int)local_24[5].matrix.field0_0x0.field0._32 + 1)) {
              local_10 = local_24[5].currentTimeInScript.subFrame -
                         ((((float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x18) +
                           local_24[5].matrix.field0_0x0.field0._22) -
                          (float)(*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20) *
                                 *(int *)((int)&local_24[5].matrix.field0_0x0 + 0x24))) *
                         local_24[5].currentTimeInScript.subFrame) /
                         (float)*(int *)((int)&local_24[5].matrix.field0_0x0 + 0x20);
            }
            else {
              local_24[5].matrix.field0_0x0.field0._32 =
                   (float)((int)local_24[5].matrix.field0_0x0.field0._32 + 1);
              if ((int)local_24[5].matrix.field0_0x0.field0._33 <=
                  (int)local_24[5].matrix.field0_0x0.field0._32) {
                *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) =
                     *(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0xffbf;
              }
              local_24[5].matrix.field0_0x0.field0._12 =
                   local_24[5].matrix.field0_0x0.field0._12 +
                   local_24[5].matrix.field0_0x0.field0._14;
              local_24[5].currentTimeInScript.subFrame = local_24[5].matrix.field0_0x0.field0._11;
              local_10 = local_24[5].currentTimeInScript.subFrame;
            }
            fVar7 = (float10)local_24[5].matrix.field0_0x0.field0._12;
            fVar8 = (float10)fcos(fVar7);
            fVar7 = (float10)fsin(fVar7);
            local_24[5].scaleY = (float)(fVar8 * (float10)local_10);
            local_24[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_10);
          }
        }
        fVar1 = g_GameContext.field84_0x1a8 * local_24[5].scaleInterpFinalX;
        fVar3 = g_GameContext.field84_0x1a8 * local_24[5].scaleInterpFinalY;
        pfVar5 = &local_24[5].angleVel.y;
        *pfVar5 = g_GameContext.field84_0x1a8 * local_24[5].scaleY + *pfVar5;
        local_24[5].angleVel.z = fVar3 + local_24[5].angleVel.z;
        local_24[5].scaleX = fVar1 + local_24[5].scaleX;
        iVar4 = FUN_0041b5e1(local_24[5].angleVel.y,local_24[5].angleVel.z,local_24->sprite->widthPx
                             ,local_24->sprite->heightPx);
        if (iVar4 != 0) {
          *(undefined2 *)((int)&local_24[5].matrix.field0_0x0 + 0x34) = 0;
LAB_00415b6c:
          if (*(char *)((int)&local_24[5].matrix.field0_0x0 + 0x37) == '\0') {
            local_8 = FUN_00426df0(&local_24[5].angleVel.y,local_24 + 5);
            if (local_8 == 1) {
              *(undefined *)((int)&local_24[5].matrix.field0_0x0 + 0x37) = 1;
LAB_00415be8:
              local_8 = FUN_00426c40(&local_24[5].angleVel.y,local_24 + 5);
              if ((local_8 != 0) &&
                 (*(undefined2 *)((int)&local_24[5].matrix.field0_0x0 + 0x32) = 5, local_8 == 2)) {
                FUN_0041f290();
              }
            }
            else if (local_8 == 2) {
              *(undefined2 *)((int)&local_24[5].matrix.field0_0x0 + 0x32) = 5;
              FUN_0041f290();
            }
          }
          else if (*(char *)((int)&local_24[5].matrix.field0_0x0 + 0x37) == '\x01')
          goto LAB_00415be8;
          AnmManager::FUN_00433960(g_AnmManager,local_24);
          goto switchD_00414a97_caseD_5;
        }
        if ((((((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x40) == 0) &&
              ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x100) == 0)) &&
             ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x80) == 0)) &&
            (((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x400) == 0 &&
             ((*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x2c) & 0x800) == 0)))) &&
           (*(short *)((int)&local_24[5].matrix.field0_0x0 + 0x34) == 0)) {
          pAVar6 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = 0.0;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
        }
        else {
          *(short *)((int)&local_24[5].matrix.field0_0x0 + 0x34) =
               *(short *)((int)&local_24[5].matrix.field0_0x0 + 0x34) + 1;
          if (*(ushort *)((int)&local_24[5].matrix.field0_0x0 + 0x34) < 0x100) goto LAB_00415b6c;
          pAVar6 = local_24;
          for (iVar4 = 0x171; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = 0.0;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
        }
      }
LAB_00414a1a:
      local_24 = (AnmVm *)((int)&local_24[5].matrix.field0_0x0 + 0x38);
    }
    local_2c = (AnmVm *)(param_1 + 0xec000);
    for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
      if (local_2c[2].currentTimeInScript.current != 0) {
        local_2c[2].angleVel.z =
             g_GameContext.field84_0x1a8 * local_2c[2].scaleInterpFinalY + local_2c[2].angleVel.z;
        if (local_2c[2].scaleX < local_2c[2].angleVel.z - local_2c[2].angleVel.y) {
          local_2c[2].angleVel.y = local_2c[2].angleVel.z - local_2c[2].scaleX;
        }
        fVar1 = local_2c[2].angleVel.y;
        if (fVar1 < 0.0 != NAN(fVar1)) {
          local_2c[2].angleVel.y = 0.0;
        }
        local_1c = local_2c[2].scaleY / 2.0;
        local_20 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_38 = (local_2c[2].angleVel.z - local_2c[2].angleVel.y) / 2.0 + local_2c[2].angleVel.y
                   + local_2c[2].rotation.x;
        local_34 = local_2c[2].rotation.y;
        local_2c->scaleY = local_2c[2].scaleY / local_2c->sprite->widthPx;
        local_14 = local_2c[2].angleVel.z - local_2c[2].angleVel.y;
        local_2c->scaleX = local_14 / local_2c->sprite->heightPx;
        (local_2c->rotation).z = 1.570796 - local_2c[2].angleVel.x;
        cVar2 = *(char *)((int)&local_2c[2].matrix.field0_0x0 + 0x10);
        if (cVar2 == '\0') {
          if ((*(ushort *)((int)&local_2c[2].matrix.field0_0x0 + 0xc) & 1) == 0) {
            if ((int)local_2c[2].scaleInterpFinalX < 0x1f) {
              local_260 = local_2c[2].scaleInterpFinalX;
            }
            else {
              local_260 = 4.203895e-44;
            }
            if ((int)local_2c[2].scaleInterpFinalX - (int)local_260 <
                (int)local_2c[2].matrix.field0_0x0.field0._13) {
              local_14 = (((float)*(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) +
                          local_2c[2].matrix.field0_0x0.field0._12) * local_2c[2].scaleY) /
                         (float)(int)local_2c[2].scaleInterpFinalX;
            }
            else {
              local_14 = 1.2;
            }
            local_2c->scaleY = local_14 / 16.0;
            local_20 = local_14 / 2.0;
          }
          else {
            local_28 = __ftol2((double)((((float)*(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) +
                                         local_2c[2].matrix.field0_0x0.field0._12) * 255.0) /
                                       (float)(int)local_2c[2].scaleInterpFinalX));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            local_2c->color = local_28 << 0x18;
          }
          if ((int)local_2c[2].uvScrollPos.x <= (int)local_2c[2].matrix.field0_0x0.field0._13) {
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         *(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) % 0xc == 0);
          }
          if ((int)local_2c[2].scaleInterpFinalX <= (int)local_2c[2].matrix.field0_0x0.field0._13) {
            local_2c[2].matrix.field0_0x0.field0._13 = 0.0;
            local_2c[2].matrix.field0_0x0.field0._12 = 0.0;
            local_2c[2].matrix.field0_0x0.field0._11 = -NAN;
            *(char *)((int)&local_2c[2].matrix.field0_0x0 + 0x10) =
                 *(char *)((int)&local_2c[2].matrix.field0_0x0 + 0x10) + '\x01';
            goto LAB_004161bf;
          }
        }
        else {
          if (cVar2 == '\x01') {
LAB_004161bf:
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         *(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) % 0xc == 0);
            if ((int)local_2c[2].matrix.field0_0x0.field0._13 < (int)local_2c[2].uvScrollPos.y)
            goto LAB_00416422;
            local_2c[2].matrix.field0_0x0.field0._13 = 0.0;
            local_2c[2].matrix.field0_0x0.field0._12 = 0.0;
            local_2c[2].matrix.field0_0x0.field0._11 = -NAN;
            *(char *)((int)&local_2c[2].matrix.field0_0x0 + 0x10) =
                 *(char *)((int)&local_2c[2].matrix.field0_0x0 + 0x10) + '\x01';
            if (local_2c[2].currentTimeInScript.previous == 0) {
              local_2c[2].currentTimeInScript.current = 0;
              goto LAB_00415e08;
            }
          }
          else if (cVar2 != '\x02') goto LAB_00416422;
          if ((*(ushort *)((int)&local_2c[2].matrix.field0_0x0 + 0xc) & 1) == 0) {
            if (0 < local_2c[2].currentTimeInScript.previous) {
              local_14 = local_2c[2].scaleY -
                         (((float)*(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) +
                          local_2c[2].matrix.field0_0x0.field0._12) * local_2c[2].scaleY) /
                         (float)local_2c[2].currentTimeInScript.previous;
              local_2c->scaleY = local_14 / 16.0;
              local_20 = local_14 / 2.0;
            }
          }
          else {
            local_28 = __ftol2((double)((((float)*(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) +
                                         local_2c[2].matrix.field0_0x0.field0._12) * 255.0) /
                                       (float)(int)local_2c[2].scaleInterpFinalX));
            if (0xff < local_28) {
              local_28 = 0xff;
            }
            local_2c->color = local_28 << 0x18;
          }
          if ((int)local_2c[2].matrix.field0_0x0.field0._13 <
              (int)local_2c[2].currentTimeInScript.subFrame) {
            FUN_00427190(&local_38,&local_20,local_2c + 2,local_2c[2].angleVel.x,
                         *(int *)((int)&local_2c[2].matrix.field0_0x0 + 8) % 0xc == 0);
          }
          if (local_2c[2].currentTimeInScript.previous <=
              (int)local_2c[2].matrix.field0_0x0.field0._13) {
            local_2c[2].currentTimeInScript.current = 0;
            goto LAB_00415e08;
          }
        }
LAB_00416422:
        if (640.0 <= local_2c[2].angleVel.y) {
          local_2c[2].currentTimeInScript.current = 0;
        }
        local_2c[2].matrix.field0_0x0.field0._11 = local_2c[2].matrix.field0_0x0.field0._13;
        GameContext::FUN_00424285
                  (&g_GameContext,(int *)&local_2c[2].matrix.field0_0x0.field0._13,
                   &local_2c[2].matrix.field0_0x0.field0._12);
        AnmManager::FUN_00433960(g_AnmManager,local_2c);
      }
LAB_00415e08:
      local_2c = (AnmVm *)(local_2c[2].matrix.field0_0x0.m[1] + 1);
    }
    *(undefined4 *)(param_1 + 0xf5c08) = *(undefined4 *)(param_1 + 0xf5c10);
    GameContext::FUN_00424285
              (&g_GameContext,(int *)(param_1 + 0xf5c10),(float *)(param_1 + 0xf5c0c));
  }
  return 1;
}

