
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void FUN_0040c180(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float10 fVar4;
  float10 fVar5;
  AnmVm *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_2 + 0x10) < 2) {
    FUN_0040ef50((int *)&AnmRelatedHugeStruct_00487fe0,0xc,(float *)(param_1 + 0xc6c),1,0xffffffff);
    DAT_0069bccc = *(undefined *)(param_2 + 0x10);
  }
  else {
    local_10 = 0xe;
    local_18 = (AnmVm *)&DAT_005ab5f8;
    if (DAT_0069bcb0 < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((*(short *)((int)local_18[5].matrix.m[3] + 2) != 0) &&
            (*(short *)((int)local_18[5].matrix.m[3] + 2) != 5)) &&
           ((local_18->sprite != (AnmLoadedSprite *)0x0 &&
            (((30.0 <= local_18->sprite->heightPx &&
              (*(short *)((int)local_18[5].matrix.m[2] + 0xe) != 5)) &&
             (uVar3 = FUN_0041e780(&DAT_0069d8f8), (uVar3 & 3) == 0)))))) {
          *(undefined2 *)((int)local_18[5].matrix.m[2] + 0xe) = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_18,
                     (int)local_18->anotherSpriteNumber +
                     (int)*(short *)((int)local_18[5].matrix.m[2] + 0xe));
          fVar1 = local_18[5].angleVel.y - DAT_006caa68;
          fVar2 = local_18[5].angleVel.z - DAT_006caa6c;
          fVar4 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar2 * fVar2));
          if ((float)fVar4 <= 128.0) {
            fVar4 = (float10)FUN_0041e820();
            fVar5 = (float10)FUN_00428680();
            local_18[5].matrix.m[0][1] =
                 (float)(fVar5 + (float10)1.570796 + (float10)(float)(fVar4 * (float10)6.283185));
          }
          else {
            fVar4 = (float10)FUN_0041e820();
            local_18[5].matrix.m[0][1] = (float)(fVar4 * (float10)2.356194 + (float10)0.7853982);
          }
          fVar1 = local_18[5].currentTimeInScript.subFrame;
          fVar5 = (float10)local_18[5].matrix.m[0][1];
          fVar4 = (float10)fcos(fVar5);
          fVar5 = (float10)fsin(fVar5);
          local_18[5].scaleX = (float)(fVar4 * (float10)fVar1);
          local_18[5].scaleInterpFinalY = (float)(fVar5 * (float10)fVar1);
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
            (uVar3 = FUN_0041e780(&DAT_0069d8f8), (uVar3 & 3) == 0)))) {
          *(undefined2 *)((int)local_18[5].matrix.m[2] + 0xe) = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_18,
                     (int)local_18->anotherSpriteNumber +
                     (int)*(short *)((int)local_18[5].matrix.m[2] + 0xe));
          fVar1 = local_18[5].angleVel.y - DAT_006caa68;
          fVar2 = local_18[5].angleVel.z - DAT_006caa6c;
          fVar4 = (float10)FUN_0045bc34((double)(fVar1 * fVar1 + fVar2 * fVar2));
          if ((float)fVar4 <= 128.0) {
            fVar4 = (float10)FUN_0041e820();
            fVar5 = (float10)FUN_00428680();
            local_18[5].matrix.m[0][1] =
                 (float)(fVar5 + (float10)1.570796 + (float10)(float)(fVar4 * (float10)6.283185));
          }
          else {
            fVar4 = (float10)FUN_0041e820();
            local_18[5].matrix.m[0][1] = (float)(fVar4 * (float10)6.283185);
          }
          fVar1 = local_18[5].currentTimeInScript.subFrame;
          fVar5 = (float10)local_18[5].matrix.m[0][1];
          fVar4 = (float10)fcos(fVar5);
          fVar5 = (float10)fsin(fVar5);
          local_18[5].scaleX = (float)(fVar4 * (float10)fVar1);
          local_18[5].scaleInterpFinalY = (float)(fVar5 * (float10)fVar1);
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

