
undefined4 __fastcall MainMenu::FUN_00437b41(MainMenu *menu)

{
  ZunResult cursorMove;
  int iVar1;
  MainMenu *local_c;
  int local_8;
  
  cursorMove = MoveCursor(menu,8);
  if ((((menu->cursor == 1) &&
       (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,0), iVar1 == 0)) &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,1), iVar1 == 0)) &&
     ((iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,0), iVar1 == 0 &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,1), iVar1 == 0)))) {
    menu->cursor = menu->cursor + cursorMove;
  }
  local_c = menu;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    FUN_004377a3(local_c,local_8,menu->cursor,0xffff0000,0x80300000,0x7a);
    local_c = (MainMenu *)(local_c->AnmVMArray + 1);
  }
  if (0x13 < menu->gameSubState) {
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      switch(menu->cursor) {
      case 0:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        menu->gameState = STATE_6;
        g_GameManager.field30_0x1823 = 0;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        menu->gameSubState = 0;
        menu->unk_81fc = 2.0;
        menu->maybe_menu_text_color = 0xff000000;
        menu->unk_820c = 0;
        menu->isActive = 60;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 1:
        iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,0);
        if ((((iVar1 == 0) &&
             (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,1), iVar1 == 0)) &&
            (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,0), iVar1 == 0)) &&
           (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,1), iVar1 == 0)) {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        }
        else {
          for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
            menu->AnmVMArray[local_8].pendingInterrupt = 4;
          }
          menu->gameState = STATE_6;
          g_GameManager.field30_0x1823 = 0;
          g_GameManager.difficulty = 4;
          menu->gameSubState = 0;
          menu->unk_81fc = 2.0;
          menu->maybe_menu_text_color = 0xff000000;
          menu->unk_820c = 0;
          menu->isActive = 60;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        }
        break;
      case 2:
        g_GameManager.field30_0x1823 = 1;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        menu->gameState = STATE_6;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        menu->gameSubState = 0;
        menu->unk_81fc = 2.0;
        menu->maybe_menu_text_color = 0xff000000;
        menu->unk_820c = 0;
        menu->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 3:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        menu->gameState = STATE_UNLOAD_TO_REPLAY_MENU;
        g_GameManager.field30_0x1823 = 0;
        menu->gameSubState = 0;
        menu->unk_81fc = 2.0;
        menu->maybe_menu_text_color = 0xff000000;
        menu->unk_820c = 0;
        menu->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 4:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        menu->gameState = STATE_10;
        menu->gameSubState = 0;
        menu->unk_81fc = 2.0;
        menu->maybe_menu_text_color = 0xff000000;
        menu->unk_820c = 0;
        menu->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 5:
        menu->gameState = 0x10;
        menu->gameSubState = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 6:
        menu->gameState = STATE_3;
        menu->gameSubState = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 3;
        }
        menu->cursor = 0;
        menu->field_0x8230 = g_Supervisor.cfg.colorMode16bit;
        menu->field_0x8231 = g_Supervisor.cfg.windowed;
        menu->field_0x8232 = g_Supervisor.cfg.frameskipConfig;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 7:
        menu->gameState = STATE_4;
        menu->gameSubState = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          menu->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
      }
    }
    if (((g_CurFrameInput & 0x200) != 0) &&
       ((g_CurFrameInput & 0x200) != (g_LastFrameInput & 0x200))) {
      menu->gameState = STATE_4;
      menu->gameSubState = 0;
      for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
        menu->AnmVMArray[local_8].pendingInterrupt = 4;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      menu->cursor = 7;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
    }
  }
  return 0;
}

