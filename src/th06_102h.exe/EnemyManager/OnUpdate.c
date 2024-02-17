
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 EnemyManager::OnUpdate(EnemyManager *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  Enemy *local_28;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00411530(param_1);
  local_28 = param_1->enemies;
  param_1->enemy_count_real = 0;
  local_10 = 0;
  do {
    if (0xff < (int)local_10) {
      (param_1->timeline_time).previous = (param_1->timeline_time).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(param_1->timeline_time).current,&(param_1->timeline_time).subFrame)
      ;
      return 1;
    }
    if (-1 < (char)local_28->flags1) goto LAB_00412416;
    param_1->enemy_count_real = param_1->enemy_count_real + 1;
    Enemy::FUN_00413380(local_28);
    Enemy::FUN_00412240(local_28);
    if (((local_28->flags2 >> 2 & 1) == 0) &&
       (iVar2 = GameManager::FUN_0041b5e1
                          ((local_28->position).x,(local_28->position).y,
                           ((local_28->primary_vm).sprite)->widthPx,
                           ((local_28->primary_vm).sprite)->heightPx), iVar2 != 0)) {
      local_28->flags2 = local_28->flags2 | 4;
    }
    if (((local_28->flags2 >> 2 & 1) == 1) &&
       (iVar2 = GameManager::FUN_0041b5e1
                          ((local_28->position).x,(local_28->position).y,
                           ((local_28->primary_vm).sprite)->widthPx,
                           ((local_28->primary_vm).sprite)->heightPx), iVar2 == 0)) {
      local_28->flags1 = local_28->flags1 & 0x7f;
      Enemy::FUN_004121b0(local_28);
      goto LAB_00412416;
    }
    if (-1 < local_28->life_callback_threshold) {
      Enemy::FUN_00411da0(local_28);
    }
    if (-1 < local_28->timer_callback_threshold) {
      Enemy::FUN_00411f40(local_28);
    }
    iVar2 = EclManager::run_ecl(local_28);
    if (iVar2 == -1) {
      local_28->flags1 = local_28->flags1 & 0x7f;
      Enemy::FUN_004121b0(local_28);
      goto LAB_00412416;
    }
    Enemy::FUN_00412240(local_28);
    (local_28->primary_vm).color = (D3DCOLORUNION)local_28->field31_0xcfc;
    AnmManager::ExecuteScript(g_AnmManager,&local_28->primary_vm);
    local_28->field31_0xcfc = (D3DCOLOR)(local_28->primary_vm).color;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if ((-1 < local_28->vms[local_20].anmFileIndex) &&
         (iVar2 = AnmManager::ExecuteScript(g_AnmManager,local_28->vms + local_20), iVar2 != 0)) {
        local_28->vms[local_20].anmFileIndex = -1;
      }
    }
    local_8 = 0;
    if (((local_28->flags2 >> 2 & 1) == 0) || ((local_28->flags3 >> 3 & 1) != 0)) goto LAB_00412dbc;
    iVar2 = local_28->life;
    if (((local_28->flags2 >> 1 & 1) != 0) && ((local_28->flags2 & 1) != 0)) {
      local_14 = (local_28->hitbox_dimensions).z * 0.6666667;
      local_18 = (local_28->hitbox_dimensions).y * 0.6666667;
      local_1c = (local_28->hitbox_dimensions).x * 0.6666667;
      iVar3 = Player::CalcKillBoxCollision(&g_Player,&(local_28->position).x,&local_1c);
      if (((iVar3 == 1) && ((local_28->flags2 & 1) != 0)) && ((local_28->flags2 >> 3 & 1) == 0)) {
        local_28->life = local_28->life + -10;
      }
    }
    if ((local_28->flags2 & 1) != 0) {
      local_c = Player::FUN_004264b0
                          (&g_Player,&(local_28->position).x,&(local_28->hitbox_dimensions).x,
                           &local_8);
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
      if ((local_28->flags2 >> 4 & 1) != 0) {
        local_28->life = local_28->life - local_c;
      }
      fVar1 = (local_28->position).y;
      if (g_Player.position_of_last_enemy_hit.y < fVar1 !=
          (NAN(g_Player.position_of_last_enemy_hit.y) || NAN(fVar1))) {
        g_Player.position_of_last_enemy_hit.x = (local_28->position).x;
        g_Player.position_of_last_enemy_hit.y = (local_28->position).y;
        g_Player.position_of_last_enemy_hit.z = (local_28->position).z;
      }
    }
    if ((0 < local_28->life) || ((local_28->flags2 & 1) == 0)) goto LAB_00412ce2;
    local_28->life_callback_threshold = -1;
    local_28->timer_callback_threshold = -1;
    switch(local_28->flags2 >> 5) {
    case 0:
      g_GameManager.score = g_GameManager.score + local_28->score;
      local_28->flags1 = local_28->flags1 & 0x7f;
      goto LAB_00412a4d;
    case 1:
      g_GameManager.score = g_GameManager.score + local_28->score;
      local_28->flags2 = local_28->flags2 & 0xfe;
LAB_00412a4d:
      if ((local_28->flags2 >> 3 & 1) != 0) {
        g_Gui.boss_present = false;
        Enemy::FUN_004114c0(local_28);
      }
switchD_00412938_caseD_2:
      if ((char)local_28->item_drop < '\0') {
        if (local_28->item_drop == 0xff) {
          if ((uint)param_1->random_item_spawn_index % 3 == 0) {
            EffectManager::FUN_0040ef50
                      (&g_EffectManager,local_28->death_anm2 + 4,&local_28->position,6,0xffffffff);
            FUN_0041f290(&local_28->position,(&DAT_00476338)[param_1->random_item_table_index],
                         local_8);
            param_1->random_item_table_index = param_1->random_item_table_index + 1;
            if (0x1f < param_1->random_item_table_index) {
              param_1->random_item_table_index = 0;
            }
          }
          param_1->random_item_spawn_index = param_1->random_item_spawn_index + 1;
        }
      }
      else {
        EffectManager::FUN_0040ef50
                  (&g_EffectManager,local_28->death_anm2 + 4,&local_28->position,3,0xffffffff);
        FUN_0041f290(&local_28->position,(int)(char)local_28->item_drop,local_8);
      }
      if (((local_28->flags2 >> 3 & 1) != 0) && (DAT_005a5f90 == 0)) {
        BulletManager::FUN_00414360(&g_BulletManager,0x3200,0);
      }
      local_28->life = 0;
      break;
    case 2:
      goto switchD_00412938_caseD_2;
    case 3:
      local_28->life = 1;
      local_28->flags2 = local_28->flags2 & 0xef;
      local_28->flags2 = local_28->flags2 & 0x1f;
      g_Gui.boss_present = false;
      EffectManager::FUN_0040ef50
                (&g_EffectManager,(uint)local_28->death_anm1,&local_28->position,1,0xffffffff);
      EffectManager::FUN_0040ef50
                (&g_EffectManager,(uint)local_28->death_anm1,&local_28->position,1,0xffffffff);
      EffectManager::FUN_0040ef50
                (&g_EffectManager,(uint)local_28->death_anm1,&local_28->position,1,0xffffffff);
    }
    uVar5 = local_10 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,uVar5 + 2);
    EffectManager::FUN_0040ef50
              (&g_EffectManager,(uint)local_28->death_anm1,&local_28->position,1,0xffffffff);
    EffectManager::FUN_0040ef50
              (&g_EffectManager,local_28->death_anm2 + 4,&local_28->position,4,0xffffffff);
    iVar3._0_2_ = local_28->death_callback_sub;
    iVar3._2_2_ = local_28->interrupts[0];
    if (-1 < iVar3) {
      local_28->bullet_rank_speed_low = -0.5;
      local_28->bullet_rank_speed_high = 0.5;
      local_28->bullet_rank_amount1_low = 0;
      local_28->bullet_rank_amount1_high = 0;
      local_28->bullet_rank_amount2_low = 0;
      local_28->bullet_rank_amount2_high = 0;
      local_28->stack_depth = 0;
      EclManager::FUN_00407440
                (&g_EclManager,&local_28->current_context,local_28->death_callback_sub);
      local_28->death_callback_sub = -1;
      local_28->interrupts[0] = -1;
    }
LAB_00412ce2:
    if (((local_28->flags2 >> 3 & 1) != 0) && (BVar4 = Gui::HasCurrentMsgIdx(&g_Gui), BVar4 == 0)) {
      g_Gui.boss_health_bar1 = (float)local_28->life / (float)local_28->max_life;
    }
    if (local_28->field43_0xe41 == 0) {
      if (local_28->life < iVar2) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0x14);
        (local_28->primary_vm).flags = (local_28->primary_vm).flags | 8;
        local_28->field43_0xe41 = 4;
      }
      else {
        (local_28->primary_vm).flags = (local_28->primary_vm).flags & 0xfffffff7;
      }
    }
    else {
      local_28->field43_0xe41 = local_28->field43_0xe41 - 1;
      (local_28->primary_vm).flags = (local_28->primary_vm).flags & 0xfffffff7;
    }
LAB_00412dbc:
    FUN_00412e50(local_28);
    if ((char)g_GameManager.field11_0x2c == '\0') {
      (local_28->boss_timer).previous = (local_28->boss_timer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(local_28->boss_timer).current,&(local_28->boss_timer).subFrame);
    }
LAB_00412416:
    local_10 = local_10 + 1;
    local_28 = local_28 + 1;
  } while( true );
}

