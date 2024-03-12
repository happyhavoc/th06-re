
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040de00(Enemy *param_1,AnmRawInstr *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  float10 fVar6;
  int local_7c;
  int local_74;
  AnmVm *local_68;
  int local_64;
  int anm_vm_var3;
  undefined4 local_5c [22];
  
  anm_vm_var3 = 0;
  local_74 = 0x5ab5f8;
  puVar4 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((*(short *)(local_74 + 0x5be) != 0) && (*(short *)(local_74 + 0x5be) != 5)) &&
        (*(int *)(local_74 + 0xc0) != 0)) && (30.0 <= *(float *)(*(int *)(local_74 + 0xc0) + 0x2c)))
    {
      anm_vm_var3 = anm_vm_var3 + 1;
      dVar2 = (double)(*(float *)(local_74 + 0x564) - (param_1->position).y);
      FUN_0045be40(SUB81(dVar2,0),(char)((ulonglong)dVar2 >> 0x20));
      local_68 = (AnmVm *)g_BulletManager.bullets;
      for (local_7c = 0; local_7c < 0x280; local_7c = local_7c + 1) {
        if ((((*(short *)((int)local_68[5].matrix.m[3] + 2) != 0) &&
             (*(short *)((int)local_68[5].matrix.m[3] + 2) != 5)) &&
            ((local_68->sprite != (AnmLoadedSprite *)0x0 &&
             ((fVar1 = local_68->sprite->heightPx, fVar1 < 30.0 != NAN(fVar1) &&
              (fVar1 = local_68[5].currentTimeInScript.subFrame, NAN(fVar1) != (fVar1 == 0.0)))))))
           && (fVar5 = (float10)FUN_0045bc34((double)((local_68[5].angleVel.y -
                                                      *(float *)(local_74 + 0x560)) *
                                                      (local_68[5].angleVel.y -
                                                      *(float *)(local_74 + 0x560)) +
                                                     (local_68[5].angleVel.z -
                                                     *(float *)(local_74 + 0x564)) *
                                                     (local_68[5].angleVel.z -
                                                     *(float *)(local_74 + 0x564)))),
              (float)fVar5 < 64.0 != NAN((float)fVar5))) {
          *(ushort *)(local_68[5].matrix.m[2] + 3) = *(ushort *)(local_68[5].matrix.m[2] + 3) | 0x10
          ;
          local_68[5].currentTimeInScript.subFrame = 0.01;
          local_68[5].matrix.m[1][2] = 0.0;
          local_68[5].matrix.m[1][1] = 0.0;
          local_68[5].matrix.m[1][0] = -NAN;
          local_68[5].matrix.m[1][3] = 1.681558e-43;
          dVar2 = (double)(local_68[5].angleVel.z - (param_1->position).y);
          FUN_0045be40(SUB81(dVar2,0),(char)((ulonglong)dVar2 >> 0x20));
          local_68[5].matrix.m[0][1] =
               ((float)extraout_ST0_00 - (float)extraout_ST0) * 2.2 + (float)extraout_ST0;
          fVar6 = (float10)local_68[5].matrix.m[0][1];
          fVar5 = (float10)fcos(fVar6);
          fVar6 = (float10)fsin(fVar6);
          local_68[5].uvScrollPos.x = (float)(fVar5 * (float10)0.01);
          local_68[5].uvScrollPos.y = (float)(fVar6 * (float10)0.01);
          *(short *)((int)local_68[5].matrix.m[2] + 0xe) =
               *(short *)((int)local_68[5].matrix.m[2] + 0xe) + 1;
          AnmManager::SetActiveSprite
                    (g_AnmManager,local_68,
                     (int)local_68->anotherSpriteNumber +
                     (int)*(short *)((int)local_68[5].matrix.m[2] + 0xe));
        }
        local_68 = (AnmVm *)(local_68[5].matrix.m[3] + 2);
      }
    }
    local_74 = local_74 + 0x5c4;
  }
  FUN_0040d930(param_1,param_2);
  (param_1->current_context).var3 = anm_vm_var3;
  return;
}

