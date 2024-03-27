
undefined4 MainMenu::OnUpdate(MainMenu *menu)

{
  short sVar1;
  DWORD time;
  ZunResult startedUp;
  int pressedButton;
  int gameState;
  ZunResult ZVar1;
  bool hasLoadedSprite;
  uint chosenStage;
  uint local_b4;
  uint local_50;
  uint local_4c;
  float local_48;
  float refresh_rate;
  short local_28;
  AnmVm *vm_memset;
  int i;
  float fVar1;
  
  if (menu->unk_10ee0 < 0x10) {
    timeBeginPeriod(1);
    if (menu->time_related == 0) {
      time = timeGetTime();
      menu->time_related = time;
    }
    time = timeGetTime();
    timeEndPeriod(1);
    menu->unk_10f2c = menu->unk_10f2c + 1;
    gameState = time - menu->time_related;
    if (gameState < 700) {
      if (499 < gameState) {
        fVar1 = ((float)menu->unk_10f2c * 1000.0) / (float)gameState;
        if (57.0 <= fVar1) {
          (&menu->field218_0x10ee4)[menu->unk_10ee0] = (float *)fVar1;
          menu->unk_10ee0 = menu->unk_10ee0 + 1;
        }
        menu->time_related = time;
        menu->unk_10f2c = 0;
      }
    }
    else {
      menu->time_related = time;
      menu->unk_10f2c = 0;
    }
  }
  switch(menu->gameState) {
  case STATE_STARTUP:
    startedUp = BeginStartup(menu);
    if (startedUp == ZUN_ERROR) {
      return 0;
    }
  case STATE_PRE_INPUT:
    menu->idleFrames = menu->idleFrames + 1;
    if (g_CurFrameInput != 0) {
      menu->idleFrames = 0;
    }
                    /* I'm *pretty* sure menu->idleFrames is an int, because its comparing against a
                       signed int, and I'm pretty confident zun just used ints everywhere */
    if (719 < menu->idleFrames) {
load_menu_rpy:
      g_GameManager.field7_0x1c = 1;
      g_GameManager.demo_mode = 1;
      g_GameManager._6184_4_ = 0;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,"data/demo/demo00.rpy");
      g_GameManager.difficulty = LUNATIC;
      g_GameManager.current_stage = 3;
      g_Supervisor.curState = 2;
      return 0;
    }
                    /* Second implementation of input checking, basically does the same thing as
                       above */
    pressedButton = FUN_004379e4(menu);
    if (pressedButton == 0) {
      menu->idleFrames = 0;
switchD_004358f7_caseD_2:
      DrawStartMenu(menu);
      if (g_CurFrameInput != 0) {
        menu->idleFrames = 0;
      }
      menu->idleFrames = menu->idleFrames + 1;
      if (719 < menu->idleFrames) goto load_menu_rpy;
    }
    break;
  case STATE_MAIN_MENU:
    goto switchD_004358f7_caseD_2;
  case STATE_OPTIONS:
    gameState = FUN_00439137(menu);
    if (gameState != 0) {
      return 0;
    }
    break;
  case STATE_QUIT:
    if (59 < menu->stateTimer) {
      g_Supervisor.curState = 4;
      return 0;
    }
    break;
  case STATE_KEYCONFIG:
    MoveCursor(menu,11);
    vm_memset = &menu->keyconfig_anmvm;
    for (i = 0; i < 0xb; i = i + 1) {
      DrawMenuItem(vm_memset,i,menu->cursor,menu->color2,menu->color1,0x73);
      vm_memset = vm_memset + 1;
    }
    for (i = 0; i < 9; i = i + 1) {
      if (*(short *)((int)(menu->replayFilePaths + -1) + i * 2 + 0x1e0) < 0) {
        *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags & 0xfffffffd;
      }
      else {
        *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags | 2;
        DrawMenuItem(vm_memset,i,menu->cursor,menu->color2,menu->color1,0x73);
      }
      vm_memset = vm_memset + 1;
    }
    for (i = 0; i < 18; i = i + 1) {
      if (*(short *)((int)(menu->replayFilePaths + -1) + (i / 2) * 2 + 0x1e0) < 0) {
        *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags & 0xfffffffd;
      }
      else {
        *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags | 2;
        sVar1 = *(short *)((int)(menu->replayFilePaths + -1) + (i / 2) * 2 + 0x1e0);
        if (i % 2 == 0) {
          AnmManager::SetActiveSprite(g_AnmManager,vm_memset,(int)sVar1 / 10 + 0x100);
        }
        else {
          AnmManager::SetActiveSprite(g_AnmManager,vm_memset,(int)sVar1 % 10 + 0x100);
        }
        vm_memset->anotherSpriteNumber = vm_memset->spriteNumber;
        DrawMenuItem(vm_memset,i / 2,menu->cursor,menu->color2,menu->color1,0x7a);
      }
      vm_memset = vm_memset + 1;
    }
    if (31 < menu->stateTimer) {
      gameState = joystickcheck_only_called_in_keyconfig();
      sVar1 = 0;
      while ((sVar1 < 0x20 && ((*(byte *)(gameState + sVar1) & 0x80) == 0))) {
        sVar1 = sVar1 + 1;
      }
      if ((sVar1 < 0x20) && (DAT_00478690 != sVar1)) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10,0);
        switch(menu->cursor) {
        case 0:
          select_related(menu,sVar1,(menu->controlMapping).shootButton,1);
          (menu->controlMapping).shootButton = sVar1;
          break;
        case 1:
          select_related(menu,sVar1,(menu->controlMapping).bombButton,0);
          (menu->controlMapping).bombButton = sVar1;
          break;
        case 2:
          select_related(menu,sVar1,(menu->controlMapping).focusButton,1);
          (menu->controlMapping).focusButton = sVar1;
          break;
        case 3:
          select_related(menu,sVar1,(menu->controlMapping).menuButton,0);
          (menu->controlMapping).menuButton = sVar1;
          break;
        case 4:
          select_related(menu,sVar1,(menu->controlMapping).upButton,0);
          (menu->controlMapping).upButton = sVar1;
          break;
        case 5:
          select_related(menu,sVar1,(menu->controlMapping).downButton,0);
          (menu->controlMapping).downButton = sVar1;
          break;
        case 6:
          select_related(menu,sVar1,(menu->controlMapping).leftButton,0);
          (menu->controlMapping).leftButton = sVar1;
          break;
        case 7:
          select_related(menu,sVar1,(menu->controlMapping).rightButton,0);
          (menu->controlMapping).rightButton = sVar1;
          break;
        case 8:
          select_related(menu,sVar1,(menu->controlMapping).skipButton,0);
          (menu->controlMapping).skipButton = sVar1;
        }
      }
      DAT_00478690 = sVar1;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        if (menu->cursor == 9) {
          (menu->controlMapping).shootButton = 0;
          (menu->controlMapping).bombButton = 1;
          (menu->controlMapping).focusButton = 0;
          (menu->controlMapping).menuButton = -1;
          (menu->controlMapping).upButton = -1;
          (menu->controlMapping).downButton = -1;
          (menu->controlMapping).leftButton = -1;
          (menu->controlMapping).rightButton = -1;
          (menu->controlMapping).skipButton = -1;
        }
        else if (menu->cursor == 10) {
          menu->gameState = STATE_OPTIONS;
          menu->stateTimer = 0;
          for (local_28 = 0; local_28 < 0x7a; local_28 = local_28 + 1) {
            (&menu->vm1)[local_28].pendingInterrupt = 3;
          }
          menu->cursor = 7;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb,0);
          g_ControllerMapping.shootButton = (menu->controlMapping).shootButton;
          g_ControllerMapping.bombButton = (menu->controlMapping).bombButton;
          g_ControllerMapping.focusButton = (menu->controlMapping).focusButton;
          g_ControllerMapping.menuButton = (menu->controlMapping).menuButton;
          g_ControllerMapping.upButton = (menu->controlMapping).upButton;
          g_ControllerMapping.downButton = (menu->controlMapping).downButton;
          g_ControllerMapping.leftButton = (menu->controlMapping).leftButton;
          g_ControllerMapping.rightButton = (menu->controlMapping).rightButton;
          g_ControllerMapping.skipButton = (menu->controlMapping).skipButton;
          g_Supervisor.cfg.controllerMapping.shootButton = (menu->controlMapping).shootButton;
          g_Supervisor.cfg.controllerMapping.bombButton = (menu->controlMapping).bombButton;
          g_Supervisor.cfg.controllerMapping.focusButton = (menu->controlMapping).focusButton;
          g_Supervisor.cfg.controllerMapping.menuButton = (menu->controlMapping).menuButton;
          g_Supervisor.cfg.controllerMapping.upButton = (menu->controlMapping).upButton;
          g_Supervisor.cfg.controllerMapping.downButton = (menu->controlMapping).downButton;
          g_Supervisor.cfg.controllerMapping.leftButton = (menu->controlMapping).leftButton;
          g_Supervisor.cfg.controllerMapping.rightButton = (menu->controlMapping).rightButton;
          g_Supervisor.cfg.controllerMapping.skipButton = (menu->controlMapping).skipButton;
        }
      }
    }
    break;
  case STATE_DIFFICULTY_LOAD:
    if (menu->stateTimer != 0x3c) break;
    ZVar1 = loadMenu(menu);
    if (ZVar1 != ZUN_SUCCESS) {
      GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
      g_Supervisor.curState = 4;
      return 0;
    }
    menu->gameState = STATE_DIFFICULTY_SELECT;
    menu->unk_81fc = 0;
    menu->wasActive = menu->isActive;
    menu->isActive = 0;
    if ((int)g_GameManager.difficulty < 4) {
      for (i = 0; i < 122; i = i + 1) {
        (&menu->vm1)[i].pendingInterrupt = 6;
      }
      menu->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
    }
    else {
      for (i = 0; i < 122; i = i + 1) {
        (&menu->vm1)[i].pendingInterrupt = 18;
      }
      menu->cursor = 0;
    }
  case STATE_CHARACTER_LOAD:
    if (menu->stateTimer == 36) {
      menu->gameState = STATE_STARTUP;
      menu->stateTimer = 0;
    }
    break;
  case STATE_DIFFICULTY_SELECT:
    vm_memset = &menu->field81_0x5610;
    if ((int)g_GameManager.difficulty < 4) {
      MoveCursor(menu,4);
      for (i = 0; i < 4; i = i + 1) {
        if (i == menu->cursor) {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm_memset->color).color = 0xff000000;
          }
          else {
            (vm_memset->color).color = 0xffffffff;
          }
          (vm_memset->pos2).x = -6.0;
          (vm_memset->pos2).y = -6.0;
          (vm_memset->pos2).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm_memset->color).color = 0x60000000;
          }
          else {
            (vm_memset->color).color = 0x60ffffff;
          }
          (vm_memset->pos2).x = 0.0;
          (vm_memset->pos2).y = 0.0;
          (vm_memset->pos2).z = 0.0;
          vm_memset->alphaInterpEndTime = 0;
        }
        vm_memset = vm_memset + 1;
      }
      *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags & 0xfffffffd;
    }
    else {
      for (i = 0; i < 4; i = i + 1) {
        *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags & 0xfffffffd;
        vm_memset = vm_memset + 1;
      }
      for (i = 4; i < 5; i = i + 1) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xff000000;
        }
        else {
          (vm_memset->color).color = 0xffffffff;
        }
        (vm_memset->pos2).x = -6.0;
        (vm_memset->pos2).y = -6.0;
        (vm_memset->pos2).z = 0.0;
        vm_memset = vm_memset + 1;
      }
    }
    if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        menu->gameState = STATE_CHARACTER_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 7;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10,0);
        if ((int)g_GameManager.difficulty < 4) {
          (&menu->field81_0x5610)[menu->cursor].pendingInterrupt = 8;
          g_GameManager.difficulty = menu->cursor;
          menu->cursor = (uint)g_GameManager.character;
        }
        else {
          (menu->field85_0x5a50).pendingInterrupt = 8;
          g_GameManager.difficulty = EXTRA;
          gameState = GameManager::hasReachedMaxClears
                                (&g_GameManager,(uint)g_GameManager.character,0);
          if ((gameState == 0) &&
             (gameState = GameManager::hasReachedMaxClears
                                    (&g_GameManager,(uint)g_GameManager.character,1), gameState == 0
             )) {
            menu->cursor = 1 - g_GameManager.character;
          }
          else {
            menu->cursor = (uint)g_GameManager.character;
          }
        }
        g_Supervisor.cfg.defaultDifficulty = (DefaultDifficulty)g_GameManager.difficulty;
        vm_memset = &menu->field86_0x5b60;
        for (i = 0; i < 2; i = i + 1) {
          if (i != menu->cursor) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
      }
    }
    else {
      menu->gameState = STATE_CHARACTER_LOAD;
      menu->stateTimer = 0;
      for (i = 0; i < 0x7a; i = i + 1) {
        (&menu->vm1)[i].pendingInterrupt = 4;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb,0);
      if ((int)g_GameManager.difficulty < 4) {
        g_Supervisor.cfg.defaultDifficulty = *(DefaultDifficulty *)&menu->cursor;
        if (g_GameManager.field30_0x1823 == 0) {
          menu->cursor = 0;
        }
        else {
          menu->cursor = 2;
        }
      }
      else {
        menu->cursor = 1;
      }
    }
    break;
  case STATE_CHARACTER_SELECT:
    if (menu->stateTimer < 0x1e) break;
    if ((((g_CurFrameInput & 0x40) == 0) || ((g_CurFrameInput & 0x40) == (g_LastFrameInput & 0x40)))
       && (((g_CurFrameInput & 0x40) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
LAB_0043666d:
      if ((((g_CurFrameInput & 0x80) != 0) &&
          ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80))) ||
         (((g_CurFrameInput & 0x80) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
        menu->cursor = menu->cursor - 1;
        if ((int)menu->cursor < 0) {
          menu->cursor = menu->cursor + 2;
        }
        if (((g_GameManager.difficulty == EXTRA) &&
            (gameState = GameManager::hasReachedMaxClears(&g_GameManager,menu->cursor,0),
            gameState == 0)) &&
           (gameState = GameManager::hasReachedMaxClears(&g_GameManager,menu->cursor,1),
           gameState == 0)) {
          menu->cursor = menu->cursor + 1;
          if (1 < (int)menu->cursor) {
            menu->cursor = menu->cursor - 2;
          }
        }
        else {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
          vm_memset = &menu->field86_0x5b60;
          for (i = 0; i < 2; i = i + 1) {
            if (i == menu->cursor) {
              vm_memset->pendingInterrupt = 10;
              vm_memset[1].pendingInterrupt = 10;
            }
            else {
              vm_memset->pendingInterrupt = 0xb;
              vm_memset[1].pendingInterrupt = 0xb;
            }
            vm_memset = vm_memset + 2;
          }
        }
      }
    }
    else {
      menu->cursor = menu->cursor + 1;
      if (1 < (int)menu->cursor) {
        menu->cursor = menu->cursor - 2;
      }
      if (((g_GameManager.difficulty != EXTRA) ||
          (gameState = GameManager::hasReachedMaxClears(&g_GameManager,menu->cursor,0),
          gameState != 0)) ||
         (gameState = GameManager::hasReachedMaxClears(&g_GameManager,menu->cursor,1),
         gameState != 0)) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
        vm_memset = &menu->field86_0x5b60;
        for (i = 0; i < 2; i = i + 1) {
          if (i == menu->cursor) {
            vm_memset->pendingInterrupt = 9;
            vm_memset[1].pendingInterrupt = 9;
          }
          else {
            vm_memset->pendingInterrupt = 0xc;
            vm_memset[1].pendingInterrupt = 0xc;
          }
          vm_memset = vm_memset + 2;
        }
        goto LAB_0043666d;
      }
      menu->cursor = menu->cursor - 1;
      if ((int)menu->cursor < 0) {
        menu->cursor = menu->cursor + 2;
      }
    }
    if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        menu->gameState = STATE_SHOT_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 0xd;
        }
        (&menu->field81_0x5610)[g_GameManager.difficulty].pendingInterrupt = 0;
        vm_memset = &menu->field86_0x5b60;
        for (i = 0; i < 2; i = i + 1) {
          if (i != menu->cursor) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        vm_memset = &menu->field92_0x61c0;
        for (i = 0; i < 2; i = i + 1) {
          if (i != menu->cursor) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        g_GameManager.character = *(byte *)&menu->cursor;
        if ((int)g_GameManager.difficulty < 4) {
          menu->cursor = (uint)g_GameManager.shottype;
        }
        else {
          gameState = GameManager::hasReachedMaxClears
                                (&g_GameManager,(uint)g_GameManager.character,
                                 (uint)g_GameManager.shottype);
          if (gameState == 0) {
            menu->cursor = 1 - g_GameManager.shottype;
          }
          else {
            menu->cursor = (uint)g_GameManager.shottype;
          }
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10,0);
      }
    }
    else {
      menu->gameState = STATE_DIFFICULTY_SELECT;
      menu->stateTimer = 0;
      if ((int)g_GameManager.difficulty < 4) {
        for (i = 0; i < 0x7a; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 6;
        }
        menu->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
      }
      else {
        for (i = 0; i < 0x7a; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 0x12;
        }
        menu->cursor = 0;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb,0);
    }
    break;
  case STATE_SCORE:
    if (59 < menu->stateTimer) {
      g_Supervisor.curState = 6;
      return 0;
    }
    break;
  case STATE_SHOT_SELECT:
    MoveCursor(menu,2);
    if ((g_GameManager.difficulty == EXTRA) &&
       (gameState = GameManager::hasReachedMaxClears
                              (&g_GameManager,(uint)g_GameManager.character,menu->cursor),
       gameState == 0)) {
      menu->cursor = 1 - menu->cursor;
    }
    vm_memset = &menu->field92_0x61c0;
    for (i = 0; i < 2; i = i + 1) {
      *(uint *)&vm_memset[1].flags = *(uint *)&vm_memset[1].flags | 8;
      vm_memset = vm_memset + 2;
    }
    vm_memset = &menu->field92_0x61c0 + (uint)g_GameManager.character * 2;
    for (i = 0; i < 2; i = i + 1) {
      *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags | 8;
      *(uint *)&vm_memset->flags = *(uint *)&vm_memset->flags | 1;
      if (i == menu->cursor) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xff202020;
        }
        else {
          (vm_memset->color).color = 0xffffffff;
        }
        (vm_memset->pos2).x = -6.0;
        (vm_memset->pos2).y = -6.0;
        (vm_memset->pos2).z = 0.0;
      }
      else {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xa0000000;
        }
        else {
          (vm_memset->color).color = 0xa0d0d0d0;
        }
        (vm_memset->pos2).x = 0.0;
        (vm_memset->pos2).y = 0.0;
        (vm_memset->pos2).z = 0.0;
      }
      vm_memset = vm_memset + 1;
    }
    if (0x1d < menu->stateTimer) {
      if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          g_GameManager.shottype = *(byte *)&menu->cursor;
          if (g_GameManager.field30_0x1823 == 0) {
            if ((int)g_GameManager.difficulty < 4) {
              g_GameManager.current_stage = 0;
            }
            else {
              g_GameManager.current_stage = 6;
            }
            goto LAB_00436de7;
          }
          menu->gameState = STATE_PRACTICE_LVL_SELECT;
          menu->stateTimer = 0;
          for (i = 0; i < 0x7a; i = i + 1) {
            (&menu->vm1)[i].pendingInterrupt = 0x13;
          }
          (&menu->field81_0x5610)[g_GameManager.difficulty].pendingInterrupt = 0;
          vm_memset = &menu->field86_0x5b60;
          for (i = 0; i < 2; i = i + 1) {
            if (i != (uint)g_GameManager.character) {
              vm_memset->pendingInterrupt = 0;
              vm_memset[1].pendingInterrupt = 0;
            }
            vm_memset = vm_memset + 2;
          }
          vm_memset = &menu->field92_0x61c0;
          for (i = 0; i < 2; i = i + 1) {
            if (i != (uint)g_GameManager.character) {
              vm_memset->pendingInterrupt = 0;
              vm_memset[1].pendingInterrupt = 0;
            }
            vm_memset = vm_memset + 2;
          }
          menu->cursor = g_GameManager.field46_0x1a38;
          if (*(byte *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18 +
                        0x69cce1 + g_GameManager.difficulty) < 7) {
            local_b4 = (uint)*(byte *)(((uint)g_GameManager.shottype +
                                       (uint)g_GameManager.character * 2) * 0x18 + 0x69cce1 +
                                      g_GameManager.difficulty);
          }
          else {
            local_b4 = 6;
          }
          local_4c = local_b4;
          if ((g_GameManager.difficulty == EASY) && (local_b4 == 6)) {
            local_4c = 5;
          }
          if ((int)local_4c <= (int)menu->cursor) {
            menu->cursor = 0;
          }
        }
      }
      else {
        menu->gameState = STATE_CHARACTER_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 7;
        }
        vm_memset = &menu->field92_0x61c0;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        (&menu->field81_0x5610)[g_GameManager.difficulty].pendingInterrupt = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb,0);
        g_GameManager.shottype = *(byte *)&menu->cursor;
        menu->cursor = (uint)g_GameManager.character;
        vm_memset = &menu->field86_0x5b60;
        for (i = 0; i < 2; i = i + 1) {
          if (i != menu->cursor) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
      }
    }
    break;
  case STATE_REPLAY_LOAD:
  case STATE_REPLAY_ANIM:
  case STATE_REPLAY_UNLOAD:
  case STATE_REPLAY_SELECT:
    gameState = ReplayHandling(menu);
    if (gameState != 0) {
      return 0;
    }
    break;
  case STATE_MUSIC_ROOM:
    if (0x3b < menu->stateTimer) {
      g_Supervisor.curState = 9;
      return 0;
    }
    break;
  case STATE_PRACTICE_LVL_SELECT:
    if (*(byte *)(((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18 +
                  0x69cce1 + g_GameManager.difficulty) < 7) {
      chosenStage = (uint)*(byte *)(((uint)g_GameManager.shottype +
                                    (uint)g_GameManager.character * 2) * 0x18 + 0x69cce1 +
                                   g_GameManager.difficulty);
    }
    else {
      chosenStage = 6;
    }
    local_50 = chosenStage;
    if ((g_GameManager.difficulty == EASY) && (chosenStage == 6)) {
      local_50 = 5;
    }
    MoveCursor(menu,local_50);
    if (0x1d < menu->stateTimer) {
      if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          g_GameManager.current_stage = menu->cursor;
          g_GameManager.field46_0x1a38 = menu->cursor;
LAB_00436de7:
          g_GameManager.lives_remaining = g_Supervisor.cfg.lifeCount;
          g_GameManager.bombs_remaining = g_Supervisor.cfg.bombCount;
          if ((g_GameManager.difficulty == EXTRA) || (g_GameManager.field30_0x1823 != 0)) {
            g_GameManager.lives_remaining = 2;
            g_GameManager.bombs_remaining = 3;
          }
          g_Supervisor.curState = 2;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10,0);
          g_GameManager.field7_0x1c = 0;
          local_48 = 0.0;
          if (menu->unk_10ee0 < 2) {
            local_48 = 60.0;
          }
          else {
            for (i = 0; i < menu->unk_10ee0; i = i + 1) {
              local_48 = local_48 + (float)(&menu->field218_0x10ee4)[i];
            }
            local_48 = local_48 / (float)i;
          }
          if (local_48 < 155.0) {
            if (local_48 < 135.0) {
              if (local_48 < 110.0) {
                if (local_48 < 95.0) {
                  if (local_48 < 87.5) {
                    if (local_48 < 82.5) {
                      if (local_48 < 77.5) {
                        if (local_48 < 73.5) {
                          if (local_48 < 68.0) {
                            refresh_rate = 1.0;
                          }
                          else {
                            refresh_rate = 0.8571429;
                          }
                        }
                        else {
                          refresh_rate = 0.8;
                        }
                      }
                      else {
                        refresh_rate = 0.75;
                      }
                    }
                    else {
                      refresh_rate = 0.7058824;
                    }
                  }
                  else {
                    refresh_rate = 0.6666667;
                  }
                }
                else {
                  refresh_rate = 0.6;
                }
              }
              else {
                refresh_rate = 0.5;
              }
            }
            else {
              refresh_rate = 0.4;
            }
          }
          else {
            refresh_rate = 0.375;
          }
          DebugPrint("Reflesh Rate = %f\n",(double)(60.0 / refresh_rate));
          g_Supervisor.framerateMultiplier = refresh_rate;
          Supervisor::FUN_00424d38(&g_Supervisor);
          return 0;
        }
      }
      else {
        menu->gameState = STATE_SHOT_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 122; i = i + 1) {
          (&menu->vm1)[i].pendingInterrupt = 13;
        }
        (&menu->field81_0x5610)[g_GameManager.difficulty].pendingInterrupt = 0;
        vm_memset = &menu->field86_0x5b60;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        vm_memset = &menu->field92_0x61c0;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        menu->cursor = (uint)g_GameManager.shottype;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10,0);
      }
    }
  }
  menu->stateTimer = menu->stateTimer + 1;
  for (i = 0; i < 122; i = i + 1) {
    if ((&menu->vm1)[i].sprite == (AnmLoadedSprite *)0x0) {
      hasLoadedSprite = false;
    }
    else if (((&menu->vm1)[i].sprite)->sourceFileIndex < 0) {
      hasLoadedSprite = false;
    }
    else {
      hasLoadedSprite =
           g_AnmManager->textures[((&menu->vm1)[i].sprite)->sourceFileIndex] !=
           (IDirect3DTexture8 *)0x0;
    }
    if (hasLoadedSprite) {
      AnmManager::ExecuteScript(g_AnmManager,&menu->vm1 + i);
    }
  }
  return 1;
}

