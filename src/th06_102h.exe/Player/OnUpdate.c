
ChainCallbackResult Player::OnUpdate(Player *param_1)

{
  float fVar1;
  AnmManager *this;
  BOOL BVar2;
  long lVar3;
  uint uVar4;
  int local_8;
  
  if ((char)g_GameManager.unk_0x2c != '\0') {
    return CHAIN_CALLBACK_RESULT_CONTINUE;
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    param_1->unk_638[local_8].x = 0.0;
  }
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    param_1->unk_8b8[local_8].size1.x = 0.0;
  }
  if ((param_1->inner).isUsingBomb == 0) {
    BVar2 = Gui::HasCurrentMsgIdx(&g_Gui);
    if (((((BVar2 == 0) && (param_1->respawnTimer != 0)) &&
         ('\0' < (char)g_GameManager.bombs_remaining)) &&
        (((g_CurFrameInput & KEY_BOMB) != 0 && ((g_CurFrameInput & 2) != (g_LastFrameInput & 2)))))
       && ((param_1->inner).bombCalc != (void *)0x0)) {
      g_GameManager.unk_0x24 = g_GameManager.unk_0x24 + 1;
      g_GameManager.bombs_remaining = g_GameManager.bombs_remaining - 1;
      g_Gui.flags = g_Gui.flags & 0xfffffff3 | 8;
      (param_1->inner).isUsingBomb = 1;
      (param_1->inner).unk8.current = 0;
      (param_1->inner).unk8.subFrame = 0.0;
      (param_1->inner).unk8.previous = -999;
      (param_1->inner).unk4 = 999;
      (*(code *)(param_1->inner).bombCalc)(param_1);
      isPlayerAlive = 0;
      GameManager::DecreaseSubrank(&g_GameManager,200);
      DAT_005a5f9c = DAT_005a5f90;
    }
  }
  else {
    (*(code *)(param_1->inner).bombCalc)(param_1);
  }
  if (param_1->playerState == PLAYER_STATE_DEAD) {
    if (param_1->respawnTimer != 0) {
      param_1->respawnTimer = param_1->respawnTimer + -1;
      if (param_1->respawnTimer == 0) {
        g_GameManager.power_item_count_for_score = 0;
        if ((char)g_GameManager.lives_remaining < 1) {
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_FULL_POWER,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_FULL_POWER,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_FULL_POWER,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_FULL_POWER,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_FULL_POWER,2);
          g_GameManager.current_power = 0;
          g_GameManager.extra_lives = 0xff;
        }
        else {
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_BIG,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_SMALL,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_SMALL,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_SMALL,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_SMALL,2);
          ItemManager::SpawnItem(&g_ItemManager,&param_1->positionCenter,ITEM_POWER_SMALL,2);
          if (g_GameManager.current_power < 17) {
            g_GameManager.current_power = 0;
          }
          else {
            g_GameManager.current_power = g_GameManager.current_power - 16;
          }
        }
        g_Gui.flags = g_Gui.flags & 0xffffffcf | 0x20;
        GameManager::DecreaseSubrank(&g_GameManager,0x640);
      }
      goto LAB_00428fa8;
    }
    fVar1 = ((float)(param_1->blinkingPlayerTimer).current + (param_1->blinkingPlayerTimer).subFrame
            ) / 30.0;
    (param_1->vm0).scaleY = fVar1 * 3.0 + 1.0;
    (param_1->vm0).scaleX = 1.0 - fVar1 * 1.0;
    lVar3 = __ftol2(255.0 - (((float)(param_1->blinkingPlayerTimer).current +
                             (param_1->blinkingPlayerTimer).subFrame) * 255.0) / 30.0);
    (param_1->vm0).color.color = lVar3 << 0x18 | 0xffffff;
    *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags | 4;
    param_1->unk_a10 = 0.0;
    param_1->unk_a14 = 0;
    if ((param_1->blinkingPlayerTimer).current < 0x1e) goto LAB_00428fa8;
    param_1->playerState = PLAYER_STATE_SPAWNING;
    (param_1->positionCenter).x = g_GameManager.arcade_region_size.x / 2.0;
    (param_1->positionCenter).y = g_GameManager.arcade_region_size.y - 64.0;
    (param_1->positionCenter).z = 0.2;
    (param_1->blinkingPlayerTimer).current = 0;
    (param_1->blinkingPlayerTimer).subFrame = 0.0;
    (param_1->blinkingPlayerTimer).previous = -999;
    (param_1->vm0).scaleX = 3.0;
    (param_1->vm0).scaleY = 3.0;
    this = g_AnmManager;
    (param_1->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(this,&param_1->vm0,this->scripts[0x400]);
    if ((char)g_GameManager.lives_remaining < '\x01') {
      g_GameManager.is_in_retry_menu = 1;
      goto LAB_00428fa8;
    }
    g_GameManager.lives_remaining = g_GameManager.lives_remaining - 1;
    if (((int)g_GameManager.difficulty < 4) && (g_GameManager.is_in_practice_mode == 0)) {
      g_GameManager.bombs_remaining = g_Supervisor.defaultConfig.bombCount;
    }
    else {
      g_GameManager.bombs_remaining = 3;
    }
    g_Gui.flags = g_Gui.flags & 0xfffffff0 | 10;
  }
  else if (param_1->playerState != PLAYER_STATE_SPAWNING) goto LAB_00428fa8;
  param_1->unk_9dc = 0x5a;
  fVar1 = 1.0 - ((float)(param_1->blinkingPlayerTimer).current +
                (param_1->blinkingPlayerTimer).subFrame) / 30.0;
  (param_1->vm0).scaleY = fVar1 * 2.0 + 1.0;
  (param_1->vm0).scaleX = 1.0 - fVar1 * 1.0;
  *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags | 4;
  param_1->verticalMovementSpeedMultiplierDuringBomb = 1.0;
  param_1->horizontalMovementSpeedMultiplierDuringBomb = 1.0;
  (param_1->vm0).color.color =
       ((param_1->blinkingPlayerTimer).current * 0xff) / 0x1e << 0x18 | 0xffffff;
  param_1->respawnTimer = 0;
  if (0x1d < (param_1->blinkingPlayerTimer).current) {
    param_1->playerState = PLAYER_STATE_USING_BOMB;
    (param_1->vm0).scaleX = 1.0;
    (param_1->vm0).scaleY = 1.0;
    (param_1->vm0).color.color = 0xffffffff;
    *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags & 0xfffffffb;
    (param_1->blinkingPlayerTimer).current = 0xf0;
    (param_1->blinkingPlayerTimer).subFrame = 0.0;
    (param_1->blinkingPlayerTimer).previous = -999;
    param_1->respawnTimer = 6;
  }
