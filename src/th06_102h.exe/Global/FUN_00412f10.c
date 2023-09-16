
undefined4 FUN_00412f10(int param_1)

{
  float fVar1;
  float fVar2;
  AnmLoadedSprite *pAVar3;
  float fVar4;
  AnmVm *pAVar5;
  AnmVm *local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  local_14 = (AnmVm *)(param_1 + 0xed0);
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if ((*(char *)&local_14[0xd].flags < '\0') &&
       ((*(byte *)((int)&local_14[0xd].flags + 2) >> 3 & 1) == 0)) {
      pAVar5 = local_14;
      for (local_10 = 0; local_c = pAVar5 + 1, local_10 < 4; local_10 = local_10 + 1) {
        if (-1 < pAVar5[1].anmFileIndex) {
          if (pAVar5[1].autoRotate != 0) {
            pAVar5[1].rotation.z = local_14[0xb].posInterpFinal.z;
          }
          fVar1 = (float)local_14[0xb].alphaInterpInitial;
          fVar2 = pAVar5[1].pos2.z;
          pAVar3 = local_14[0xb].sprite;
          fVar4 = pAVar5[1].pos2.y;
          pAVar5[1].pos.x = (float)local_14[0xb].currentInstruction + pAVar5[1].pos2.x;
          pAVar5[1].pos.y = (float)pAVar3 + fVar4;
          pAVar5[1].pos.z = fVar1 + fVar2;
          pAVar5[1].pos.z = 0.495;
          AnmManager::FUN_00433590(DAT_006d4588,local_c);
        }
        pAVar5 = local_c;
      }
      if ((*(byte *)((int)&local_14[0xd].flags + 2) >> 1 & 1) != 0) {
        (local_14->rotation).z = local_14[0xb].posInterpFinal.z;
      }
      fVar1 = (float)local_14[0xb].alphaInterpInitial;
      fVar2 = (local_14->pos2).z;
      pAVar3 = local_14[0xb].sprite;
      fVar4 = (local_14->pos2).y;
      (local_14->pos).x = (float)local_14[0xb].currentInstruction + (local_14->pos2).x;
      (local_14->pos).y = (float)pAVar3 + fVar4;
      (local_14->pos).z = fVar1 + fVar2;
      (local_14->pos).z = 0.494;
      AnmManager::FUN_00433590(DAT_006d4588,local_14);
      for (local_10 = 4; local_10 < 8; local_10 = local_10 + 1) {
        if (-1 < local_c->anmFileIndex) {
          if (local_c->autoRotate != 0) {
            (local_c->rotation).z = local_14[0xb].posInterpFinal.z;
          }
          fVar1 = (float)local_14[0xb].alphaInterpInitial;
          fVar2 = (local_c->pos2).z;
          pAVar3 = local_14[0xb].sprite;
          fVar4 = (local_c->pos2).y;
          (local_c->pos).x = (float)local_14[0xb].currentInstruction + (local_c->pos2).x;
          (local_c->pos).y = (float)pAVar3 + fVar4;
          (local_c->pos).z = fVar1 + fVar2;
          (local_c->pos).z = 0.495;
          AnmManager::FUN_00433590(DAT_006d4588,local_c);
        }
        local_c = local_c + 1;
      }
    }
    local_14 = (AnmVm *)&local_14[0xd].posInterpTime.current;
  }
  return 1;
}

