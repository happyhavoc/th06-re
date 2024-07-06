
ChainCallbackResult EnemyManager::OnDraw(EnemyManager *param_1)

{
  float fVar1;
  float fVar2;
  Enemy *enemy;
  int local_10;
  Enemy *local_c;
  int local_8;
  Enemy *pEVar3;
  float enemyY;
  float enemyZ;
  
  enemy = param_1->enemies;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if (((char)enemy->flags1 < '\0') && ((enemy->flags3 >> 3 & 1) == 0)) {
      pEVar3 = enemy;
      for (local_10 = 0; local_c = (Enemy *)pEVar3->vms, local_10 < 4; local_10 = local_10 + 1) {
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
          AnmManager::Draw2(g_AnmManager,(AnmVm *)local_c);
        }
        pEVar3 = local_c;
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
      AnmManager::Draw2(g_AnmManager,&enemy->primary_vm);
      for (local_10 = 4; local_10 < 8; local_10 = local_10 + 1) {
        if (-1 < (local_c->primary_vm).anmFileIndex) {
          if ((local_c->primary_vm).autoRotate != 0) {
            (local_c->primary_vm).rotation.z = enemy->angle;
          }
          enemyZ = (enemy->position).z;
          fVar1 = (local_c->primary_vm).offset.z;
          enemyY = (enemy->position).y;
          fVar2 = (local_c->primary_vm).offset.y;
          (local_c->primary_vm).pos.x = (enemy->position).x + (local_c->primary_vm).offset.x;
          (local_c->primary_vm).pos.y = enemyY + fVar2;
          (local_c->primary_vm).pos.z = enemyZ + fVar1;
          (local_c->primary_vm).pos.z = 0.495;
          AnmManager::Draw2(g_AnmManager,&local_c->primary_vm);
        }
        local_c = (Enemy *)local_c->vms;
      }
    }
    enemy = enemy + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

