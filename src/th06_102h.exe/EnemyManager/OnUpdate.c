
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 EnemyManager::OnUpdate(EnemyManager *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Enemy *curEnemy;
  int local_20;
  D3DXVECTOR3 local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00411530(param_1);
  curEnemy = param_1->enemies;
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
    if (-1 < (char)curEnemy->flags1) goto LAB_00412416;
    param_1->enemy_count_real = param_1->enemy_count_real + 1;
    Enemy::Move(curEnemy);
    Enemy::ClampPos(curEnemy);
    if (((curEnemy->flags2 >> 2 & 1) == 0) &&
       (iVar2 = GameManager::IsInbounds
                          ((curEnemy->position).x,(curEnemy->position).y,
                           ((curEnemy->primary_vm).sprite)->widthPx,
                           ((curEnemy->primary_vm).sprite)->heightPx), iVar2 != 0)) {
      curEnemy->flags2 = curEnemy->flags2 | 4;
    }
    if (((curEnemy->flags2 >> 2 & 1) == 1) &&
       (iVar2 = GameManager::IsInbounds
                          ((curEnemy->position).x,(curEnemy->position).y,
                           ((curEnemy->primary_vm).sprite)->widthPx,
                           ((curEnemy->primary_vm).sprite)->heightPx), iVar2 == 0)) {
      curEnemy->flags1 = curEnemy->flags1 & 0x7f;
      Enemy::FUN_004121b0(curEnemy);
      goto LAB_00412416;
    }
    if (-1 < curEnemy->life_callback_threshold) {
      Enemy::FUN_00411da0(curEnemy);
    }
    if (-1 < curEnemy->timer_callback_threshold) {
      Enemy::FUN_00411f40(curEnemy);
    }
    iVar2 = EclManager::run_ecl(curEnemy);
    if (iVar2 == -1) {
      curEnemy->flags1 = curEnemy->flags1 & 0x7f;
      Enemy::FUN_004121b0(curEnemy);
      goto LAB_00412416;
    }
    Enemy::ClampPos(curEnemy);
    (curEnemy->primary_vm).color = curEnemy->color;
    AnmManager::ExecuteScript(g_AnmManager,&curEnemy->primary_vm);
    curEnemy->color = (curEnemy->primary_vm).color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < curEnemy->vms[local_20].anmFileIndex) &&
         (iVar2 = AnmManager::ExecuteScript(g_AnmManager,curEnemy->vms + local_20), iVar2 != 0)) {
        curEnemy->vms[local_20].anmFileIndex = -1;
      }
    }
    local_8 = 0;
    if (((curEnemy->flags2 >> 2 & 1) == 0) || ((curEnemy->flags3 >> 3 & 1) != 0)) goto LAB_00412dbc;
    iVar2 = curEnemy->life;
    if (((curEnemy->flags2 >> 1 & 1) != 0) && ((curEnemy->flags2 & 1) != 0)) {
      local_1c.z = (curEnemy->hitbox_dimensions).z * 0.6666667;
      local_1c.y = (curEnemy->hitbox_dimensions).y * 0.6666667;
      local_1c.x = (curEnemy->hitbox_dimensions).x * 0.6666667;
      iVar3 = Player::CalcKillBoxCollision(&g_Player,&curEnemy->position,&local_1c);
      if (((iVar3 == 1) && ((curEnemy->flags2 & 1) != 0)) && ((curEnemy->flags2 >> 3 & 1) == 0)) {
        curEnemy->life = curEnemy->life + -10;
      }
    }
    if ((curEnemy->flags2 & 1) != 0) {
      local_c = Player::FUN_004264b0
                          (&g_Player,&curEnemy->position,&curEnemy->hitbox_dimensions,&local_8);
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
      if ((curEnemy->flags2 >> 4 & 1) != 0) {
        curEnemy->life = curEnemy->life - local_c;
      }
      fVar1 = (curEnemy->position).y;
      if (g_Player.position_of_last_enemy_hit.y < fVar1 !=
          (NAN(g_Player.position_of_last_enemy_hit.y) || NAN(fVar1))) {
        g_Player.position_of_last_enemy_hit.x = (curEnemy->position).x;
        g_Player.position_of_last_enemy_hit.y = (curEnemy->position).y;
        g_Player.position_of_last_enemy_hit.z = (curEnemy->position).z;
      }
    }
    if ((0 < curEnemy->life) || ((curEnemy->flags2 & 1) == 0)) goto LAB_00412ce2;
    curEnemy->life_callback_threshold = -1;
    curEnemy->timer_callback_threshold = -1;
    switch(curEnemy->flags2 >> 5) {
    case 0:
      g_GameManager.score = g_GameManager.score + curEnemy->score;
      curEnemy->flags1 = curEnemy->flags1 & 0x7f;
      goto LAB_00412a4d;
    case 1:
      g_GameManager.score = g_GameManager.score + curEnemy->score;
      curEnemy->flags2 = curEnemy->flags2 & 0xfe;
LAB_00412a4d:
      if ((curEnemy->flags2 >> 3 & 1) != 0) {
        g_Gui.boss_present = false;
        Enemy::ResetEffectArray(curEnemy);
      }
switchD_00412938_caseD_2:
      if ((char)curEnemy->item_drop < '\0') {
        if (curEnemy->item_drop == ITEM_NO_ITEM) {
          if ((uint)param_1->random_item_spawn_index % 3 == 0) {
            EffectManager::SpawnEffect
                      (&g_EffectManager,curEnemy->death_anm2 + 4,&curEnemy->position,6,0xffffffff);
            ItemManager::SpawnItem
                      (&g_ItemManager,&curEnemy->position,
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
                  (&g_EffectManager,curEnemy->death_anm2 + 4,&curEnemy->position,3,0xffffffff);
        ItemManager::SpawnItem(&g_ItemManager,&curEnemy->position,curEnemy->item_drop,local_8);
      }
      if (((curEnemy->flags2 >> 3 & 1) != 0) && (g_RunningSpellcardInfo.is_active == 0)) {
        BulletManager::FUN_00414360(&g_BulletManager,0x3200,0);
      }
      curEnemy->life = 0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      curEnemy->life = 1;
      curEnemy->flags2 = curEnemy->flags2 & 0xef;
      curEnemy->flags2 = curEnemy->flags2 & 0x1f;
      g_Gui.boss_present = false;
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)curEnemy->death_anm1,&curEnemy->position,1,0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)curEnemy->death_anm1,&curEnemy->position,1,0xffffffff);
      EffectManager::SpawnEffect
                (&g_EffectManager,(uint)curEnemy->death_anm1,&curEnemy->position,1,0xffffffff);
    }
    uVar6 = local_10 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,uVar6 + SOUND_2,0);
    EffectManager::SpawnEffect
              (&g_EffectManager,(uint)curEnemy->death_anm1,&curEnemy->position,1,0xffffffff);
    EffectManager::SpawnEffect
              (&g_EffectManager,curEnemy->death_anm2 + 4,&curEnemy->position,4,0xffffffff);
    iVar3._0_2_ = curEnemy->death_callback_sub;
    iVar3._2_2_ = curEnemy->interrupts[0];
    if (-1 < iVar3) {
      curEnemy->bullet_rank_speed_low = -0.5;
      curEnemy->bullet_rank_speed_high = 0.5;
      curEnemy->bullet_rank_amount1_low = 0;
      curEnemy->bullet_rank_amount1_high = 0;
      curEnemy->bullet_rank_amount2_low = 0;
      curEnemy->bullet_rank_amount2_high = 0;
      curEnemy->stack_depth = 0;
      EclManager::FUN_00407440
                (&g_EclManager,&curEnemy->current_context,curEnemy->death_callback_sub);
      curEnemy->death_callback_sub = -1;
      curEnemy->interrupts[0] = -1;
    }
