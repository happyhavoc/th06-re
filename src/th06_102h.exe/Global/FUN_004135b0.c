
undefined4 FUN_004135b0(short *param_1,uint param_2,int param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  float *pfVar5;
  AnmVm *pAVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float local_14;
  AnmVm *local_10;
  int local_c;
  float local_8;
  
  local_10 = (AnmVm *)(in_ECX + 0x5600 + *(int *)(in_ECX + 0xf5c00) * 0x5c4);
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    *(int *)(in_ECX + 0xf5c00) = *(int *)(in_ECX + 0xf5c00) + 1;
    if (0x27f < *(int *)(in_ECX + 0xf5c00)) {
      *(undefined4 *)(in_ECX + 0xf5c00) = 0;
    }
    if (*(short *)((int)local_10[5].matrix.m[3] + 2) == 0) break;
    local_10 = (AnmVm *)(local_10[5].matrix.m[3] + 2);
    if (*(int *)(in_ECX + 0xf5c00) == 0) {
      local_10 = (AnmVm *)(in_ECX + 0x5600);
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
      fVar9 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 10);
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_14 = fVar8 * (fVar9 - fVar1) + *(float *)(param_1 + 10);
      break;
    case 7:
      fVar9 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar8 * (fVar9 - fVar1) + *(float *)(param_1 + 0xe);
      local_14 = (float)param_3 * *(float *)(param_1 + 10) + *(float *)(param_1 + 8) +
                 ((float)param_2 * 6.283185) / (float)(int)param_1[0x22] + 0.0;
      break;
    case 8:
      fVar9 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_1 + 10);
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_14 = fVar8 * (fVar9 - fVar1) + *(float *)(param_1 + 10);
      fVar9 = *(float *)(param_1 + 0xc);
      fVar1 = *(float *)(param_1 + 0xe);
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar8 * (fVar9 - fVar1) + *(float *)(param_1 + 0xe);
    }
    *(undefined2 *)((int)local_10[5].matrix.m[3] + 2) = 1;
    *(undefined *)((int)local_10[5].matrix.m[3] + 6) = 1;
    local_10[5].currentTimeInScript.subFrame = local_8;
    fVar9 = FUN_0041e850(local_14,0.0);
    local_10[5].matrix.m[0][1] = fVar9;
    local_10[5].angleVel.y = *(float *)(param_1 + 2);
    local_10[5].angleVel.z = *(float *)(param_1 + 4);
    local_10[5].scaleY = *(float *)(param_1 + 6);
    local_10[5].scaleY = 0.1;
    fVar7 = (float10)local_10[5].matrix.m[0][1];
    fVar2 = (float10)fcos(fVar7);
    fVar7 = (float10)fsin(fVar7);
    local_10[5].scaleX = (float)(fVar2 * (float10)local_8);
    local_10[5].scaleInterpFinalY = (float)(fVar7 * (float10)local_8);
    *(short *)(local_10[5].matrix.m[2] + 3) = param_1[0x26];
    *(short *)((int)local_10[5].matrix.m[2] + 0xe) = param_1[1];
    pfVar5 = (float *)(in_ECX + *param_1 * 0x560);
    pAVar6 = local_10;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      (pAVar6->rotation).x = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
    }
    pfVar5 = (float *)(in_ECX + 0x440 + *param_1 * 0x560);
    pAVar6 = local_10 + 4;
    for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      (pAVar6->rotation).x = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
    }
    pfVar5 = (float *)(in_ECX + 0x550 + *param_1 * 0x560);
    local_10[5].rotation.x = *pfVar5;
    local_10[5].rotation.y = pfVar5[1];
    local_10[5].rotation.z = pfVar5[2];
    *(undefined *)&local_10[5].angleVel.x = *(undefined *)(in_ECX + 0x55c + *param_1 * 0x560);
    *(undefined *)((int)&local_10[5].angleVel.x + 1) =
         *(undefined *)(in_ECX + 0x55d + *param_1 * 0x560);
    if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 2) == 0) {
      if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 4) == 0) {
        if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 8) != 0) {
          pfVar5 = (float *)(in_ECX + 0x330 + *param_1 * 0x560);
          pAVar6 = local_10 + 3;
          for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
          fVar9 = local_10->sprite->heightPx;
          if (fVar9 < 16.0 == (fVar9 == 16.0)) {
            fVar9 = local_10->sprite->heightPx;
            if (fVar9 < 32.0 == (fVar9 == 32.0)) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,local_10 + 3,(int)local_10[3].spriteNumber + (int)param_1[1]);
            }
            else if (local_10->anmFileIndex == 0x207) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,local_10 + 3,(int)local_10[3].spriteNumber + 1);
            }
            else {
              AnmManager::SetActiveSprite
                        (g_AnmManager,local_10 + 3,
                         (int)local_10[3].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
            }
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,local_10 + 3,
                       (int)local_10[3].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
          }
          *(undefined2 *)((int)local_10[5].matrix.m[3] + 2) = 4;
        }
      }
      else {
        pfVar5 = (float *)(in_ECX + 0x220 + *param_1 * 0x560);
        pAVar6 = local_10 + 2;
        for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
          (pAVar6->rotation).x = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
        }
        fVar9 = local_10->sprite->heightPx;
        if (fVar9 < 16.0 == (fVar9 == 16.0)) {
          fVar9 = local_10->sprite->heightPx;
          if (fVar9 < 32.0 == (fVar9 == 32.0)) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,local_10 + 2,(int)local_10[2].spriteNumber + (int)param_1[1]);
          }
          else if (local_10->anmFileIndex == 0x207) {
            AnmManager::SetActiveSprite(g_AnmManager,local_10 + 2,(int)local_10[2].spriteNumber + 1)
            ;
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,local_10 + 2,
                       (int)local_10[2].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
          }
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_10 + 2,
                     (int)local_10[2].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
        }
        *(undefined2 *)((int)local_10[5].matrix.m[3] + 2) = 3;
      }
    }
    else {
      pfVar5 = (float *)(in_ECX + 0x110 + *param_1 * 0x560);
      pAVar6 = local_10 + 1;
      for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
        (pAVar6->rotation).x = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
      }
      fVar9 = local_10->sprite->heightPx;
      if (fVar9 < 16.0 == (fVar9 == 16.0)) {
        fVar9 = local_10->sprite->heightPx;
        if (fVar9 < 32.0 == (fVar9 == 32.0)) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_10 + 1,(int)local_10[1].spriteNumber + (int)param_1[1]);
        }
        else if (local_10->anmFileIndex == 0x207) {
          AnmManager::SetActiveSprite(g_AnmManager,local_10 + 1,(int)local_10[1].spriteNumber + 1);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_10 + 1,
                     (int)local_10[1].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
        }
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,local_10 + 1,
                   (int)local_10[1].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
      }
      *(undefined2 *)((int)local_10[5].matrix.m[3] + 2) = 2;
    }
    AnmManager::SetActiveSprite(g_AnmManager,local_10,(int)local_10->spriteNumber + (int)param_1[1])
    ;
    fVar9 = local_10->sprite->heightPx;
    if (fVar9 < 16.0 == (fVar9 == 16.0)) {
      fVar9 = local_10->sprite->heightPx;
      if (fVar9 < 32.0 == (fVar9 == 32.0)) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,local_10 + 4,(int)local_10[4].spriteNumber + (int)param_1[1]);
      }
      else if (local_10->anmFileIndex == 0x207) {
        AnmManager::SetActiveSprite(g_AnmManager,local_10 + 4,(int)local_10[4].spriteNumber + 1);
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,local_10 + 4,
                   (int)local_10[4].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
      }
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,local_10 + 4,
                 (int)local_10[4].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
    }
    if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 0x10) == 0) {
      if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 0x20) != 0) {
        local_10[5].currentTimeInScript.current = *(int *)(param_1 + 0x10);
        local_10[5].matrix.m[0][2] = *(float *)(param_1 + 0x12);
        local_10[5].matrix.m[1][3] = *(float *)(param_1 + 0x18);
      }
    }
    else {
      if (*(float *)(param_1 + 0x12) < -999.0 == (*(float *)(param_1 + 0x12) == -999.0)) {
        fVar9 = *(float *)(param_1 + 0x10);
        fVar2 = (float10)fcos((float10)*(float *)(param_1 + 0x12));
        fVar7 = (float10)fsin((float10)*(float *)(param_1 + 0x12));
        local_10[5].uvScrollPos.x = (float)(fVar2 * (float10)fVar9);
        local_10[5].uvScrollPos.y = (float)(fVar7 * (float10)fVar9);
      }
      else {
        fVar9 = *(float *)(param_1 + 0x10);
        fVar2 = (float10)fcos((float10)local_14);
        fVar7 = (float10)fsin((float10)local_14);
        local_10[5].uvScrollPos.x = (float)(fVar2 * (float10)fVar9);
        local_10[5].uvScrollPos.y = (float)(fVar7 * (float10)fVar9);
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        local_10[5].matrix.m[1][3] = 1.401284e-40;
      }
      else {
        local_10[5].matrix.m[1][3] = *(float *)(param_1 + 0x18);
      }
      local_10[5].currentTimeInScript.previous = 0;
    }
    if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 0x1c0) != 0) {
      local_10[5].matrix.m[0][3] = *(float *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x12) < 0.0) {
        local_10[5].matrix.m[0][0] = local_8;
      }
      else {
        local_10[5].matrix.m[0][0] = *(float *)(param_1 + 0x12);
      }
      local_10[5].matrix.m[2][0] = *(float *)(param_1 + 0x18);
      local_10[5].matrix.m[2][2] = *(float *)(param_1 + 0x1a);
      local_10[5].matrix.m[2][1] = 0.0;
    }
    if ((*(ushort *)(local_10[5].matrix.m[2] + 3) & 0xc00) != 0) {
      if (*(float *)(param_1 + 0x10) < 0.0) {
        local_10[5].matrix.m[0][0] = local_8;
      }
      else {
        local_10[5].matrix.m[0][0] = *(float *)(param_1 + 0x10);
      }
      local_10[5].matrix.m[2][2] = *(float *)(param_1 + 0x18);
      local_10[5].matrix.m[2][1] = 0.0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

