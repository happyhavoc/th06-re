
ChainCallbackResult EnemyManager::OnUpdate(EnemyManager *mgr)

{
  float fVar1;
  int iVar2;
  ZunResult ZVar3;
  BOOL BVar4;
  BOOL BVar5;
  uint uVar6;
  D3DXVECTOR3 *enemy_hitbox_dimensions;
  D3DXVECTOR3 local_44;
  f32 shrink_factor;
  D3DXVECTOR3 local_34;
  Enemy *cur_enemy;
  int local_20;
  D3DXVECTOR3 local_1c;
  int local_10;
  int damageTaken;
  int hitWithLazerDuringBomb;
  
  hitWithLazerDuringBomb = 0;
  RunEclTimeline(mgr);
  cur_enemy = mgr->enemies;
  mgr->enemy_count_real = 0;
  local_10 = 0;
  do {
    if (0xff < local_10) {
      (mgr->timeline_time).previous = (mgr->timeline_time).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(mgr->timeline_time).current,&(mgr->timeline_time).subFrame);
      return CHAIN_CALLBACK_RESULT_CONTINUE;
    }
    if (-1 < (char)cur_enemy->flags1) goto LAB_00412416;
    mgr->enemy_count_real = mgr->enemy_count_real + 1;
    Enemy::Move(cur_enemy);
    Enemy::ClampPos(cur_enemy);
    if (((cur_enemy->flags2 >> 2 & 1) == 0) &&
       (iVar2 = GameManager::IsInBounds
                          (&g_GameManager,(cur_enemy->position).x,(cur_enemy->position).y,
                           ((cur_enemy->primary_vm).sprite)->widthPx,
                           ((cur_enemy->primary_vm).sprite)->heightPx), iVar2 != 0)) {
      cur_enemy->flags2 = cur_enemy->flags2 | 4;
    }
    if (((cur_enemy->flags2 >> 2 & 1) == 1) &&
       (iVar2 = GameManager::IsInBounds
                          (&g_GameManager,(cur_enemy->position).x,(cur_enemy->position).y,
                           ((cur_enemy->primary_vm).sprite)->widthPx,
                           ((cur_enemy->primary_vm).sprite)->heightPx), iVar2 == 0)) {
      cur_enemy->flags1 = cur_enemy->flags1 & 0x7f;
      Enemy::Despawn(cur_enemy);
      goto LAB_00412416;
    }
    if (-1 < cur_enemy->life_callback_threshold) {
      Enemy::HandleLifeCallback(cur_enemy);
    }
    if (-1 < cur_enemy->timer_callback_threshold) {
      Enemy::HandleTimerCallback(cur_enemy);
    }
    ZVar3 = EclManager::RunEcl(&g_EclManager,cur_enemy);
    if (ZVar3 == ZUN_ERROR) {
      cur_enemy->flags1 = cur_enemy->flags1 & 0x7f;
      Enemy::Despawn(cur_enemy);
      goto LAB_00412416;
    }
    Enemy::ClampPos(cur_enemy);
    (cur_enemy->primary_vm).color = cur_enemy->color;
    AnmManager::ExecuteScript(g_AnmManager,&cur_enemy->primary_vm);
    cur_enemy->color = (cur_enemy->primary_vm).color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < cur_enemy->vms[local_20].anmFileIndex) &&
         (iVar2 = AnmManager::ExecuteScript(g_AnmManager,cur_enemy->vms + local_20), iVar2 != 0)) {
        cur_enemy->vms[local_20].anmFileIndex = -1;
      }
    }
    hitWithLazerDuringBomb = 0;
    if (((cur_enemy->flags2 >> 2 & 1) == 0) || ((cur_enemy->flags3 >> 3 & 1) != 0))
    goto LAB_00412dbc;
    iVar2 = cur_enemy->life;
    if (((cur_enemy->flags2 >> 1 & 1) != 0) && ((cur_enemy->flags2 & 1) != 0)) {
      local_1c.z = (cur_enemy->hitbox_dimensions).z * 0.6666667;
      local_1c.y = (cur_enemy->hitbox_dimensions).y * 0.6666667;
      local_1c.x = (cur_enemy->hitbox_dimensions).x * 0.6666667;
      BVar4 = Player::CalcKillBoxCollision(&g_Player,&cur_enemy->position,&local_1c);
      if (((BVar4 == 1) && ((cur_enemy->flags2 & 1) != 0)) && ((cur_enemy->flags2 >> 3 & 1) == 0)) {
        cur_enemy->life = cur_enemy->life + -10;
      }
    }
    if ((cur_enemy->flags2 & 1) != 0) {
      damageTaken = Player::CalcDamageToEnemy
                              (&g_Player,&cur_enemy->position,&cur_enemy->hitbox_dimensions,
                               &hitWithLazerDuringBomb);
      if (69 < damageTaken) {
        damageTaken = 70;
      }
      g_GameManager.score = (damageTaken / 5) * 10 + g_GameManager.score;
      if (mgr->spellcard_capture != 0) {
        if (hitWithLazerDuringBomb == 0) {
          if (damageTaken < 8) {
            if (damageTaken != 0) {
              damageTaken = 1;
            }
          }
          else {
            damageTaken = damageTaken / 7;
          }
        }
        else if (mgr->unk_ee5d4 == 0) {
          damageTaken = 0;
        }
        else if (damageTaken < 4) {
          if (damageTaken != 0) {
            damageTaken = 1;
          }
        }
        else {
          damageTaken = damageTaken / 3;
        }
      }
      if ((cur_enemy->flags2 >> 4 & 1) != 0) {
        cur_enemy->life = cur_enemy->life - damageTaken;
      }
      fVar1 = (cur_enemy->position).y;
      if (g_Player.position_of_last_enemy_hit.y < fVar1 !=
          (NAN(g_Player.position_of_last_enemy_hit.y) || NAN(fVar1))) {
        g_Player.position_of_last_enemy_hit.x = (cur_enemy->position).x;
        g_Player.position_of_last_enemy_hit.y = (cur_enemy->position).y;
        g_Player.position_of_last_enemy_hit.z = (cur_enemy->position).z;
      }
    }
    if ((0 < cur_enemy->life) || ((cur_enemy->flags2 & 1) == 0)) goto LAB_00412ce2;
    cur_enemy->life_callback_threshold = -1;
    cur_enemy->timer_callback_threshold = -1;
    switch(cur_enemy->flags2 >> 5) {
    case 0:
      g_GameManager.score = g_GameManager.score + cur_enemy->score;
      cur_enemy->flags1 = cur_enemy->flags1 & 0x7f;
      goto LAB_00412a4d;
    case 1:
      g_GameManager.score = g_GameManager.score + cur_enemy->score;
      cur_enemy->flags2 = cur_enemy->flags2 & 0xfe;
LAB_00412a4d:
      if ((cur_enemy->flags2 >> 3 & 1) != 0) {
        g_Gui.boss_present = 0;
        Enemy::ResetEffectArray(cur_enemy);
      }
switchD_00412938_caseD_2:
      if ((char)cur_enemy->item_drop < '\0') {
        if (cur_enemy->item_drop == ITEM_NO_ITEM) {
          if ((uint)mgr->random_item_spawn_index % 3 == 0) {
            EffectManager::SpawnEffect
                      (&g_EffectManager,cur_enemy->death_anm2 + 4,&cur_enemy->position,6,
                       (ZunColor)0xffffffff);
            ItemManager::SpawnItem
                      (&g_ItemManager,&cur_enemy->position,
                       g_RandomItems[mgr->random_item_table_index],hitWithLazerDuringBomb);
            mgr->random_item_table_index = mgr->random_item_table_index + 1;
            if (0x1f < mgr->random_item_table_index) {
              mgr->random_item_table_index = 0;
            }
          }
          mgr->random_item_spawn_index = mgr->random_item_spawn_index + 1;
        }
      }
      else {
        EffectManager::SpawnEffect
                  (&g_EffectManager,cur_enemy->death_anm2 + 4,&cur_enemy->position,3,
                   (ZunColor)0xffffffff);
        ItemManager::SpawnItem
                  (&g_ItemManager,&cur_enemy->position,cur_enemy->item_drop,hitWithLazerDuringBomb);
      }
      if (((cur_enemy->flags2 >> 3 & 1) != 0) && (g_RunningSpellcardInfo.is_active == 0)) {
        BulletManager::DespawnBullets(&g_BulletManager,0x3200,0);
      }
      cur_enemy->life = 0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      cur_enemy->life = 1;
      cur_enemy->flags2 = cur_enemy->flags2 & 0xef;
      cur_enemy->flags2 = cur_enemy->flags2 & 0x1f;
      g_Gui.boss_present = 0;
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)cur_enemy->death_anm1,&cur_enemy->position,1,
                 (ZunColor)0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)cur_enemy->death_anm1,&cur_enemy->position,1,
                 (ZunColor)0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)cur_enemy->death_anm1,&cur_enemy->position,1,
                 (ZunColor)0xffffffff);
    }
    uVar6 = local_10 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,uVar6 + SOUND_2,0);
    EffectManager::SpawnEffect
              (&g_EffectManager,(uint)cur_enemy->death_anm1,&cur_enemy->position,1,
               (ZunColor)0xffffffff);
    EffectManager::SpawnEffect
              (&g_EffectManager,cur_enemy->death_anm2 + 4,&cur_enemy->position,4,
               (ZunColor)0xffffffff);
    if (-1 < cur_enemy->death_callback_sub) {
      cur_enemy->bullet_rank_speed_low = -0.5;
      cur_enemy->bullet_rank_speed_high = 0.5;
      cur_enemy->bullet_rank_amount1_low = 0;
      cur_enemy->bullet_rank_amount1_high = 0;
      cur_enemy->bullet_rank_amount2_low = 0;
      cur_enemy->bullet_rank_amount2_high = 0;
      cur_enemy->stack_depth = 0;
      EclManager::CallEclSub
                (&g_EclManager,&cur_enemy->current_context,*(short *)&cur_enemy->death_callback_sub)
      ;
      cur_enemy->death_callback_sub = -1;
    }
