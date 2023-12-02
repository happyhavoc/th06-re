
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c180(int param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  AnmVm *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_2 + 0x10) < 2) {
    EffectManager::FUN_0040ef50((int *)&g_EffectManager,0xc,(float *)(param_1 + 0xc6c),1,0xffffffff)
    ;
    g_GameManager.field6_0x18[20] = *(undefined *)(param_2 + 0x10);
  }
  else {
    local_10 = 0xe;
    local_18 = (AnmVm *)&DAT_005ab5f8;
    if ((int)g_GameManager.difficulty < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((*(short *)((int)local_18[5].matrix.m[3] + 2) != 0) &&
            (*(short *)((int)local_18[5].matrix.m[3] + 2) != 5)) &&
           ((local_18->sprite != (AnmLoadedSprite *)0x0 &&
            (((30.0 <= local_18->sprite->heightPx &&
              (*(short *)((int)local_18[5].matrix.m[2] + 0xe) != 5)) &&
             (uVar2 = GetRandomU16(&g_Rng.seed), (uVar2 & 3) == 0)))))) {
          *(undefined2 *)((int)local_18[5].matrix.m[2] + 0xe) = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_18,
                     (int)local_18->anotherSpriteNumber +
                     (int)*(short *)((int)local_18[5].matrix.m[2] + 0xe));
          fVar5 = local_18[5].angleVel.y - _DAT_006caa68;
          fVar1 = local_18[5].angleVel.z - _DAT_006caa6c;
          fVar3 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar1 * fVar1));
          if ((float)fVar3 <= 128.0) {
            fVar5 = GetRandomF32ZeroToOne(&g_Rng.seed);
            fVar3 = (float10)Player::FUN_00428680();
            local_18[5].matrix.m[0][1] =
                 (float)(fVar3 + (float10)1.570796 + (float10)(fVar5 * 6.283185));
          }
          else {
            fVar5 = GetRandomF32ZeroToOne(&g_Rng.seed);
            local_18[5].matrix.m[0][1] = fVar5 * 2.356194 + 0.7853982;
          }
          fVar5 = local_18[5].currentTimeInScript.subFrame;
          fVar4 = (float10)local_18[5].matrix.m[0][1];
          fVar3 = (float10)fcos(fVar4);
          fVar4 = (float10)fsin(fVar4);
          local_18[5].scaleX = (float)(fVar3 * (float10)fVar5);
          local_18[5].scaleInterpFinalY = (float)(fVar4 * (float10)fVar5);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (AnmVm *)(local_18[5].matrix.m[3] + 2);
      }
    }
    else {
      local_10 = 0x34;
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if ((((*(short *)((int)local_18[5].matrix.m[3] + 2) != 0) &&
             (*(short *)((int)local_18[5].matrix.m[3] + 2) != 5)) &&
            (local_18->sprite != (AnmLoadedSprite *)0x0)) &&
           (((30.0 <= local_18->sprite->heightPx &&
             (*(short *)((int)local_18[5].matrix.m[2] + 0xe) != 5)) &&
            (uVar2 = GetRandomU16(&g_Rng.seed), (uVar2 & 3) == 0)))) {
          *(undefined2 *)((int)local_18[5].matrix.m[2] + 0xe) = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_18,
                     (int)local_18->anotherSpriteNumber +
                     (int)*(short *)((int)local_18[5].matrix.m[2] + 0xe));
          fVar5 = local_18[5].angleVel.y - _DAT_006caa68;
          fVar1 = local_18[5].angleVel.z - _DAT_006caa6c;
          fVar3 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar1 * fVar1));
          if ((float)fVar3 <= 128.0) {
            fVar5 = GetRandomF32ZeroToOne(&g_Rng.seed);
            fVar3 = (float10)Player::FUN_00428680();
            local_18[5].matrix.m[0][1] =
                 (float)(fVar3 + (float10)1.570796 + (float10)(fVar5 * 6.283185));
          }
          else {
            fVar5 = GetRandomF32ZeroToOne(&g_Rng.seed);
            local_18[5].matrix.m[0][1] = fVar5 * 6.283185;
          }
          fVar5 = local_18[5].currentTimeInScript.subFrame;
          fVar4 = (float10)local_18[5].matrix.m[0][1];
          fVar3 = (float10)fcos(fVar4);
          fVar4 = (float10)fsin(fVar4);
          local_18[5].scaleX = (float)(fVar3 * (float10)fVar5);
          local_18[5].scaleInterpFinalY = (float)(fVar4 * (float10)fVar5);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        local_18 = (AnmVm *)(local_18[5].matrix.m[3] + 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  return;
}

