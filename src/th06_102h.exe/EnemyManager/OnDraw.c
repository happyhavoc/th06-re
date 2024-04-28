
ChainCallbackResult EnemyManager::OnDraw(EnemyManager *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Enemy *pEVar5;
  Enemy *local_14;
  int local_10;
  AnmVm *local_c;
  int local_8;
  
  local_14 = param_1->enemies;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if (((char)local_14->flags1 < '\0') && ((local_14->flags3 >> 3 & 1) == 0)) {
      pEVar5 = local_14;
      for (local_10 = 0; local_c = pEVar5->vms, local_10 < 4; local_10 = local_10 + 1) {
        if (-1 < pEVar5->vms[0].anmFileIndex) {
          if (pEVar5->vms[0].autoRotate != 0) {
            pEVar5->vms[0].rotation.z = local_14->angle;
          }
          fVar1 = (local_14->position).z;
          fVar2 = pEVar5->vms[0].offset.z;
          fVar3 = (local_14->position).y;
          fVar4 = pEVar5->vms[0].offset.y;
          pEVar5->vms[0].pos.x = (local_14->position).x + pEVar5->vms[0].offset.x;
          pEVar5->vms[0].pos.y = fVar3 + fVar4;
          pEVar5->vms[0].pos.z = fVar1 + fVar2;
          pEVar5->vms[0].pos.z = 0.495;
          AnmManager::FUN_00433590(g_AnmManager,local_c);
        }
        pEVar5 = (Enemy *)local_c;
      }
      if ((local_14->flags3 >> 1 & 1) != 0) {
        (local_14->primary_vm).rotation.z = local_14->angle;
      }
      fVar1 = (local_14->position).z;
      fVar2 = (local_14->primary_vm).offset.z;
      fVar3 = (local_14->position).y;
      fVar4 = (local_14->primary_vm).offset.y;
      (local_14->primary_vm).pos.x = (local_14->position).x + (local_14->primary_vm).offset.x;
      (local_14->primary_vm).pos.y = fVar3 + fVar4;
      (local_14->primary_vm).pos.z = fVar1 + fVar2;
      (local_14->primary_vm).pos.z = 0.494;
      AnmManager::FUN_00433590(g_AnmManager,&local_14->primary_vm);
      for (local_10 = 4; local_10 < 8; local_10 = local_10 + 1) {
        if (-1 < *(short *)(&local_c->rotation + 0xf)) {
          if (*(ushort *)((int)(&local_c->rotation + 0xb) + 4) != 0) {
            (local_c->rotation).z = local_14->angle;
          }
          fVar1 = (local_14->position).z;
          fVar2 = (&local_c->rotation)[0x13].z;
          fVar3 = (local_14->position).y;
          fVar4 = (&local_c->rotation)[0x13].y;
          (&local_c->rotation)[0xc].x = (local_14->position).x + (&local_c->rotation)[0x13].x;
          (&local_c->rotation)[0xc].y = fVar3 + fVar4;
          (&local_c->rotation)[0xc].z = fVar1 + fVar2;
          (&local_c->rotation)[0xc].z = 0.495;
          AnmManager::FUN_00433590(g_AnmManager,local_c);
        }
        local_c = local_c + 1;
      }
    }
    local_14 = local_14 + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

