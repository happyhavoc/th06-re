
undefined4 __thiscall MainMenu::DrawStartMenu(MainMenu *this)

{
  int cursorMove;
  int iVar1;
  MainMenu *main_menu;
  int i;
  
  cursorMove = MoveCursor(this,8);
  if ((((this->cursor == 1) &&
       (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,0), iVar1 == 0)) &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,0,1), iVar1 == 0)) &&
     ((iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,0), iVar1 == 0 &&
      (iVar1 = GameManager::hasReachedMaxClears(&g_GameManager,1,1), iVar1 == 0)))) {
    this->cursor = this->cursor + cursorMove;
  }
  main_menu = this;
  for (i = 0; i < 8; i = i + 1) {
    DrawMenuItem(main_menu,i,this->cursor,0xffff0000,0x80300000,122);
    main_menu = (MainMenu *)&main_menu->field1_0x110;
  }
  if (0x13 < this->stateTimer) {
    if (((g_CurFrameInput & KEY_ENTER) != 0) &&
       ((g_CurFrameInput & KEY_ENTER) != (g_LastFrameInput & KEY_ENTER))) {
      switch(this->cursor) {
      case 0:
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        this->gameState = STATE_DIFFICULTY_LOAD;
        g_GameManager.field30_0x1823 = 0;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = NORMAL;
        }
        if (LUNATIC < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = NORMAL;
        }
        this->stateTimer = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 60;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 1:
        cursorMove = GameManager::hasReachedMaxClears(&g_GameManager,0,0);
        if ((((cursorMove == 0) &&
             (cursorMove = GameManager::hasReachedMaxClears(&g_GameManager,0,1), cursorMove == 0))
            && (cursorMove = GameManager::hasReachedMaxClears(&g_GameManager,1,0), cursorMove == 0))
           && (cursorMove = GameManager::hasReachedMaxClears(&g_GameManager,1,1), cursorMove == 0))
        {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        }
        else {
          for (i = 0; i < 0x7a; i = i + 1) {
            (&this->vm1)[i].pendingInterrupt = 4;
          }
          this->gameState = STATE_DIFFICULTY_LOAD;
          g_GameManager.field30_0x1823 = 0;
          g_GameManager.difficulty = EXTRA;
          this->stateTimer = 0;
          this->unk_81fc = 2.0;
          this->maybe_menu_text_color = 0xff000000;
          this->unk_820c = 0;
          this->isActive = 60;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        }
        break;
      case 2:
        g_GameManager.field30_0x1823 = 1;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        this->gameState = STATE_DIFFICULTY_LOAD;
        if (3 < (int)g_GameManager.difficulty) {
          g_GameManager.difficulty = NORMAL;
        }
        if (LUNATIC < g_Supervisor.cfg.defaultDifficulty) {
          g_Supervisor.cfg.defaultDifficulty = NORMAL;
        }
        this->stateTimer = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 3:
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        this->gameState = STATE_REPLAY_LOAD;
        g_GameManager.field30_0x1823 = 0;
        this->stateTimer = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 4:
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        this->gameState = STATE_SCORE;
        this->stateTimer = 0;
        this->unk_81fc = 2.0;
        this->maybe_menu_text_color = 0xff000000;
        this->unk_820c = 0;
        this->isActive = 0x3c;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 5:
        this->gameState = STATE_MUSIC_ROOM;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 6:
        this->gameState = STATE_OPTIONS;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 3;
        }
        this->cursor = 0;
        this->field_0x8230 = g_Supervisor.cfg.colorMode16bit;
        this->field208_0x8231 = g_Supervisor.cfg.windowed;
        this->field_0x8232 = g_Supervisor.cfg.frameskipConfig;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        break;
      case 7:
        this->gameState = STATE_QUIT;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
      }
    }
    if (((g_CurFrameInput & 0x200) != 0) &&
       ((g_CurFrameInput & 0x200) != (g_LastFrameInput & 0x200))) {
      this->gameState = STATE_QUIT;
      this->stateTimer = 0;
      for (i = 0; i < 0x7a; i = i + 1) {
        (&this->vm1)[i].pendingInterrupt = 4;
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

