
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int __thiscall
Player::FUN_004264b0
          (Player *this,D3DXVECTOR3 *enemyPos,D3DXVECTOR3 *enemyHitboxSize,undefined4 *param_3)

{
  int local_d4;
  short local_80;
  D3DXVECTOR3 bulletTopLeft;
  int local_34;
  D3DXVECTOR3 enemyTopLeft;
  int local_c;
  PlayerBullet *bullet;
  float bulletBottomRightX;
  float bulletBottomRightY;
  float enemyBottomRightX;
  float enemyBottomRightY;
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  short sVar4;
  AnmManager *this_00;
  
  local_34 = 0;
  enemyTopLeft.x = enemyPos->x - enemyHitboxSize->x / 2.0;
  enemyTopLeft.y = enemyPos->y - enemyHitboxSize->y / 2.0;
  enemyBottomRightX = enemyHitboxSize->x / 2.0 + enemyPos->x;
  enemyBottomRightY = enemyHitboxSize->y / 2.0 + enemyPos->y;
  bullet = this->bullets;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((bullet->bulletState != 0) && ((bullet->bulletState == 1 || (bullet->bulletType == 2)))) {
      bulletTopLeft.x = (bullet->position).x - (bullet->size).x / 2.0;
      bulletTopLeft.y = (bullet->position).y - (bullet->size).y / 2.0;
      bulletBottomRightX = (bullet->size).x / 2.0 + (bullet->position).x;
      bulletBottomRightY = (bullet->size).y / 2.0 + (bullet->position).y;
      if ((bulletTopLeft.y <= enemyBottomRightY) &&
         (((bulletTopLeft.x <= enemyBottomRightX &&
           (bulletBottomRightY < enemyTopLeft.y == (NAN(bulletBottomRightY) || NAN(enemyTopLeft.y)))
           ) && (bulletBottomRightX < enemyTopLeft.x ==
                 (NAN(bulletBottomRightX) || NAN(enemyTopLeft.x)))))) {
                    /* Bullet is hitting the enemy */
        if ((this->bombInfo).isInUse == 0) {
          local_d4 = (int)bullet->unk_14c;
        }
        else if ((int)bullet->unk_14c / 3 == 0) {
          local_d4 = 1;
        }
        else {
          local_d4 = (int)bullet->unk_14c / 3;
        }
        local_34 = local_34 + local_d4;
        if (bullet->bulletType == 2) {
          bullet->unk_14c =
               (short)((int)((int)bullet->unk_14c + ((int)bullet->unk_14c >> 0x1f & 3U)) >> 2);
          if (bullet->unk_14c == 0) {
            bullet->unk_14c = 1;
          }
          switch((bullet->vm).anmFileIndex) {
          case 0x441:
            (bullet->size).x = 32.0;
            (bullet->size).y = 32.0;
            break;
          case 0x442:
            (bullet->size).x = 42.0;
            (bullet->size).y = 42.0;
            break;
          case 0x443:
            (bullet->size).x = 48.0;
            (bullet->size).y = 48.0;
            break;
          case 0x444:
            (bullet->size).x = 48.0;
            (bullet->size).y = 48.0;
          }
          if ((bullet->unk_140).current % 6 == 0) {
            EffectManager::SpawnEffect(&g_EffectManager,5,&bullet->position,1,0xffffffff);
          }
        }
        this_00 = g_AnmManager;
        if (bullet->bulletType == 3) {
          this->unk_9e4 = this->unk_9e4 + 1;
          if ((this->unk_9e4 & 7) == 0) {
            bulletTopLeft.y = enemyPos->y;
            bulletTopLeft.z = enemyPos->z;
            bulletTopLeft.x = (bullet->position).x;
            EffectManager::SpawnEffect(&g_EffectManager,5,&bulletTopLeft,1,0xffffffff);
          }
        }
        else {
          if (bullet->bulletState == 1) {
            sVar4 = (bullet->vm).anmFileIndex;
            local_80 = sVar4 + 0x20;
            (bullet->vm).anmFileIndex = local_80;
            AnmManager::SetAndExecuteScript(this_00,&bullet->vm,this_00->scripts[sVar4 + 0x20]);
            EffectManager::SpawnEffect(&g_EffectManager,5,&bullet->position,1,0xffffffff);
            (bullet->position).z = 0.1;
          }
          bullet->bulletState = 2;
          (bullet->velocity).x = (bullet->velocity).x / 8.0;
          (bullet->velocity).y = (bullet->velocity).y / 8.0;
        }
      }
    }
    bullet = bullet + 1;
  }
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    bulletBottomRightX = this->unk_638[local_c].x;
    if (bulletBottomRightX < 0.0 == (bulletBottomRightX == 0.0)) {
      pDVar1 = this->unk_638 + local_c;
      pDVar2 = this->unk_4b8 + local_c;
      bulletTopLeft.z = pDVar2->z - pDVar1->z * 0.5;
      bulletTopLeft.y = pDVar2->y - pDVar1->y * 0.5;
      bulletTopLeft.x = pDVar2->x - pDVar1->x * 0.5;
      bulletBottomRightX = this->unk_638[local_c].y * 0.5 + this->unk_4b8[local_c].y;
      bulletBottomRightY = this->unk_638[local_c].x * 0.5 + this->unk_4b8[local_c].x;
      if (((bulletTopLeft.x <= enemyBottomRightX) &&
          (bulletBottomRightY < enemyTopLeft.x == (NAN(bulletBottomRightY) || NAN(enemyTopLeft.x))))
         && ((bulletTopLeft.y <= enemyBottomRightY &&
             (bulletBottomRightX < enemyTopLeft.y ==
              (NAN(bulletBottomRightX) || NAN(enemyTopLeft.y)))))) {
        local_34 = local_34 + this->unk_7b8[local_c];
        this->unk_838[local_c] = this->unk_838[local_c] + this->unk_7b8[local_c];
        this->unk_9e4 = this->unk_9e4 + 1;
        if ((this->unk_9e4 & 3) == 0) {
          EffectManager::SpawnEffect(&g_EffectManager,3,enemyPos,1,0xffffffff);
        }
        if (((this->bombInfo).isInUse != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}

