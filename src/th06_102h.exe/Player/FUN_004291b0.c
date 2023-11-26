
void Player::FUN_004291b0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  AnmVm *pAVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float local_38;
  AnmVm *local_18;
  float local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + 0x9c0 + local_10 * 0xc) != 0) {
      FUN_004241e5();
    }
  }
  local_18 = (AnmVm *)(param_1 + 0xa28);
  for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
    if (*(short *)((int)local_18[1].matrix.m[0] + 2) != 0) {
      sVar3 = *(short *)(local_18[1].matrix.m[0] + 1);
      if (sVar3 == 1) {
        if (*(short *)((int)local_18[1].matrix.m[0] + 2) == 1) {
          if (((*(float *)(param_1 + 0xa1c) <= -100.0) ||
              (0x27 < local_18[1].currentTimeInScript.current)) ||
             (local_18[1].currentTimeInScript.current == local_18[1].currentTimeInScript.previous))
          {
            fVar2 = local_18[1].uvScrollPos.x;
            if (fVar2 < 10.0 != NAN(fVar2)) {
              local_18[1].uvScrollPos.x = local_18[1].uvScrollPos.x + 0.3333333;
              fVar2 = local_18[1].scaleY;
              fVar4 = local_18[1].scaleX;
              fVar9 = (float10)FUN_0045bc34((double)(fVar2 * fVar2 + fVar4 * fVar4));
              local_18[1].scaleY = (fVar2 * local_18[1].uvScrollPos.x) / (float)fVar9;
              local_18[1].scaleX = (fVar4 * local_18[1].uvScrollPos.x) / (float)fVar9;
            }
          }
          else {
            fVar2 = *(float *)(param_1 + 0xa1c) - local_18[1].rotation.x;
            fVar4 = *(float *)(param_1 + 0xa20) - local_18[1].rotation.y;
            fVar9 = (float10)FUN_0045bc34((double)(fVar2 * fVar2 + fVar4 * fVar4));
            local_14 = (float)fVar9 / (local_18[1].uvScrollPos.x / 4.0);
            if (local_14 < 1.0 != NAN(local_14)) {
              local_14 = 1.0;
            }
            fVar5 = fVar2 / local_14 + local_18[1].scaleY;
            fVar4 = fVar4 / local_14 + local_18[1].scaleX;
            fVar9 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar4 * fVar4));
            fVar2 = (float)fVar9;
            local_38 = fVar2;
            if (10.0 < fVar2) {
              local_38 = 10.0;
            }
            local_18[1].uvScrollPos.x = local_38;
            fVar1 = local_18[1].uvScrollPos.x;
            if (fVar1 < 1.0 != NAN(fVar1)) {
              local_18[1].uvScrollPos.x = 1.0;
            }
            local_18[1].scaleY = (fVar5 * local_18[1].uvScrollPos.x) / fVar2;
            local_18[1].scaleX = (fVar4 * local_18[1].uvScrollPos.x) / fVar2;
          }
        }
      }
      else if (sVar3 == 2) {
        if (*(short *)((int)local_18[1].matrix.m[0] + 2) == 1) {
          local_18[1].scaleX = local_18[1].scaleX - 0.3;
        }
      }
      else if (sVar3 == 3) {
        if (*(int *)(param_1 + 0x9c0 + *(short *)((int)local_18[1].matrix.m[0] + 6) * 0xc) == 0x46)
        {
          local_18->pendingInterrupt = 1;
        }
        else if (*(int *)(param_1 + 0x9c0 + *(short *)((int)local_18[1].matrix.m[0] + 6) * 0xc) == 1
                ) {
          local_18->pendingInterrupt = 1;
        }
        pfVar8 = (float *)(param_1 + 0x4a0 + (*(short *)(local_18[1].matrix.m[0] + 2) + -1) * 0xc);
        local_18[1].rotation.x = *pfVar8;
        local_18[1].rotation.y = pfVar8[1];
        local_18[1].rotation.z = pfVar8[2];
        local_18[1].rotation.x = local_18[1].rotation.x + local_18[1].scaleInterpFinalY;
        local_18[1].rotation.y = local_18[1].rotation.y / 2.0;
        local_18[1].rotation.z = 0.44;
        fVar2 = local_18[1].rotation.y;
        local_18->scaleY = (fVar2 + fVar2) / 14.0;
        fVar2 = local_18[1].rotation.y;
        local_18[1].angleVel.y = fVar2 + fVar2;
      }
      pAVar6 = local_18 + 1;
      (pAVar6->rotation).x = g_Supervisor.field81_0x1a8 * local_18[1].scaleY + (pAVar6->rotation).x;
      (local_18->pos).x = (pAVar6->rotation).x;
      pfVar8 = &local_18[1].rotation.y;
      *pfVar8 = g_Supervisor.field81_0x1a8 * local_18[1].scaleX + *pfVar8;
      (local_18->pos).y = *pfVar8;
      (local_18->pos).z = local_18[1].rotation.z;
      if ((*(short *)(local_18[1].matrix.m[0] + 1) != 3) &&
         (iVar7 = FUN_0041b5e1(local_18[1].rotation.x,local_18[1].rotation.y,
                               local_18->sprite->widthPx,local_18->sprite->heightPx), iVar7 == 0)) {
        *(undefined2 *)((int)local_18[1].matrix.m[0] + 2) = 0;
      }
      iVar7 = AnmManager::ExecuteScript(g_AnmManager,local_18);
      if (iVar7 != 0) {
        *(undefined2 *)((int)local_18[1].matrix.m[0] + 2) = 0;
      }
      local_18[1].currentTimeInScript.previous = local_18[1].currentTimeInScript.current;
      Supervisor::FUN_00424285
                (&g_Supervisor,&local_18[1].currentTimeInScript.current,
                 &local_18[1].currentTimeInScript.subFrame);
    }
    local_18 = (AnmVm *)(local_18[1].matrix.m[0] + 3);
  }
  return;
}

