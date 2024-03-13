
undefined4 __thiscall MainMenu::FUN_00437b41(MainMenu *this)

{
  ZunResult cursorMove;
  int iVar1;
  MainMenu *local_c;
  int local_8;
  
  cursorMove = MoveCursor(this,8);
  if ((((this->cursor == 1) &&
       (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,0), iVar1 == 0)) &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,1), iVar1 == 0)) &&
     ((iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,0), iVar1 == 0 &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,1), iVar1 == 0)))) {
    this->cursor = this->cursor + cursorMove;
  }
  local_c = this;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    FUN_004377a3(local_c,local_8,this->cursor,0xffff0000,0x80300000,0x7a);
    local_c = (MainMenu *)(local_c->AnmVMArray + 1);
  }
  if (0x13 < this->stateTimerMaybe) {
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      switch(this->cursor) {
      case 0:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        this->gameState = STATE_DIFFICULTY_LOAD;
        g_GameManager.field30_0x1823 = 0;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        this->stateTimerMaybe = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 60;
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
            this->AnmVMArray[local_8].pendingInterrupt = 4;
          }
          this->gameState = STATE_DIFFICULTY_LOAD;
          g_GameManager.field30_0x1823 = 0;
          g_GameManager.difficulty = 4;
          this->stateTimerMaybe = 0;
          this->unk_81fc = 2.0;
          this->maybe_menu_text_color = 0xff000000;
          this->unk_820c = 0;
          this->isActive = 60;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        }
        break;
      case 2:
        g_GameManager.field30_0x1823 = 1;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        this->gameState = STATE_DIFFICULTY_LOAD;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = 1;
        }
        if (3 < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = 1;
        }
        this->stateTimerMaybe = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 3:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        this->gameState = STATE_REPLAY_LOAD;
        g_GameManager.field30_0x1823 = 0;
        this->stateTimerMaybe = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 4:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        this->gameState = STATE_SCORE;
        this->stateTimerMaybe = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 5:
        this->gameState = STATE_MUSIC_ROOM;
        this->stateTimerMaybe = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 6:
        this->gameState = STATE_OPTIONS;
        this->stateTimerMaybe = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 3;
        }
        this->cursor = 0;
        this->field_0x8230 = g_Supervisor.cfg.colorMode16bit;
        this->field_0x8231 = g_Supervisor.cfg.windowed;
        this->field_0x8232 = g_Supervisor.cfg.frameskipConfig;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 7:
        this->gameState = STATE_QUIT;
        this->stateTimerMaybe = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
      }
    }
    if (((g_CurFrameInput & 0x200) != 0) &&
       ((g_CurFrameInput & 0x200) != (g_LastFrameInput & 0x200))) {
      this->gameState = STATE_QUIT;
      this->stateTimerMaybe = 0;
      for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
        this->AnmVMArray[local_8].pendingInterrupt = 4;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      this->cursor = 7;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
    }
  }
  return 0;
}