LAB_00412ce2:
    if (((curEnemy->flags2 >> 3 & 1) != 0) && (BVar4 = Gui::HasCurrentMsgIdx(&g_Gui), BVar4 == 0)) {
      g_Gui.boss_health_bar1 = (float)curEnemy->life / (float)curEnemy->max_life;
    }
    if (curEnemy->field43_0xe41 == 0) {
      if (curEnemy->life < iVar2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_TOTAL_BOSS_DEATH,0);
        uVar5._0_2_ = (curEnemy->primary_vm).flags;
        uVar5._2_1_ = (curEnemy->primary_vm).unk_82[0];
        uVar5._3_1_ = (curEnemy->primary_vm).unk_82[1];
        uVar5 = uVar5 | 8;
        (curEnemy->primary_vm).flags = (short)uVar5;
        (curEnemy->primary_vm).unk_82[0] = (char)(uVar5 >> 0x10);
        (curEnemy->primary_vm).unk_82[1] = (char)(uVar5 >> 0x18);
        curEnemy->field43_0xe41 = 4;
      }
      else {
        uVar6._0_2_ = (curEnemy->primary_vm).flags;
        uVar6._2_1_ = (curEnemy->primary_vm).unk_82[0];
        uVar6._3_1_ = (curEnemy->primary_vm).unk_82[1];
        uVar6 = uVar6 & 0xfffffff7;
        (curEnemy->primary_vm).flags = (short)uVar6;
        (curEnemy->primary_vm).unk_82[0] = (char)(uVar6 >> 0x10);
        (curEnemy->primary_vm).unk_82[1] = (char)(uVar6 >> 0x18);
      }
    }
    else {
      curEnemy->field43_0xe41 = curEnemy->field43_0xe41 - 1;
      uVar7._0_2_ = (curEnemy->primary_vm).flags;
      uVar7._2_1_ = (curEnemy->primary_vm).unk_82[0];
      uVar7._3_1_ = (curEnemy->primary_vm).unk_82[1];
      uVar7 = uVar7 & 0xfffffff7;
      (curEnemy->primary_vm).flags = (short)uVar7;
      (curEnemy->primary_vm).unk_82[0] = (char)(uVar7 >> 0x10);
      (curEnemy->primary_vm).unk_82[1] = (char)(uVar7 >> 0x18);
    }
LAB_00412dbc:
    FUN_00412e50(curEnemy);
    if ((char)g_GameManager.isTimeStopped == '\0') {
      (curEnemy->boss_timer).previous = (curEnemy->boss_timer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(curEnemy->boss_timer).current,&(curEnemy->boss_timer).subFrame);
    }
LAB_00412416:
    local_10 = local_10 + 1;
    curEnemy = curEnemy + 1;
  } while( true );
}

