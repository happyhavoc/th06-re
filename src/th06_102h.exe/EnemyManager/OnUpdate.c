
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 EnemyManager::OnUpdate(EnemyManager *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  Enemy *enemies;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00411530(param_1);
  enemies = param_1->enemies;
  param_1->enemy_count_real = 0;
  local_10 = 0;
  do {
    if (0xff < local_10) {
      (param_1->timeline_time).previous = (param_1->timeline_time).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(param_1->timeline_time).current,&(param_1->timeline_time).subFrame)
      ;
      return 1;
    }
    if (-1 < (char)enemies->flags1) goto LAB_00412416;
    param_1->enemy_count_real = param_1->enemy_count_real + 1;
    Enemy::FUN_00413380(enemies);
    Enemy::FUN_00412240(enemies);
    if (((enemies->flags2 >> 2 & 1) == 0) &&
       (iVar2 = GameManager::IsInbounds
                          ((enemies->position).x,(enemies->position).y,
                           ((enemies->primary_vm).sprite)->widthPx,
                           ((enemies->primary_vm).sprite)->heightPx), iVar2 != 0)) {
      enemies->flags2 = enemies->flags2 | 4;
    }
    if (((enemies->flags2 >> 2 & 1) == 1) &&
       (iVar2 = GameManager::IsInbounds
                          ((enemies->position).x,(enemies->position).y,
                           ((enemies->primary_vm).sprite)->widthPx,
                           ((enemies->primary_vm).sprite)->heightPx), iVar2 == 0)) {
      enemies->flags1 = enemies->flags1 & 0x7f;
      Enemy::FUN_004121b0(enemies);
      goto LAB_00412416;
    }
    if (-1 < enemies->life_callback_threshold) {
      Enemy::FUN_00411da0(enemies);
    }
    if (-1 < enemies->timer_callback_threshold) {
      Enemy::FUN_00411f40(enemies);
    }
    iVar2 = EclManager::run_ecl(enemies);
    if (iVar2 == -1) {
      enemies->flags1 = enemies->flags1 & 0x7f;
      Enemy::FUN_004121b0(enemies);
      goto LAB_00412416;
    }
    Enemy::FUN_00412240(enemies);
    (enemies->primary_vm).color = enemies->color;
    AnmManager::ExecuteScript(g_AnmManager,&enemies->primary_vm);
    enemies->color = (enemies->primary_vm).color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < enemies->vms[local_20].anmFileIndex) &&
         (iVar2 = AnmManager::ExecuteScript(g_AnmManager,enemies->vms + local_20), iVar2 != 0)) {
        enemies->vms[local_20].anmFileIndex = -1;
      }
    }
    local_8 = 0;
    if (((enemies->flags2 >> 2 & 1) == 0) || ((enemies->flags3 >> 3 & 1) != 0)) goto LAB_00412dbc;
    iVar2 = enemies->life;
    if (((enemies->flags2 >> 1 & 1) != 0) && ((enemies->flags2 & 1) != 0)) {
      local_14 = (enemies->hitbox_dimensions).z * 0.6666667;
      local_18 = (enemies->hitbox_dimensions).y * 0.6666667;
      local_1c = (enemies->hitbox_dimensions).x * 0.6666667;
      iVar3 = Player::CalcKillBoxCollision(&g_Player,&(enemies->position).x,&local_1c);
      if (((iVar3 == 1) && ((enemies->flags2 & 1) != 0)) && ((enemies->flags2 >> 3 & 1) == 0)) {
        enemies->life = enemies->life + -10;
      }
    }
    if ((enemies->flags2 & 1) != 0) {
      local_c = Player::FUN_004264b0
                          (&g_Player,&enemies->position,&enemies->hitbox_dimensions,&local_8);
      if (0x45 < local_c) {
        local_c = 0x46;
      }
      g_GameManager.score = (local_c / 5) * 10 + g_GameManager.score;
      if (param_1->spellcard_capture != 0) {
        if (local_8 == 0) {
          if (local_c < 8) {
            if (local_c != 0) {
              local_c = 1;
            }
          }
          else {
            local_c = local_c / 7;
          }
        }
        else if (*(int *)&param_1->field_0xee5d4 == 0) {
          local_c = 0;
        }
        else if (local_c < 4) {
          if (local_c != 0) {
            local_c = 1;
          }
        }
        else {
          local_c = local_c / 3;
        }
      }
      if ((enemies->flags2 >> 4 & 1) != 0) {
        enemies->life = enemies->life - local_c;
      }
      fVar1 = (enemies->position).y;
      if (g_Player.position_of_last_enemy_hit.y < fVar1 !=
          (NAN(g_Player.position_of_last_enemy_hit.y) || NAN(fVar1))) {
        g_Player.position_of_last_enemy_hit.x = (enemies->position).x;
        g_Player.position_of_last_enemy_hit.y = (enemies->position).y;
        g_Player.position_of_last_enemy_hit.z = (enemies->position).z;
      }
    }
    if ((0 < enemies->life) || ((enemies->flags2 & 1) == 0)) goto LAB_00412ce2;
    enemies->life_callback_threshold = -1;
    enemies->timer_callback_threshold = -1;
    switch(enemies->flags2 >> 5) {
    case 0:
      g_GameManager.score = g_GameManager.score + enemies->score;
      enemies->flags1 = enemies->flags1 & 0x7f;
      goto LAB_00412a4d;
    case 1:
      g_GameManager.score = g_GameManager.score + enemies->score;
      enemies->flags2 = enemies->flags2 & 0xfe;
LAB_00412a4d:
      if ((enemies->flags2 >> 3 & 1) != 0) {
        g_Gui.boss_present = false;
        Enemy::FUN_004114c0(enemies);
      }
switchD_00412938_caseD_2:
      if ((char)enemies->item_drop < '\0') {
        if (enemies->item_drop == ITEM_NO_ITEM) {
          if ((uint)param_1->random_item_spawn_index % 3 == 0) {
            EffectManager::SpawnEffect
                      (&g_EffectManager,enemies->death_anm2 + 4,&enemies->position,6,0xffffffff);
            ItemManager::SpawnItem
                      (&g_ItemManager,&enemies->position,
                       BYTE_ARRAY_00476338[param_1->random_item_table_index],local_8);
            param_1->random_item_table_index = param_1->random_item_table_index + 1;
            if (0x1f < param_1->random_item_table_index) {
              param_1->random_item_table_index = 0;
            }
          }
          param_1->random_item_spawn_index = param_1->random_item_spawn_index + 1;
        }
      }
      else {
        EffectManager::SpawnEffect
                  (&g_EffectManager,enemies->death_anm2 + 4,&enemies->position,3,0xffffffff);
        ItemManager::SpawnItem(&g_ItemManager,&enemies->position,enemies->item_drop,local_8);
      }
      if (((enemies->flags2 >> 3 & 1) != 0) && (DAT_005a5f90 == 0)) {
        BulletManager::FUN_00414360(&g_BulletManager,0x3200,0);
      }
      enemies->life = 0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      enemies->life = 1;
      enemies->flags2 = enemies->flags2 & 0xef;
      enemies->flags2 = enemies->flags2 & 0x1f;
      g_Gui.boss_present = false;
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)enemies->death_anm1,&enemies->position,1,0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)enemies->death_anm1,&enemies->position,1,0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)enemies->death_anm1,&enemies->position,1,0xffffffff);
    }
    uVar5 = local_10 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,uVar5 + SOUND_2,0);
    EffectManager::SpawnEffect
              (&g_EffectManager,(uint)enemies->death_anm1,&enemies->position,1,0xffffffff);
    EffectManager::SpawnEffect
              (&g_EffectManager,enemies->death_anm2 + 4,&enemies->position,4,0xffffffff);
    iVar3._0_2_ = enemies->death_callback_sub;
    iVar3._2_2_ = enemies->interrupts[0];
    if (-1 < iVar3) {
      enemies->bullet_rank_speed_low = -0.5;
      enemies->bullet_rank_speed_high = 0.5;
      enemies->bullet_rank_amount1_low = 0;
      enemies->bullet_rank_amount1_high = 0;
      enemies->bullet_rank_amount2_low = 0;
      enemies->bullet_rank_amount2_high = 0;
      enemies->stack_depth = 0;
      EclManager::FUN_00407440(&g_EclManager,&enemies->current_context,enemies->death_callback_sub);
      enemies->death_callback_sub = -1;
      enemies->interrupts[0] = -1;
    }
