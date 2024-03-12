
void __thiscall BulletManager::FUN_00414160(BulletManager *this,int param_1)

{
  float10 fVar1;
  int iVar2;
  Bullet *pBVar3;
  float10 fVar4;
  float local_28;
  Laser *local_20;
  Bullet *bullets;
  int index_1;
  D3DXVECTOR3 local_10;
  
  bullets = g_BulletManager.bullets;
  for (index_1 = 0; index_1 < 0x280; index_1 = index_1 + 1) {
    if ((bullets->state != 0) && (bullets->state != 5)) {
      if (param_1 == 0) {
        bullets->state = 5;
      }
      else {
        ItemManager::SpawnItem((ItemManager *)&g_ItemManager,&bullets->pos,6,1);
        pBVar3 = bullets;
        for (iVar2 = 0x171; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pBVar3->vms).vm0.rotation.x = 0.0;
          pBVar3 = (Bullet *)&(pBVar3->vms).vm0.rotation.y;
        }
      }
    }
    bullets = bullets + 1;
  }
  local_20 = this->lasers;
  for (index_1 = 0; index_1 < 0x40; index_1 = index_1 + 1) {
    if (local_20->in_use != 0) {
      if (local_20->state < 2) {
        local_20->state = 2;
        (local_20->timer).current = 0;
        (local_20->timer).subFrame = 0.0;
        (local_20->timer).previous = -999;
        if (param_1 != 0) {
          local_28 = local_20->start_offset;
          fVar1 = (float10)fcos((float10)local_20->angle);
          fVar4 = (float10)fsin((float10)local_20->angle);
          for (; local_28 < local_20->end_offset; local_28 = local_28 + 32.0) {
            local_10.x = (float)fVar1 * local_28 + (local_20->pos).x;
            local_10.y = (float)fVar4 * local_28 + (local_20->pos).y;
            local_10.z = 0.0;
            ItemManager::SpawnItem((ItemManager *)&g_ItemManager,&local_10,6,1);
          }
        }
      }
      local_20->graze_interval = 0;
    }
    local_20 = local_20 + 1;
  }
  return;
}

