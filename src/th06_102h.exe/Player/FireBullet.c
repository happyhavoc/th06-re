
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FireBulletResult
Player::FireBullet(Player *player,PlayerBullet *bullet,int bullet_idx,int framesSinceLastBullet_,
                  CharacterPowerData *powerData)

{
  ZunTimer *pZVar1;
  D3DXVECTOR3 *pDVar2;
  ushort uVar3;
  AnmManager *this;
  CharacterPowerBulletData *bulletData;
  float *pfVar4;
  double dVar5;
  
  for (; powerData->power <= (int)(uint)g_GameManager.current_power; powerData = powerData + 1) {
  }
  bulletData = powerData->bullets + bullet_idx;
  if (bulletData->bulletType == 3) {
    uVar3 = bulletData->bulletFrame;
    if (player->laserTimer[(short)uVar3].current != 0) {
LAB_00426400:
      if (powerData->numBullets + -1 <= bullet_idx) {
        return STOP_SPAWNING;
      }
      return SPAWN_MORE;
    }
    pZVar1 = player->laserTimer + (short)uVar3;
    pZVar1->current = (int)(short)bulletData->waitBetweenBullets;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
    bullet->field10_0x152 = uVar3;
    bullet->spawnPositionIdx = (ushort)bulletData->spawnPositionIdx;
    bullet->sidewaysMotion = bulletData->field2_0x4;
    (bullet->unk_134).x = bulletData->field3_0x8;
  }
  else if (framesSinceLastBullet_ % (int)(short)bulletData->waitBetweenBullets !=
           (int)(short)bulletData->bulletFrame) goto LAB_00426400;
  this = g_AnmManager;
  uVar3 = bulletData->field11_0x20;
  (bullet->vm).anmFileIndex = uVar3;
  AnmManager::SetAndExecuteScript(this,&bullet->vm,this->scripts[(short)uVar3]);
  if (bulletData->spawnPositionIdx == 0) {
    (bullet->position).x = (player->positionCenter).x;
    (bullet->position).y = (player->positionCenter).y;
    (bullet->position).z = (player->positionCenter).z;
  }
  else {
    pDVar2 = player->bulletSpawnPositions + (bulletData->spawnPositionIdx - 1);
    (bullet->position).x = pDVar2->x;
    (bullet->position).y = pDVar2->y;
    (bullet->position).z = pDVar2->z;
  }
  (bullet->position).x = (bullet->position).x + bulletData->field2_0x4;
  pfVar4 = &(bullet->position).y;
  *pfVar4 = *pfVar4 + bulletData->field3_0x8;
  (bullet->position).z = 0.495;
  (bullet->size).x = bulletData->field4_0xc;
  (bullet->size).y = bulletData->field5_0x10;
  (bullet->size).z = 1.0;
  (bullet->unk_134).z = bulletData->field6_0x14;
  (bullet->unk_134).y = bulletData->field7_0x18;
  dVar5 = cos((double)bulletData->field6_0x14);
  (bullet->velocity).x = (float)dVar5 * bulletData->field7_0x18;
  dVar5 = sin((double)bulletData->field6_0x14);
  (bullet->velocity).y = (float)dVar5 * bulletData->field7_0x18;
  (bullet->unk_140).current = 0;
  (bullet->unk_140).subFrame = 0.0;
  (bullet->unk_140).previous = -999;
  bullet->bulletType = (ushort)bulletData->bulletType;
  bullet->unk_14c = bulletData->field8_0x1c;
  if (-1 < (short)bulletData->field12_0x22) {
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,(int)(short)bulletData->field12_0x22,0);
  }
  return (uint)(powerData->numBullets + -1 <= bullet_idx);
}

