
undefined4 * __thiscall
EnemyManager::SpawnEnemy
          (EnemyManager *this,short param_1,D3DXVECTOR3 *pos,short life,byte item_drop,int score)

{
  int iVar1;
  Enemy *pEVar2;
  Enemy *pEVar3;
  Enemy *local_c;
  int local_8;
  
  local_c = this->enemies;
  local_8 = 0;
  while( true ) {
    if (0xff < local_8) {
      return (undefined4 *)local_c;
    }
    if (-1 < (char)local_c->flags1) break;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
  }
  pEVar2 = &this->template;
  pEVar3 = local_c;
  for (iVar1 = 0x3b2; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pEVar3->primary_vm).rotation.x = (pEVar2->primary_vm).rotation.x;
    pEVar2 = (Enemy *)&(pEVar2->primary_vm).rotation.y;
    pEVar3 = (Enemy *)&(pEVar3->primary_vm).rotation.y;
  }
  if (-1 < life) {
    local_c->life = (int)life;
  }
  (local_c->position).x = pos->x;
  (local_c->position).y = pos->y;
  (local_c->position).z = pos->z;
  EclManager::FUN_00407440(&g_EclManager,&local_c->current_context,param_1);
  EclManager::run_ecl(local_c);
  local_c->color = (local_c->primary_vm).color;
  local_c->item_drop = item_drop;
  if (-1 < life) {
    local_c->life = (int)life;
  }
  if (-1 < score) {
    local_c->score = score;
  }
  local_c->max_life = local_c->life;
  return (undefined4 *)local_c;
}

