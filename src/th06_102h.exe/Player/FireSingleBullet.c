
FireBulletResult
th06::Player::FireSingleBullet
          (Player *player,PlayerBullet *bullet,int bullet_idx,int framesSinceLastBullet_,
          CharacterPowerData *powerData)

{
  CharacterPowerBulletData *bulletData;
  float *pfVar4;
  double dVar1;
  AnmManager *anmManager;
  D3DXVECTOR3 *pDVar2;
  ZunTimer *pZVar1;
  ushort uVar3;
  
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
    bullet->sidewaysMotion = bulletData->sidewaysMotion;
    (bullet->unk_134).x = bulletData->field3_0x8;
  }
  else if (framesSinceLastBullet_ % (int)(short)bulletData->waitBetweenBullets !=
           (int)(short)bulletData->bulletFrame) goto LAB_00426400;
  anmManager = g_AnmManager;
  uVar3 = bulletData->anmFileIdx;
  (bullet->vm).anmFileIndex = uVar3;
  AnmManager::SetAndExecuteScript
            ((AnmManager *)anmManager,&bullet->vm,anmManager->scripts[(short)uVar3]);
  if (bulletData->spawnPositionIdx == 0) {
    (bullet->position).x = (player->positionCenter).x;
    (bullet->position).y = (player->positionCenter).y;
    (bullet->position).z = (player->positionCenter).z;
  }
  else {
    pDVar2 = player->orbsPosition + (bulletData->spawnPositionIdx - 1);
    (bullet->position).x = pDVar2->x;
    (bullet->position).y = pDVar2->y;
    (bullet->position).z = pDVar2->z;
  }
  (bullet->position).x = (bullet->position).x + bulletData->sidewaysMotion;
  pfVar4 = &(bullet->position).y;
  *pfVar4 = *pfVar4 + bulletData->field3_0x8;
  (bullet->position).z = 0.495;
  (bullet->size).x = bulletData->sizeX;
  (bullet->size).y = bulletData->sizeY;
  (bullet->size).z = 1.0;
  (bullet->unk_134).z = bulletData->direction;
  (bullet->unk_134).y = bulletData->velocity;
  dVar1 = cos((double)bulletData->direction);
  (bullet->velocity).x = (float)dVar1 * bulletData->velocity;
  dVar1 = sin((double)bulletData->direction);
  (bullet->velocity).y = (float)dVar1 * bulletData->velocity;
  (bullet->unk_140).current = 0;
  (bullet->unk_140).subFrame = 0.0;
  (bullet->unk_140).previous = -999;
  bullet->bulletType = (ushort)bulletData->bulletType;
  bullet->damage = bulletData->field8_0x1c;
  if (-1 < (short)bulletData->field12_0x22) {
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,(int)(short)bulletData->field12_0x22,0);
  }
  return (uint)(powerData->numBullets + -1 <= bullet_idx);
}