LAB_00428fa8:
  if (param_1->unk_9dc != 0) {
    param_1->unk_9dc = param_1->unk_9dc + -1;
    BulletManager::FUN_00414160(&g_BulletManager,0);
  }
  if (param_1->playerState == PLAYER_STATE_USING_BOMB) {
    ZunTimer::Decrement(&param_1->blinkingPlayerTimer,1);
    if ((param_1->blinkingPlayerTimer).current < 1) {
      param_1->playerState = PLAYER_STATE_ALIVE;
      (param_1->blinkingPlayerTimer).current = 0;
      (param_1->blinkingPlayerTimer).subFrame = 0.0;
      (param_1->blinkingPlayerTimer).previous = -999;
      *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags & 0xfffffff7;
      (param_1->vm0).color.color = 0xffffffff;
    }
    else {
      uVar4 = (param_1->blinkingPlayerTimer).current & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      if ((int)uVar4 < 2) {
        *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags | 8;
        (param_1->vm0).color.color = 0xff404040;
      }
      else {
        *(uint *)&(param_1->vm0).flags = *(uint *)&(param_1->vm0).flags & 0xfffffff7;
        (param_1->vm0).color.color = 0xffffffff;
      }
    }
  }
  else {
    (param_1->blinkingPlayerTimer).previous = (param_1->blinkingPlayerTimer).current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->blinkingPlayerTimer).current,
               &(param_1->blinkingPlayerTimer).subFrame);
  }
  if ((param_1->playerState != PLAYER_STATE_DEAD) && (param_1->playerState != PLAYER_STATE_SPAWNING)
     ) {
    CalcMove(param_1);
  }
  AnmManager::ExecuteScript(g_AnmManager,&param_1->vm0);
  UpdatePlayerBullets(param_1);
  if (param_1->extraBulletSpawnState != EXTRA_BULLET_NONE) {
    AnmManager::ExecuteScript(g_AnmManager,param_1->vm1);
    AnmManager::ExecuteScript(g_AnmManager,param_1->vm1 + 1);
  }
  (param_1->position_of_last_enemy_hit).x = -999.0;
  (param_1->position_of_last_enemy_hit).y = -999.0;
  (param_1->position_of_last_enemy_hit).z = 0.0;
  FUN_00429710(param_1);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

