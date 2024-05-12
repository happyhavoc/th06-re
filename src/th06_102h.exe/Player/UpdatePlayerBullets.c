
void Player::UpdatePlayerBullets(Player *player)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float *pDVar4;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float local_38;
  PlayerBullet *bullet;
  float local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (player->laserTimer[local_10].current != 0) {
      ZunTimer::Decrement(player->laserTimer + local_10,1);
    }
  }
  bullet = player->bullets;
  for (local_10 = 0; local_10 < 0x50; local_10 = local_10 + 1) {
    if (bullet->bulletState != 0) {
      sVar4 = bullet->bulletType;
      if (sVar4 == 1) {
        if (bullet->bulletState == 1) {
          if ((((player->position_of_last_enemy_hit).x <= -100.0) ||
              (0x27 < (bullet->unk_140).current)) ||
             ((bullet->unk_140).current == (bullet->unk_140).previous)) {
            fVar3 = (bullet->unk_134).y;
            if (fVar3 < 10.0 != NAN(fVar3)) {
              (bullet->unk_134).y = (bullet->unk_134).y + 0.3333333;
              fVar3 = (bullet->velocity).x;
              fVar5 = (bullet->velocity).y;
              fVar8 = FUN_0045bc34(SUB84((double)(fVar3 * fVar3 + fVar5 * fVar5),0));
              (bullet->velocity).x = (fVar3 * (bullet->unk_134).y) / fVar8;
              (bullet->velocity).y = (fVar5 * (bullet->unk_134).y) / fVar8;
            }
          }
          else {
            fVar3 = (player->position_of_last_enemy_hit).x - (bullet->position).x;
            fVar5 = (player->position_of_last_enemy_hit).y - (bullet->position).y;
            local_14 = FUN_0045bc34(SUB84((double)(fVar3 * fVar3 + fVar5 * fVar5),0));
            local_14 = local_14 / ((bullet->unk_134).y / 4.0);
            if (local_14 < 1.0 != NAN(local_14)) {
              local_14 = 1.0;
            }
            fVar3 = fVar3 / local_14 + (bullet->velocity).x;
            fVar5 = fVar5 / local_14 + (bullet->velocity).y;
            fVar8 = FUN_0045bc34(SUB84((double)(fVar3 * fVar3 + fVar5 * fVar5),0));
            local_38 = fVar8;
            if (10.0 < fVar8) {
              local_38 = 10.0;
            }
            (bullet->unk_134).y = local_38;
            fVar2 = (bullet->unk_134).y;
            if (fVar2 < 1.0 != NAN(fVar2)) {
              (bullet->unk_134).y = 1.0;
            }
            (bullet->velocity).x = (fVar3 * (bullet->unk_134).y) / fVar8;
            (bullet->velocity).y = (fVar5 * (bullet->unk_134).y) / fVar8;
          }
        }
      }
      else if (sVar4 == 2) {
        if (bullet->bulletState == 1) {
          (bullet->velocity).y = (bullet->velocity).y - 0.3;
        }
      }
      else if (sVar4 == 3) {
        if (player->laserTimer[bullet->field10_0x152].current == 0x46) {
          (bullet->vm).pendingInterrupt = 1;
        }
        else if (player->laserTimer[bullet->field10_0x152].current == 1) {
          (bullet->vm).pendingInterrupt = 1;
        }
        pDVar1 = player->bulletSpawnPositions + bullet->field11_0x154 + -1;
        (bullet->position).x = pDVar1->x;
        (bullet->position).y = pDVar1->y;
        (bullet->position).z = pDVar1->z;
        (bullet->position).x = (bullet->position).x + bullet->sidewaysMotion;
        (bullet->position).y = (bullet->position).y / 2.0;
        (bullet->position).z = 0.44;
        fVar3 = (bullet->position).y;
        (bullet->vm).scaleY = (fVar3 + fVar3) / 14.0;
        fVar3 = (bullet->position).y;
        (bullet->size).y = fVar3 + fVar3;
      }
      pDVar4 = &(bullet->position).x;
      *pDVar4 = g_Supervisor.effectiveFramerateMultiplier * (bullet->velocity).x + *pDVar4;
      (bullet->vm).pos.x = *pDVar4;
      pfVar7 = &(bullet->position).y;
      *pfVar7 = g_Supervisor.effectiveFramerateMultiplier * (bullet->velocity).y + *pfVar7;
      (bullet->vm).pos.y = *pfVar7;
      (bullet->vm).pos.z = (bullet->position).z;
      if ((bullet->bulletType != 3) &&
         (iVar6 = GameManager::IsInbounds
                            ((bullet->position).x,(bullet->position).y,
                             ((bullet->vm).sprite)->widthPx,((bullet->vm).sprite)->heightPx),
         iVar6 == 0)) {
        bullet->bulletState = 0;
      }
      iVar6 = AnmManager::ExecuteScript(g_AnmManager,&bullet->vm);
      if (iVar6 != 0) {
        bullet->bulletState = 0;
      }
      (bullet->unk_140).previous = (bullet->unk_140).current;
      Supervisor::TickTimer(&g_Supervisor,&(bullet->unk_140).current,&(bullet->unk_140).subFrame);
    }
    bullet = bullet + 1;
  }
  return;
}

