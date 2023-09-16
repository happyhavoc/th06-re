
undefined4 FUN_004135b0(short *param_1,uint param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  float *pfVar5;
  AnmVm *pAVar6;
  float10 fVar7;
  float10 fVar8;
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
    if (*(short *)((int)&local_10[5].matrix.field0_0x0 + 0x32) == 0) break;
    local_10 = (AnmVm *)(local_10[5].matrix.field0_0x0.m[3] + 2);
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
    *(undefined2 *)((int)&local_10[5].matrix.field0_0x0 + 0x32) = 1;
    *(undefined *)((int)&local_10[5].matrix.field0_0x0 + 0x36) = 1;
    local_10[5].currentTimeInScript.subFrame = local_8;
    fVar7 = (float10)FUN_0041e850(local_14,0);
    local_10[5].matrix.field0_0x0.field0._12 = (float)fVar7;
    local_10[5].angleVel.y = *(float *)(param_1 + 2);
    local_10[5].angleVel.z = *(float *)(param_1 + 4);
    local_10[5].scaleX = *(float *)(param_1 + 6);
    local_10[5].scaleX = 0.1;
    fVar8 = (float10)local_10[5].matrix.field0_0x0.field0._12;
    fVar7 = (float10)fcos(fVar8);
    fVar8 = (float10)fsin(fVar8);
    local_10[5].scaleY = (float)(fVar7 * (float10)local_8);
    local_10[5].scaleInterpFinalY = (float)(fVar8 * (float10)local_8);
    *(short *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) = param_1[0x26];
    *(short *)((int)&local_10[5].matrix.field0_0x0 + 0x2e) = param_1[1];
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
    if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 2) == 0) {
      if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 4) == 0) {
        if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 8) != 0) {
          pfVar5 = (float *)(in_ECX + 0x330 + *param_1 * 0x560);
          pAVar6 = local_10 + 3;
          for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pAVar6->rotation).x = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pAVar6 = (AnmVm *)&(pAVar6->rotation).y;
          }
          fVar2 = local_10->sprite->heightPx;
          if (fVar2 < 16.0 == (fVar2 == 16.0)) {
            fVar2 = local_10->sprite->heightPx;
            if (fVar2 < 32.0 == (fVar2 == 32.0)) {
              AnmManager::FUN_004323a0
                        (g_AnmManager,local_10 + 3,(int)local_10[3].spriteNumber + (int)param_1[1]);
            }
            else if (local_10->anmFileIndex == 0x207) {
              AnmManager::FUN_004323a0(g_AnmManager,local_10 + 3,local_10[3].spriteNumber + 1);
            }
            else {
              AnmManager::FUN_004323a0
                        (g_AnmManager,local_10 + 3,
                         (int)local_10[3].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
            }
          }
          else {
            AnmManager::FUN_004323a0
                      (g_AnmManager,local_10 + 3,
                       (int)local_10[3].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
          }
          *(undefined2 *)((int)&local_10[5].matrix.field0_0x0 + 0x32) = 4;
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
        fVar2 = local_10->sprite->heightPx;
        if (fVar2 < 16.0 == (fVar2 == 16.0)) {
          fVar2 = local_10->sprite->heightPx;
          if (fVar2 < 32.0 == (fVar2 == 32.0)) {
            AnmManager::FUN_004323a0
                      (g_AnmManager,local_10 + 2,(int)local_10[2].spriteNumber + (int)param_1[1]);
          }
          else if (local_10->anmFileIndex == 0x207) {
            AnmManager::FUN_004323a0(g_AnmManager,local_10 + 2,local_10[2].spriteNumber + 1);
          }
          else {
            AnmManager::FUN_004323a0
                      (g_AnmManager,local_10 + 2,
                       (int)local_10[2].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
          }
        }
        else {
          AnmManager::FUN_004323a0
                    (g_AnmManager,local_10 + 2,
                     (int)local_10[2].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
        }
        *(undefined2 *)((int)&local_10[5].matrix.field0_0x0 + 0x32) = 3;
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
      fVar2 = local_10->sprite->heightPx;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = local_10->sprite->heightPx;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          AnmManager::FUN_004323a0
                    (g_AnmManager,local_10 + 1,(int)local_10[1].spriteNumber + (int)param_1[1]);
        }
        else if (local_10->anmFileIndex == 0x207) {
          AnmManager::FUN_004323a0(g_AnmManager,local_10 + 1,local_10[1].spriteNumber + 1);
        }
        else {
          AnmManager::FUN_004323a0
                    (g_AnmManager,local_10 + 1,
                     (int)local_10[1].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
        }
      }
      else {
        AnmManager::FUN_004323a0
                  (g_AnmManager,local_10 + 1,
                   (int)local_10[1].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
      }
      *(undefined2 *)((int)&local_10[5].matrix.field0_0x0 + 0x32) = 2;
    }
    AnmManager::FUN_004323a0(g_AnmManager,local_10,(int)local_10->spriteNumber + (int)param_1[1]);
    fVar2 = local_10->sprite->heightPx;
    if (fVar2 < 16.0 == (fVar2 == 16.0)) {
      fVar2 = local_10->sprite->heightPx;
      if (fVar2 < 32.0 == (fVar2 == 32.0)) {
        AnmManager::FUN_004323a0
                  (g_AnmManager,local_10 + 4,(int)local_10[4].spriteNumber + (int)param_1[1]);
      }
      else if (local_10->anmFileIndex == 0x207) {
        AnmManager::FUN_004323a0(g_AnmManager,local_10 + 4,local_10[4].spriteNumber + 1);
      }
      else {
        AnmManager::FUN_004323a0
                  (g_AnmManager,local_10 + 4,
                   (int)local_10[4].spriteNumber + *(int *)(&DAT_00476480 + param_1[1] * 4));
      }
    }
    else {
      AnmManager::FUN_004323a0
                (g_AnmManager,local_10 + 4,
                 (int)local_10[4].spriteNumber + *(int *)(&DAT_00476440 + param_1[1] * 4));
    }
    if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 0x10) == 0) {
      if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 0x20) != 0) {
        local_10[5].currentTimeInScript.current = *(int *)(param_1 + 0x10);
        local_10[5].matrix.field0_0x0.field0._13 = *(float *)(param_1 + 0x12);
        local_10[5].matrix.field0_0x0.field0._24 = *(float *)(param_1 + 0x18);
      }
    }
    else {
      if (*(float *)(param_1 + 0x12) < -999.0 == (*(float *)(param_1 + 0x12) == -999.0)) {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar7 = (float10)fcos((float10)*(float *)(param_1 + 0x12));
        fVar8 = (float10)fsin((float10)*(float *)(param_1 + 0x12));
        local_10[5].uvScrollPos.x = (float)(fVar7 * (float10)fVar2);
        local_10[5].uvScrollPos.y = (float)(fVar8 * (float10)fVar2);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x10);
        fVar7 = (float10)fcos((float10)local_14);
        fVar8 = (float10)fsin((float10)local_14);
        local_10[5].uvScrollPos.x = (float)(fVar7 * (float10)fVar2);
        local_10[5].uvScrollPos.y = (float)(fVar8 * (float10)fVar2);
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        local_10[5].matrix.field0_0x0.field0._24 = 1.401284e-40;
      }
      else {
        local_10[5].matrix.field0_0x0.field0._24 = *(float *)(param_1 + 0x18);
      }
      local_10[5].currentTimeInScript.previous = 0;
    }
    if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 0x1c0) != 0) {
      local_10[5].matrix.field0_0x0.field0._14 = *(float *)(param_1 + 0x10);
      if (*(float *)(param_1 + 0x12) < 0.0) {
        local_10[5].matrix.field0_0x0.field0._11 = local_8;
      }
      else {
        local_10[5].matrix.field0_0x0.field0._11 = *(float *)(param_1 + 0x12);
      }
      local_10[5].matrix.field0_0x0.field0._31 = *(float *)(param_1 + 0x18);
      local_10[5].matrix.field0_0x0.field0._33 = *(float *)(param_1 + 0x1a);
      local_10[5].matrix.field0_0x0.field0._32 = 0.0;
    }
    if ((*(ushort *)((int)&local_10[5].matrix.field0_0x0 + 0x2c) & 0xc00) != 0) {
      if (*(float *)(param_1 + 0x10) < 0.0) {
        local_10[5].matrix.field0_0x0.field0._11 = local_8;
      }
      else {
        local_10[5].matrix.field0_0x0.field0._11 = *(float *)(param_1 + 0x10);
      }
      local_10[5].matrix.field0_0x0.field0._33 = *(float *)(param_1 + 0x18);
      local_10[5].matrix.field0_0x0.field0._32 = 0.0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