LAB_00412ce2:
    if (((enemies->flags2 >> 3 & 1) != 0) && (BVar4 = Gui::HasCurrentMsgIdx(&g_Gui), BVar4 == 0)) {
      g_Gui.boss_health_bar1 = (float)enemies->life / (float)enemies->max_life;
    }
    if (enemies->field43_0xe41 == 0) {
      if (enemies->life < iVar2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_TOTAL_BOSS_DEATH,0);
        *(uint *)&(enemies->primary_vm).flags = *(uint *)&(enemies->primary_vm).flags | 8;
        enemies->field43_0xe41 = 4;
      }
      else {
        *(uint *)&(enemies->primary_vm).flags = *(uint *)&(enemies->primary_vm).flags & 0xfffffff7;
      }
    }
    else {
      enemies->field43_0xe41 = enemies->field43_0xe41 - 1;
      *(uint *)&(enemies->primary_vm).flags = *(uint *)&(enemies->primary_vm).flags & 0xfffffff7;
    }
LAB_00412dbc:
    FUN_00412e50(enemies);
    if ((char)g_GameManager.unk_0x2c == '\0') {
      (enemies->boss_timer).previous = (enemies->boss_timer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(enemies->boss_timer).current,&(enemies->boss_timer).subFrame);
    }
LAB_00412416:
    local_10 = local_10 + 1;
    enemies = enemies + 1;
  } while( true );
}

