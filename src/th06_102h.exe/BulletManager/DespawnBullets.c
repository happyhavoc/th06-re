
int __thiscall th06::BulletManager::DespawnBullets(BulletManager *this,int param_1,int awardPoints)

{
  float10 fVar2;
  float local_34;
  Laser *local_2c;
  D3DXVECTOR3 local_28;
  Bullet *local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float10 fVar1;
  
  local_c = 0;
  local_8 = 2000;
  local_10 = 0;
  local_1c = g_BulletManager.bullets;
  for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
    if (local_1c->state != 0) {
      if (awardPoints != 0) {
        ItemManager::SpawnItem(&g_ItemManager,&local_1c->pos,ITEM_POINT_BULLET,1);
      }
      AsciiManager::CreatePopup1
                (&g_AsciiManager,&local_1c->pos,local_8,((local_8 < param_1) - 1 & 0xffffff01) - 1);
      local_c = local_c + local_8;
      local_10 = local_10 + 1;
      local_8 = local_8 + 10;
      if (param_1 < local_8) {
        local_8 = param_1;
      }
      local_1c->state = 5;
    }
    local_1c = local_1c + 1;
  }
  local_2c = this->lasers;
  for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
    if (local_2c->in_use != 0) {
      if (local_2c->state < 2) {
        local_2c->state = 2;
        (local_2c->timer).current = 0;
        (local_2c->timer).subFrame = 0.0;
        (local_2c->timer).previous = -999;
        if (awardPoints != 0) {
          ItemManager::SpawnItem(&g_ItemManager,&local_2c->pos,ITEM_POINT_BULLET,1);
          local_34 = local_2c->start_offset;
          fVar1 = (float10)fcos((float10)local_2c->angle);
          fVar2 = (float10)fsin((float10)local_2c->angle);
          local_18 = (float)fVar2;
          for (; local_34 < local_2c->end_offset; local_34 = local_34 + 32.0) {
            local_28.x = (float)fVar1 * local_34 + (local_2c->pos).x;
            local_28.y = local_18 * local_34 + (local_2c->pos).y;
            local_28.z = 0.0;
            ItemManager::SpawnItem(&g_ItemManager,&local_28,ITEM_POINT_BULLET,1);
          }
        }
      }
      local_2c->graze_interval = 0;
    }
    local_2c = local_2c + 1;
  }
  g_GameManager.score = g_GameManager.score + local_c;
  if (local_c != 0) {
    Gui::FUN_0041735a(&g_Gui,local_c);
  }
  return local_c;
}

