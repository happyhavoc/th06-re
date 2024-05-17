
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */

int __thiscall
Player::FUN_004264b0
          (Player *this,D3DXVECTOR3 *enemyPos,D3DXVECTOR3 *enemyHitboxSize,undefined4 *param_3)

{
  int local_d4;
  short local_80;
  D3DXVECTOR3 local_40;
  int local_34;
  D3DXVECTOR3 local_30;
  int local_c;
  PlayerBullet *bullet;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  short sVar4;
  AnmManager *this_00;
  
  local_34 = 0;
  local_30.x = enemyPos->x - enemyHitboxSize->x / 2.0;
  local_30.y = enemyPos->y - enemyHitboxSize->y / 2.0;
  fVar1 = enemyHitboxSize->x / 2.0 + enemyPos->x;
  fVar2 = enemyHitboxSize->y / 2.0 + enemyPos->y;
  bullet = this->bullets;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((bullet->bulletState != 0) && ((bullet->bulletState == 1 || (bullet->bulletType == 2)))) {
      local_40.x = (bullet->position).x - (bullet->size).x / 2.0;
      local_40.y = (bullet->position).y - (bullet->size).y / 2.0;
      fVar3 = (bullet->size).x / 2.0 + (bullet->position).x;
      fVar4 = (bullet->size).y / 2.0 + (bullet->position).y;
      if ((local_40.y <= fVar2) &&
         (((local_40.x <= fVar1 && (fVar4 < local_30.y == (NAN(fVar4) || NAN(local_30.y)))) &&
          (fVar3 < local_30.x == (NAN(fVar3) || NAN(local_30.x)))))) {
        if ((this->bombInfo).isUsingBomb == 0) {
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
            local_40.y = enemyPos->y;
            local_40.z = enemyPos->z;
            local_40.x = (bullet->position).x;
            EffectManager::SpawnEffect(&g_EffectManager,5,&local_40,1,0xffffffff);
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
    fVar3 = this->unk_638[local_c].x;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pDVar1 = this->unk_638 + local_c;
      pDVar2 = this->unk_4b8 + local_c;
      local_40.z = pDVar2->z - pDVar1->z * 0.5;
      local_40.y = pDVar2->y - pDVar1->y * 0.5;
      local_40.x = pDVar2->x - pDVar1->x * 0.5;
      fVar3 = this->unk_638[local_c].y * 0.5 + this->unk_4b8[local_c].y;
      fVar4 = this->unk_638[local_c].x * 0.5 + this->unk_4b8[local_c].x;
      if (((local_40.x <= fVar1) && (fVar4 < local_30.x == (NAN(fVar4) || NAN(local_30.x)))) &&
         ((local_40.y <= fVar2 && (fVar3 < local_30.y == (NAN(fVar3) || NAN(local_30.y)))))) {
        local_34 = local_34 + this->unk_7b8[local_c];
        this->unk_838[local_c] = this->unk_838[local_c] + this->unk_7b8[local_c];
        this->unk_9e4 = this->unk_9e4 + 1;
        if ((this->unk_9e4 & 3) == 0) {
          EffectManager::SpawnEffect(&g_EffectManager,3,enemyPos,1,0xffffffff);
        }
        if (((this->bombInfo).isUsingBomb != 0) && (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
    }
  }
  return local_34;
}

