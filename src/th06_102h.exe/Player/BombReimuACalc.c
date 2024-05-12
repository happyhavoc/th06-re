
void Player::BombReimuACalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int local_28;
  float local_24;
  float local_20;
  float local_18;
  AnmVm *local_14;
  int local_10;
  float angle;
  
  if ((param_1->inner).unk8.current < (param_1->inner).unk4) {
    if (((param_1->inner).unk8.current != (param_1->inner).unk8.previous) &&
       ((param_1->inner).unk8.current == 0)) {
      Gui::string_related(&g_Gui,0x4a1,"霊符「夢想封印」");
      (param_1->inner).unk4 = 300;
      (param_1->blinkingPlayerTimer).current = 0x168;
      (param_1->blinkingPlayerTimer).subFrame = 0.0;
      (param_1->blinkingPlayerTimer).previous = -999;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        (param_1->inner).unk1c[local_10] = 0;
      }
      ItemManager::FUN_00420130(&g_ItemManager);
      EffectManager::SpawnEffect(&g_EffectManager,0xc,&param_1->positionCenter,1,0xff4040ff);
      param_1->unk_8b8[8].position1.x = (param_1->positionCenter).x;
      param_1->unk_8b8[8].position1.y = (param_1->positionCenter).y;
      param_1->unk_8b8[8].size1.x = 256.0;
      param_1->unk_8b8[8].size1.y = 256.0;
    }
    if ((0x3b < (param_1->inner).unk8.current) && ((param_1->inner).unk8.current < 0xb4)) {
      uVar5 = (param_1->inner).unk8.current & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar5 == 0) &&
         (iVar4 = (param_1->inner).unk8.current + -0x3c,
         iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4, iVar4 != 0)) {
        (param_1->inner).unk1c[iVar4] = 1;
        (param_1->inner).unk3c[iVar4] = 4.0;
        pDVar1 = (param_1->inner).unk5c + iVar4;
        pDVar1->x = (param_1->positionCenter).x;
        pDVar1->y = (param_1->positionCenter).y;
        pDVar1->z = (param_1->positionCenter).z;
        angle = Rng::GetRandomF32ZeroToOne(&g_Rng);
        angle = angle * 6.283185 - 3.141593;
        dVar7 = cos((double)angle);
        (param_1->inner).unkbc[iVar4].x = (float)dVar7 * (param_1->inner).unk3c[iVar4];
        dVar7 = sin((double)angle);
        (param_1->inner).unkbc[iVar4].y = (float)dVar7 * (param_1->inner).unk3c[iVar4];
        param_1->unk_838[iVar4] = 0;
        local_14 = (param_1->inner).vms[iVar4];
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::ExecuteAnmIdx(g_AnmManager,local_14,local_28 + 0x485);
          local_14 = local_14 + 1;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMU_A,0);
      }
    }
    param_1->playerState = PLAYER_STATE_USING_BOMB;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((param_1->inner).unk1c[local_10] != 0) {
        if ((param_1->inner).unk1c[local_10] == 1) {
          if ((param_1->inner).unk8.current != (param_1->inner).unk8.previous) {
            if ((param_1->position_of_last_enemy_hit).x <= -100.0) {
              local_24 = (param_1->positionCenter).x;
              local_20 = (param_1->positionCenter).y;
            }
            else {
              local_24 = (param_1->position_of_last_enemy_hit).x;
              local_20 = (param_1->position_of_last_enemy_hit).y;
            }
            local_24 = local_24 - (param_1->inner).unk5c[local_10].x;
            local_20 = local_20 - (param_1->inner).unk5c[local_10].y;
            local_18 = FUN_0045bc34(SUB84((double)(local_24 * local_24 + local_20 * local_20),0));
            local_18 = local_18 / ((param_1->inner).unk3c[local_10] / 8.0);
            if (local_18 < 1.0 != NAN(local_18)) {
              local_18 = 1.0;
            }
            angle = local_24 / local_18 + (param_1->inner).unkbc[local_10].x;
            fVar3 = local_20 / local_18 + (param_1->inner).unkbc[local_10].y;
            fVar6 = FUN_0045bc34(SUB84((double)(angle * angle + fVar3 * fVar3),0));
            fVar8 = fVar6;
            if (10.0 < fVar6) {
              fVar8 = 10.0;
            }
            (param_1->inner).unk3c[local_10] = fVar8;
            fVar8 = (param_1->inner).unk3c[local_10];
            if (fVar8 < 1.0 != NAN(fVar8)) {
              (param_1->inner).unk3c[local_10] = 1.0;
            }
            (param_1->inner).unkbc[local_10].x = (angle * (param_1->inner).unk3c[local_10]) / fVar6;
            (param_1->inner).unkbc[local_10].y = (fVar3 * (param_1->inner).unk3c[local_10]) / fVar6;
            param_1->unk_638[local_10].x = 48.0;
            param_1->unk_638[local_10].y = 48.0;
            pDVar1 = (param_1->inner).unk5c + local_10;
            pDVar2 = param_1->unk_4b8 + local_10;
            pDVar2->x = pDVar1->x;
            pDVar2->y = pDVar1->y;
            pDVar2->z = pDVar1->z;
            param_1->unk_7b8[local_10] = 8;
            param_1->unk_8b8[local_10].position1.x = (param_1->inner).unk5c[local_10].x;
            param_1->unk_8b8[local_10].position1.y = (param_1->inner).unk5c[local_10].y;
            param_1->unk_8b8[local_10].size1.x = 48.0;
            param_1->unk_8b8[local_10].size1.y = 48.0;
            if ((99 < param_1->unk_838[local_10]) ||
               ((param_1->inner).unk4 + -0x1e <= (param_1->inner).unk8.current)) {
              EffectManager::SpawnEffect
                        (&g_EffectManager,6,(param_1->inner).unk5c + local_10,8,0xffffffff);
              EffectManager::SpawnEffect
                        (&g_EffectManager,0xc,(param_1->inner).unk5c + local_10,1,0xff4040ff);
              (param_1->inner).unk1c[local_10] = 2;
              (param_1->inner).vms[local_10][0].pendingInterrupt = 1;
              (param_1->inner).vms[local_10][1].pendingInterrupt = 1;
              (param_1->inner).vms[local_10][2].pendingInterrupt = 1;
              (param_1->inner).vms[local_10][3].pendingInterrupt = 1;
              param_1->unk_638[local_10].x = 256.0;
              param_1->unk_638[local_10].y = 256.0;
              param_1->unk_7b8[local_10] = 200;
              param_1->unk_8b8[local_10].size1.x = 256.0;
              param_1->unk_8b8[local_10].size1.y = 256.0;
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_F,0);
              ScreenEffect::RegisterChain();
            }
          }
        }
        else if ((((param_1->inner).unk1c[local_10] != 0) &&
                 ((param_1->inner).unk8.current != (param_1->inner).unk8.previous)) &&
                ((param_1->inner).unk1c[local_10] = (param_1->inner).unk1c[local_10] + 1,
                0x1d < (param_1->inner).unk1c[local_10])) {
          (param_1->inner).unk1c[local_10] = 0;
        }
        (param_1->inner).unk5c[local_10].x =
             g_Supervisor.effectiveFramerateMultiplier * (param_1->inner).unkbc[local_10].x +
             (param_1->inner).unk5c[local_10].x;
        (param_1->inner).unk5c[local_10].y =
             g_Supervisor.effectiveFramerateMultiplier * (param_1->inner).unkbc[local_10].y +
             (param_1->inner).unk5c[local_10].y;
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[local_10]);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[local_10] + 1);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[local_10] + 2);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[local_10] + 3);
      }
    }
    (param_1->inner).unk8.previous = (param_1->inner).unk8.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->inner).unk8.current,&(param_1->inner).unk8.subFrame);
  }
  else {
    Gui::FUN_00417314(&g_Gui);
    (param_1->inner).isUsingBomb = 0;
  }
  return;
}

