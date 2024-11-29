
void __thiscall th06::BulletManager::RemoveAllBullets(BulletManager *this,int turnIntoItem)

{
  float10 fVar1;
  int iVar2;
  Bullet *pBVar3;
  float10 fVar4;
  float local_28;
  Laser *lasers;
  Bullet *bullets;
  int index_1;
  D3DXVECTOR3 local_10;
  
  bullets = g_BulletManager.bullets;
  for (index_1 = 0; index_1 < 0x280; index_1 = index_1 + 1) {
    if ((bullets->state != 0) && (bullets->state != 5)) {
      if (turnIntoItem == 0) {
        bullets->state = 5;
      }
      else {
        ItemManager::SpawnItem(&g_ItemManager,&bullets->pos,ITEM_POINT_BULLET,1);
        pBVar3 = bullets;
        for (iVar2 = 0x171; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pBVar3->sprites).spriteBullet.rotation.x = 0.0;
          pBVar3 = (Bullet *)&(pBVar3->sprites).spriteBullet.rotation.y;
        }
      }
    }
    bullets = bullets + 1;
  }
  lasers = this->lasers;
  for (index_1 = 0; index_1 < 0x40; index_1 = index_1 + 1) {
    if (lasers->in_use != 0) {
      if (lasers->state < 2) {
        lasers->state = 2;
        (lasers->timer).current = 0;
        (lasers->timer).subFrame = 0.0;
        (lasers->timer).previous = -999;
        if (turnIntoItem != 0) {
          local_28 = lasers->start_offset;
          fVar1 = (float10)fcos((float10)lasers->angle);
          fVar4 = (float10)fsin((float10)lasers->angle);
          for (; local_28 < lasers->end_offset; local_28 = local_28 + 32.0) {
            local_10.x = (float)fVar1 * local_28 + (lasers->pos).x;
            local_10.y = (float)fVar4 * local_28 + (lasers->pos).y;
            local_10.z = 0.0;
            ItemManager::SpawnItem(&g_ItemManager,&local_10,ITEM_POINT_BULLET,1);
          }
        }
      }
      lasers->graze_interval = 0;
    }
    lasers = lasers + 1;
  }
  return;
}