LAB_00412ce2:
    if (((cur_enemy->flags2 >> 3 & 1) != 0) && (BVar5 = Gui::HasCurrentMsgIdx(&g_Gui), BVar5 == 0))
    {
      g_Gui.boss_health_bar = (float)cur_enemy->life / (float)cur_enemy->max_life;
    }
    if (cur_enemy->unk_e41 == 0) {
      if (cur_enemy->life < iVar2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_TOTAL_BOSS_DEATH,0);
        (cur_enemy->primary_vm).flags = (cur_enemy->primary_vm).flags | AnmVmFlags_3;
        cur_enemy->unk_e41 = 4;
      }
      else {
        (cur_enemy->primary_vm).flags = (cur_enemy->primary_vm).flags & ~AnmVmFlags_3;
      }
    }
    else {
      cur_enemy->unk_e41 = cur_enemy->unk_e41 - 1;
      (cur_enemy->primary_vm).flags = (cur_enemy->primary_vm).flags & ~AnmVmFlags_3;
    }
LAB_00412dbc:
    Enemy::UpdateEffects(cur_enemy);
    if ((char)g_GameManager.isTimeStopped == '\0') {
      (cur_enemy->boss_timer).previous = (cur_enemy->boss_timer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(cur_enemy->boss_timer).current,&(cur_enemy->boss_timer).subFrame);
    }
LAB_00412416:
    local_10 = local_10 + 1;
    cur_enemy = cur_enemy + 1;
  } while( true );
}

