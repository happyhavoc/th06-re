
void th06::BombData::BombReimuACalc(Player *param_1)

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
  int i;
  float angle;
  
  if ((param_1->bombInfo).bombTimer.current < (param_1->bombInfo).bombDuration) {
    if (((param_1->bombInfo).bombTimer.current != (param_1->bombInfo).bombTimer.previous) &&
       ((param_1->bombInfo).bombTimer.current == 0)) {
      Gui::ShowBombNamePortrait(&g_Gui,0x4a1,"霊符「夢想封印」");
      (param_1->bombInfo).bombDuration = 300;
      (param_1->invulnerabilityTimer).current = 360;
      (param_1->invulnerabilityTimer).subFrame = 0.0;
      (param_1->invulnerabilityTimer).previous = -999;
      for (i = 0; i < 8; i = i + 1) {
        (param_1->bombInfo).reimuABombProjectilesState[i] = 0;
      }
      ItemManager::RemoveAllItems(&g_ItemManager);
      EffectManager::SpawnParticles
                (&g_EffectManager,0xc,&param_1->positionCenter,1,(ZunColor)0xff4040ff);
      param_1->bomb_projectiles[8].pos.x = (param_1->positionCenter).x;
      param_1->bomb_projectiles[8].pos.y = (param_1->positionCenter).y;
      param_1->bomb_projectiles[8].size.x = 256.0;
      param_1->bomb_projectiles[8].size.y = 256.0;
    }
    if ((59 < (param_1->bombInfo).bombTimer.current) &&
       ((param_1->bombInfo).bombTimer.current < 0xb4)) {
      uVar5 = (param_1->bombInfo).bombTimer.current & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      if ((uVar5 == 0) &&
         (iVar4 = (param_1->bombInfo).bombTimer.current + -60,
         iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4, iVar4 != 0)) {
        (param_1->bombInfo).reimuABombProjectilesState[iVar4] = 1;
        (param_1->bombInfo).reimuABombProjectilesRelated[iVar4] = 4.0;
        pDVar1 = (param_1->bombInfo).bomb_region_positions + iVar4;
        pDVar1->x = (param_1->positionCenter).x;
        pDVar1->y = (param_1->positionCenter).y;
        pDVar1->z = (param_1->positionCenter).z;
        angle = Rng::GetRandomF32ZeroToOne(&g_Rng);
        angle = angle * 6.283185 - 3.141593;
        dVar7 = cos((double)angle);
        (param_1->bombInfo).bomb_region_velocities[iVar4].x =
             (float)dVar7 * (param_1->bombInfo).reimuABombProjectilesRelated[iVar4];
        dVar7 = sin((double)angle);
        (param_1->bombInfo).bomb_region_velocities[iVar4].y =
             (float)dVar7 * (param_1->bombInfo).reimuABombProjectilesRelated[iVar4];
        param_1->unk_838[iVar4] = 0;
        local_14 = (param_1->bombInfo).vms[iVar4];
        for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
          AnmManager::ExecuteAnmIdx(g_AnmManager,local_14,local_28 + 0x485);
          local_14 = local_14 + 1;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMU_A,0);
      }
    }
    param_1->playerState = PLAYER_STATE_INVULNERABLE;
    for (i = 0; i < 8; i = i + 1) {
      if ((param_1->bombInfo).reimuABombProjectilesState[i] != 0) {
        if ((param_1->bombInfo).reimuABombProjectilesState[i] == 1) {
          if ((param_1->bombInfo).bombTimer.current != (param_1->bombInfo).bombTimer.previous) {
            if ((param_1->position_of_last_enemy_hit).x <= -100.0) {
              local_24 = (param_1->positionCenter).x;
              local_20 = (param_1->positionCenter).y;
            }
            else {
              local_24 = (param_1->position_of_last_enemy_hit).x;
              local_20 = (param_1->position_of_last_enemy_hit).y;
            }
            local_24 = local_24 - (param_1->bombInfo).bomb_region_positions[i].x;
            local_20 = local_20 - (param_1->bombInfo).bomb_region_positions[i].y;
            local_18 = sqrt(SUB84((double)(local_24 * local_24 + local_20 * local_20),0));
            local_18 = local_18 / ((param_1->bombInfo).reimuABombProjectilesRelated[i] / 8.0);
            if (local_18 < 1.0 != NAN(local_18)) {
              local_18 = 1.0;
            }
            angle = local_24 / local_18 + (param_1->bombInfo).bomb_region_velocities[i].x;
            fVar3 = local_20 / local_18 + (param_1->bombInfo).bomb_region_velocities[i].y;
            fVar6 = sqrt(SUB84((double)(angle * angle + fVar3 * fVar3),0));
            fVar8 = fVar6;
            if (10.0 < fVar6) {
              fVar8 = 10.0;
            }
            (param_1->bombInfo).reimuABombProjectilesRelated[i] = fVar8;
            fVar8 = (param_1->bombInfo).reimuABombProjectilesRelated[i];
            if (fVar8 < 1.0 != NAN(fVar8)) {
              (param_1->bombInfo).reimuABombProjectilesRelated[i] = 1.0;
            }
            (param_1->bombInfo).bomb_region_velocities[i].x =
                 (angle * (param_1->bombInfo).reimuABombProjectilesRelated[i]) / fVar6;
            (param_1->bombInfo).bomb_region_velocities[i].y =
                 (fVar3 * (param_1->bombInfo).reimuABombProjectilesRelated[i]) / fVar6;
            param_1->bomb_region_sizes[i].x = 48.0;
            param_1->bomb_region_sizes[i].y = 48.0;
            pDVar1 = (param_1->bombInfo).bomb_region_positions + i;
            pDVar2 = param_1->bomb_region_positions + i;
            pDVar2->x = pDVar1->x;
            pDVar2->y = pDVar1->y;
            pDVar2->z = pDVar1->z;
            param_1->bomb_region_damages[i] = 8;
            param_1->bomb_projectiles[i].pos.x = (param_1->bombInfo).bomb_region_positions[i].x;
            param_1->bomb_projectiles[i].pos.y = (param_1->bombInfo).bomb_region_positions[i].y;
            param_1->bomb_projectiles[i].size.x = 48.0;
            param_1->bomb_projectiles[i].size.y = 48.0;
            if ((99 < param_1->unk_838[i]) ||
               ((param_1->bombInfo).bombDuration + -0x1e <= (param_1->bombInfo).bombTimer.current))
            {
              EffectManager::SpawnParticles
                        (&g_EffectManager,6,(param_1->bombInfo).bomb_region_positions + i,8,
                         (ZunColor)0xffffffff);
              EffectManager::SpawnParticles
                        (&g_EffectManager,0xc,(param_1->bombInfo).bomb_region_positions + i,1,
                         (ZunColor)0xff4040ff);
              (param_1->bombInfo).reimuABombProjectilesState[i] = 2;
              (param_1->bombInfo).vms[i][0].pendingInterrupt = 1;
              (param_1->bombInfo).vms[i][1].pendingInterrupt = 1;
              (param_1->bombInfo).vms[i][2].pendingInterrupt = 1;
              (param_1->bombInfo).vms[i][3].pendingInterrupt = 1;
              param_1->bomb_region_sizes[i].x = 256.0;
              param_1->bomb_region_sizes[i].y = 256.0;
              param_1->bomb_region_damages[i] = 200;
              param_1->bomb_projectiles[i].size.x = 256.0;
              param_1->bomb_projectiles[i].size.y = 256.0;
              SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_F,0);
              ScreenEffect::RegisterChain(1,0x10,8,0,0);
            }
          }
        }
        else if ((((param_1->bombInfo).reimuABombProjectilesState[i] != 0) &&
                 ((param_1->bombInfo).bombTimer.current != (param_1->bombInfo).bombTimer.previous))
                && ((param_1->bombInfo).reimuABombProjectilesState[i] =
                         (param_1->bombInfo).reimuABombProjectilesState[i] + 1,
                   0x1d < (param_1->bombInfo).reimuABombProjectilesState[i])) {
          (param_1->bombInfo).reimuABombProjectilesState[i] = 0;
        }
        (param_1->bombInfo).bomb_region_positions[i].x =
             g_Supervisor.effectiveFramerateMultiplier *
             (param_1->bombInfo).bomb_region_velocities[i].x +
             (param_1->bombInfo).bomb_region_positions[i].x;
        (param_1->bombInfo).bomb_region_positions[i].y =
             g_Supervisor.effectiveFramerateMultiplier *
             (param_1->bombInfo).bomb_region_velocities[i].y +
             (param_1->bombInfo).bomb_region_positions[i].y;
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[i]);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[i] + 1);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[i] + 2);
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[i] + 3);
      }
    }
    (param_1->bombInfo).bombTimer.previous = (param_1->bombInfo).bombTimer.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->bombInfo).bombTimer.current,
               &(param_1->bombInfo).bombTimer.subFrame);
  }
  else {
    Gui::EndPlayerSpellcard(&g_Gui);
    (param_1->bombInfo).isInUse = 0;
  }
  return;
}

