
ChainCallbackResult EnemyManager::OnDraw(EnemyManager *param_1)

{
  float fVar1;
  float fVar2;
  Enemy *pEVar3;
  Enemy *enemy;
  int local_10;
  AnmVm *local_c;
  int local_8;
  float enemyY;
  float enemyZ;
  
  enemy = param_1->enemies;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if (((char)enemy->flags1 < '\0') && ((enemy->flags3 >> 3 & 1) == 0)) {
      pEVar3 = enemy;
      for (local_10 = 0; local_c = pEVar3->vms, local_10 < 4; local_10 = local_10 + 1) {
        if (-1 < pEVar3->vms[0].anmFileIndex) {
          if (pEVar3->vms[0].autoRotate != 0) {
            pEVar3->vms[0].rotation.z = enemy->angle;
          }
          enemyZ = (enemy->position).z;
          fVar1 = pEVar3->vms[0].offset.z;
          enemyY = (enemy->position).y;
          fVar2 = pEVar3->vms[0].offset.y;
          pEVar3->vms[0].pos.x = (enemy->position).x + pEVar3->vms[0].offset.x;
          pEVar3->vms[0].pos.y = enemyY + fVar2;
          pEVar3->vms[0].pos.z = enemyZ + fVar1;
          pEVar3->vms[0].pos.z = 0.495;
          AnmManager::FUN_00433590(g_AnmManager,local_c);
        }
        pEVar3 = (Enemy *)local_c;
      }
      if ((enemy->flags3 >> 1 & 1) != 0) {
        (enemy->primary_vm).rotation.z = enemy->angle;
      }
      enemyZ = (enemy->position).z;
      fVar1 = (enemy->primary_vm).offset.z;
      enemyY = (enemy->position).y;
      fVar2 = (enemy->primary_vm).offset.y;
      (enemy->primary_vm).pos.x = (enemy->position).x + (enemy->primary_vm).offset.x;
      (enemy->primary_vm).pos.y = enemyY + fVar2;
      (enemy->primary_vm).pos.z = enemyZ + fVar1;
      (enemy->primary_vm).pos.z = 0.494;
      AnmManager::FUN_00433590(g_AnmManager,&enemy->primary_vm);
      for (local_10 = 4; local_10 < 8; local_10 = local_10 + 1) {
        if (-1 < *(short *)(&local_c->rotation + 0xf)) {
          if (*(ushort *)((int)(&local_c->rotation + 0xb) + 4) != 0) {
            (local_c->rotation).z = enemy->angle;
          }
          enemyZ = (enemy->position).z;
          fVar1 = (&local_c->rotation)[0x13].z;
          enemyY = (enemy->position).y;
          fVar2 = (&local_c->rotation)[0x13].y;
          (&local_c->rotation)[0xc].x = (enemy->position).x + (&local_c->rotation)[0x13].x;
          (&local_c->rotation)[0xc].y = enemyY + fVar2;
          (&local_c->rotation)[0xc].z = enemyZ + fVar1;
          (&local_c->rotation)[0xc].z = 0.495;
          AnmManager::FUN_00433590(g_AnmManager,local_c);
        }
        local_c = local_c + 1;
      }
    }
    enemy = enemy + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

