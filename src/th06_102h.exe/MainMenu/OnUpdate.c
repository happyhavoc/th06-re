
ChainCallbackResult MainMenu::OnUpdate(MainMenu *menu)

{
  ushort sVar1;
  DWORD DVar1;
  ZunResult startedUp;
  int pressedButton;
  int gameState;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pvVar3;
  ZunResult ZVar1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint chosenStage;
  uint local_b4;
  D3DXVECTOR3 pos5;
  D3DXVECTOR3 pos4;
  D3DXVECTOR3 pos3;
  D3DXVECTOR3 pos2;
  D3DXVECTOR3 pos1;
  uint local_50;
  uint local_4c;
  float local_48;
  float refresh_rate;
  ControllerMapping local_40;
  short svar1;
  AnmVm *vm_memset;
  int i;
  float fVar1;
  
  if (menu->timeRelatedArrSize < 0x10) {
    timeBeginPeriod(1);
    if (menu->lastFrameTime == 0) {
      DVar1 = timeGetTime();
      menu->lastFrameTime = DVar1;
    }
    DVar1 = timeGetTime();
    timeEndPeriod(1);
    menu->frameCountForRefreshRateCalc = menu->frameCountForRefreshRateCalc + 1;
    gameState = DVar1 - menu->lastFrameTime;
    if (gameState < 700) {
      if (499 < gameState) {
        fVar1 = ((float)menu->frameCountForRefreshRateCalc * 1000.0) / (float)gameState;
        if (57.0 <= fVar1) {
          menu->timeRelatedArr[menu->timeRelatedArrSize] = fVar1;
          menu->timeRelatedArrSize = menu->timeRelatedArrSize + 1;
        }
        menu->lastFrameTime = DVar1;
        menu->frameCountForRefreshRateCalc = 0;
      }
    }
    else {
      menu->lastFrameTime = DVar1;
      menu->frameCountForRefreshRateCalc = 0;
    }
  }
  switch(menu->gameState) {
  case STATE_STARTUP:
    startedUp = BeginStartup(menu);
    if (startedUp == ZUN_ERROR) {
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
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
      g_GameManager.is_in_replay = 1;
      g_GameManager.demo_mode = 1;
      g_GameManager.demo_frames = 0;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,"data/demo/demo00.rpy");
      g_GameManager.difficulty = LUNATIC;
      g_GameManager.current_stage = 3;
      g_Supervisor.curState = 2;
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
                    /* Second implementation of input checking, basically does the same thing as
                       above */
    pressedButton = WeirdSecondInputCheck(menu);
    if (pressedButton == ZUN_SUCCESS) {
      menu->idleFrames = 0;
drawStartMenuCase:
      DrawStartMenu(menu);
      if (g_CurFrameInput != 0) {
        menu->idleFrames = 0;
      }
      menu->idleFrames = menu->idleFrames + 1;
      if (719 < menu->idleFrames) goto load_menu_rpy;
    }
    break;
  case STATE_MAIN_MENU:
    goto drawStartMenuCase;
  case STATE_OPTIONS:
    gameState = OnUpdateOptionsMenu(menu);
    if (gameState != 0) {
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    break;
  case STATE_QUIT:
    if (59 < menu->stateTimer) {
      g_Supervisor.curState = SUPERVISOR_STATE_EXITSUCCESS;
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    break;
  case STATE_KEYCONFIG:
    MoveCursor(menu,11);
    vm_memset = menu->vmList + 0x22;
    for (i = 0; i < 0xb; i = i + 1) {
      DrawMenuItem(vm_memset,i,menu->cursor,menu->color2,menu->color1,0x73);
      vm_memset = vm_memset + 1;
    }
    for (i = 0; i < 9; i = i + 1) {
      if (menu->controlMapping[i] < 0) {
        uVar2._0_2_ = vm_memset->flags;
        uVar2._2_1_ = vm_memset->unk_82[0];
        uVar2._3_1_ = vm_memset->unk_82[1];
        uVar2 = uVar2 & 0xfffffffd;
        vm_memset->flags = (short)uVar2;
        vm_memset->unk_82[0] = (char)(uVar2 >> 0x10);
        vm_memset->unk_82[1] = (char)(uVar2 >> 0x18);
      }
      else {
        uVar3._0_2_ = vm_memset->flags;
        uVar3._2_1_ = vm_memset->unk_82[0];
        uVar3._3_1_ = vm_memset->unk_82[1];
        uVar3 = uVar3 | 2;
        vm_memset->flags = (short)uVar3;
        vm_memset->unk_82[0] = (char)(uVar3 >> 0x10);
        vm_memset->unk_82[1] = (char)(uVar3 >> 0x18);
        DrawMenuItem(vm_memset,i,menu->cursor,menu->color2,menu->color1,0x73);
      }
      vm_memset = vm_memset + 1;
    }
    for (i = 0; i < 18; i = i + 1) {
      if (menu->controlMapping[i / 2] < 0) {
        uVar4._0_2_ = vm_memset->flags;
        uVar4._2_1_ = vm_memset->unk_82[0];
        uVar4._3_1_ = vm_memset->unk_82[1];
        uVar4 = uVar4 & 0xfffffffd;
        vm_memset->flags = (short)uVar4;
        vm_memset->unk_82[0] = (char)(uVar4 >> 0x10);
        vm_memset->unk_82[1] = (char)(uVar4 >> 0x18);
      }
      else {
        uVar5._0_2_ = vm_memset->flags;
        uVar5._2_1_ = vm_memset->unk_82[0];
        uVar5._3_1_ = vm_memset->unk_82[1];
        uVar5 = uVar5 | 2;
        vm_memset->flags = (short)uVar5;
        vm_memset->unk_82[0] = (char)(uVar5 >> 0x10);
        vm_memset->unk_82[1] = (char)(uVar5 >> 0x18);
        if (i % 2 == 0) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,vm_memset,(int)menu->controlMapping[i / 2] / 10 + 0x100);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,vm_memset,(int)menu->controlMapping[i / 2] % 10 + 0x100);
        }
        vm_memset->baseSpriteIndex = vm_memset->activeSpriteIndex;
        DrawMenuItem(vm_memset,i / 2,menu->cursor,menu->color2,menu->color1,0x7a);
      }
      vm_memset = vm_memset + 1;
    }
    if (31 < menu->stateTimer) {
      pvVar3 = Controller::GetControllerState();
      sVar1 = 0;
      while (((short)sVar1 < 0x20 && ((pvVar3[(short)sVar1] & 0x80) == 0))) {
        sVar1 = sVar1 + 1;
      }
      if (((short)sVar1 < 0x20) && (g_LastJoystickInput != sVar1)) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        switch(menu->cursor) {
        case 0:
          SelectRelated(menu,sVar1,menu->controlMapping[0],1);
          menu->controlMapping[0] = sVar1;
          break;
        case 1:
          SelectRelated(menu,sVar1,menu->controlMapping[1],0);
          menu->controlMapping[1] = sVar1;
          break;
        case 2:
          SelectRelated(menu,sVar1,menu->controlMapping[2],1);
          menu->controlMapping[2] = sVar1;
          break;
        case 3:
          SelectRelated(menu,sVar1,menu->controlMapping[3],0);
          menu->controlMapping[3] = sVar1;
          break;
        case 4:
          SelectRelated(menu,sVar1,menu->controlMapping[4],0);
          menu->controlMapping[4] = sVar1;
          break;
        case 5:
          SelectRelated(menu,sVar1,menu->controlMapping[5],0);
          menu->controlMapping[5] = sVar1;
          break;
        case 6:
          SelectRelated(menu,sVar1,menu->controlMapping[6],0);
          menu->controlMapping[6] = sVar1;
          break;
        case 7:
          SelectRelated(menu,sVar1,menu->controlMapping[7],0);
          menu->controlMapping[7] = sVar1;
          break;
        case 8:
          SelectRelated(menu,sVar1,menu->controlMapping[8],0);
          menu->controlMapping[8] = sVar1;
        }
      }
      g_LastJoystickInput = sVar1;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        if (menu->cursor == 9) {
          *(undefined4 *)menu->controlMapping = 0x10000;
          *(undefined4 *)(menu->controlMapping + 2) = 0xffff0000;
          *(undefined4 *)(menu->controlMapping + 4) = 0xffffffff;
          *(undefined4 *)(menu->controlMapping + 6) = 0xffffffff;
          menu->controlMapping[8] = -1;
        }
        else if (menu->cursor == 10) {
          menu->gameState = STATE_OPTIONS;
          menu->stateTimer = 0;
          for (svar1 = 0; svar1 < 0x7a; svar1 = svar1 + 1) {
            menu->vmList[svar1].pendingInterrupt = 3;
          }
          menu->cursor = 7;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
          g_ControllerMapping._0_4_ = *(undefined4 *)menu->controlMapping;
          g_ControllerMapping._4_4_ = *(undefined4 *)(menu->controlMapping + 2);
          g_ControllerMapping._8_4_ = *(undefined4 *)(menu->controlMapping + 4);
          g_ControllerMapping._12_4_ = *(undefined4 *)(menu->controlMapping + 6);
          g_ControllerMapping.skipButton = menu->controlMapping[8];
          g_Supervisor.cfg.controllerMapping._0_4_ = *(undefined4 *)menu->controlMapping;
          g_Supervisor.cfg.controllerMapping._4_4_ = *(undefined4 *)(menu->controlMapping + 2);
          g_Supervisor.cfg.controllerMapping._8_4_ = *(undefined4 *)(menu->controlMapping + 4);
          g_Supervisor.cfg.controllerMapping._12_4_ = *(undefined4 *)(menu->controlMapping + 6);
          g_Supervisor.cfg.controllerMapping.skipButton = menu->controlMapping[8];
        }
      }
    }
    break;
  case STATE_DIFFICULTY_LOAD:
    if (menu->stateTimer != 0x3c) break;
    ZVar1 = LoadDiffCharSelect(menu);
    if (ZVar1 != ZUN_SUCCESS) {
      GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
      g_Supervisor.curState = 4;
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    menu->gameState = STATE_DIFFICULTY_SELECT;
    menu->minimumOpacity = 0;
    menu->wasActive = menu->isActive;
    menu->isActive = 0;
    if ((int)g_GameManager.difficulty < 4) {
      for (i = 0; i < 122; i = i + 1) {
        menu->vmList[i].pendingInterrupt = 6;
      }
      menu->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
    }
    else {
      for (i = 0; i < 122; i = i + 1) {
        menu->vmList[i].pendingInterrupt = 18;
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
    vm_memset = menu->vmList + uVar25;
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
          (vm_memset->offset).x = -6.0;
          (vm_memset->offset).y = -6.0;
          (vm_memset->offset).z = 0.0;
        }
        else {
          if ((g_Supervisor.cfg.opts & 1) == 0) {
            (vm_memset->color).color = 0x60000000;
          }
          else {
            (vm_memset->color).color = 0x60ffffff;
          }
          (vm_memset->offset).x = 0.0;
          (vm_memset->offset).y = 0.0;
          (vm_memset->offset).z = 0.0;
          vm_memset->alphaInterpEndTime = 0;
        }
        vm_memset = vm_memset + 1;
      }
      uVar6._0_2_ = vm_memset->flags;
      uVar6._2_1_ = vm_memset->unk_82[0];
      uVar6._3_1_ = vm_memset->unk_82[1];
      uVar6 = uVar6 & 0xfffffffd;
      vm_memset->flags = (short)uVar6;
      vm_memset->unk_82[0] = (char)(uVar6 >> 0x10);
      vm_memset->unk_82[1] = (char)(uVar6 >> 0x18);
    }
    else {
      for (i = 0; i < 4; i = i + 1) {
        uVar7._0_2_ = vm_memset->flags;
        uVar7._2_1_ = vm_memset->unk_82[0];
        uVar7._3_1_ = vm_memset->unk_82[1];
        uVar7 = uVar7 & 0xfffffffd;
        vm_memset->flags = (short)uVar7;
        vm_memset->unk_82[0] = (char)(uVar7 >> 0x10);
        vm_memset->unk_82[1] = (char)(uVar7 >> 0x18);
        vm_memset = vm_memset + 1;
      }
      for (i = 4; i < 5; i = i + 1) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xff000000;
        }
        else {
          (vm_memset->color).color = 0xffffffff;
        }
        (vm_memset->offset).x = -6.0;
        (vm_memset->offset).y = -6.0;
        (vm_memset->offset).z = 0.0;
        vm_memset = vm_memset + 1;
      }
    }
    if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        menu->gameState = STATE_CHARACTER_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          menu->vmList[i].pendingInterrupt = 7;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        if ((int)g_GameManager.difficulty < 4) {
          menu->vmList[menu->cursor + 0x51].pendingInterrupt = 8;
          g_GameManager.difficulty = menu->cursor;
          menu->cursor = (uint)g_GameManager.character;
        }
        else {
          menu->vmList[uVar26].pendingInterrupt = 8;
          g_GameManager.difficulty = EXTRA;
          gameState = GameManager::HasReachedMaxClears
                                (&g_GameManager,(uint)g_GameManager.character,0);
          if ((gameState == 0) &&
             (gameState = GameManager::HasReachedMaxClears
                                    (&g_GameManager,(uint)g_GameManager.character,1), gameState == 0
             )) {
            menu->cursor = 1 - g_GameManager.character;
          }
          else {
            menu->cursor = (uint)g_GameManager.character;
          }
        }
        g_Supervisor.cfg.defaultDifficulty = (DefaultDifficulty)g_GameManager.difficulty;
        vm_memset = menu->vmList + temp_261249229b1;
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
        menu->vmList[i].pendingInterrupt = 4;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
      if ((int)g_GameManager.difficulty < 4) {
        g_Supervisor.cfg.defaultDifficulty = *(DefaultDifficulty *)&menu->cursor;
        if (g_GameManager.is_in_practice_mode == 0) {
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
            (gameState = GameManager::HasReachedMaxClears(&g_GameManager,menu->cursor,0),
            gameState == 0)) &&
           (gameState = GameManager::HasReachedMaxClears(&g_GameManager,menu->cursor,1),
           gameState == 0)) {
          menu->cursor = menu->cursor + 1;
          if (1 < (int)menu->cursor) {
            menu->cursor = menu->cursor - 2;
          }
        }
        else {
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
          vm_memset = menu->vmList + 0x56;
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
          (gameState = GameManager::HasReachedMaxClears(&g_GameManager,menu->cursor,0),
          gameState != 0)) ||
         (gameState = GameManager::HasReachedMaxClears(&g_GameManager,menu->cursor,1),
         gameState != 0)) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        vm_memset = menu->vmList + 0x56;
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
          menu->vmList[i].pendingInterrupt = 0xd;
        }
        menu->vmList[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
        vm_memset = menu->vmList + 0x56;
        for (i = 0; i < 2; i = i + 1) {
          if (i != menu->cursor) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        vm_memset = menu->vmList + 0x5c;
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
          gameState = GameManager::HasReachedMaxClears
                                (&g_GameManager,(uint)g_GameManager.character,
                                 (uint)g_GameManager.shottype);
          if (gameState == 0) {
            menu->cursor = 1 - g_GameManager.shottype;
          }
          else {
            menu->cursor = (uint)g_GameManager.shottype;
          }
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
      }
    }
    else {
      menu->gameState = STATE_DIFFICULTY_SELECT;
      menu->stateTimer = 0;
      if ((int)g_GameManager.difficulty < 4) {
        for (i = 0; i < 0x7a; i = i + 1) {
          menu->vmList[i].pendingInterrupt = 6;
        }
        menu->cursor = (uint)g_Supervisor.cfg.defaultDifficulty;
      }
      else {
        for (i = 0; i < 0x7a; i = i + 1) {
          menu->vmList[i].pendingInterrupt = 0x12;
        }
        menu->cursor = 0;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
    }
    break;
  case STATE_SCORE:
    if (59 < menu->stateTimer) {
      g_Supervisor.curState = 6;
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    break;
  case STATE_SHOT_SELECT:
    MoveCursor(menu,2);
    if ((g_GameManager.difficulty == EXTRA) &&
       (gameState = GameManager::HasReachedMaxClears
                              (&g_GameManager,(uint)g_GameManager.character,menu->cursor),
       gameState == 0)) {
      menu->cursor = 1 - menu->cursor;
    }
    vm_memset = menu->vmList + 0x5c;
    for (i = 0; i < 2; i = i + 1) {
      uVar8._0_2_ = vm_memset[1].flags;
      uVar8._2_1_ = vm_memset[1].unk_82[0];
      uVar8._3_1_ = vm_memset[1].unk_82[1];
      uVar8 = uVar8 | 8;
      vm_memset[1].flags = (short)uVar8;
      vm_memset[1].unk_82[0] = (char)(uVar8 >> 0x10);
      vm_memset[1].unk_82[1] = (char)(uVar8 >> 0x18);
      vm_memset = vm_memset + 2;
    }
    vm_memset = menu->vmList + (uint)g_GameManager.character * 2 + 0x5c;
    for (i = 0; i < 2; i = i + 1) {
      uVar9._0_2_ = vm_memset->flags;
      uVar9._2_1_ = vm_memset->unk_82[0];
      uVar9._3_1_ = vm_memset->unk_82[1];
      uVar9 = uVar9 | 8;
      vm_memset->flags = (short)uVar9;
      vm_memset->unk_82[0] = (char)(uVar9 >> 0x10);
      vm_memset->unk_82[1] = (char)(uVar9 >> 0x18);
      uVar10._0_2_ = vm_memset->flags;
      uVar10._2_1_ = vm_memset->unk_82[0];
      uVar10._3_1_ = vm_memset->unk_82[1];
      uVar10 = uVar10 | 1;
      vm_memset->flags = (short)uVar10;
      vm_memset->unk_82[0] = (char)(uVar10 >> 0x10);
      vm_memset->unk_82[1] = (char)(uVar10 >> 0x18);
      if (i == menu->cursor) {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xff202020;
        }
        else {
          (vm_memset->color).color = 0xffffffff;
        }
        (vm_memset->offset).x = -6.0;
        (vm_memset->offset).y = -6.0;
        (vm_memset->offset).z = 0.0;
      }
      else {
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (vm_memset->color).color = 0xa0000000;
        }
        else {
          (vm_memset->color).color = 0xa0d0d0d0;
        }
        (vm_memset->offset).x = 0.0;
        (vm_memset->offset).y = 0.0;
        (vm_memset->offset).z = 0.0;
      }
      vm_memset = vm_memset + 1;
    }
    if (0x1d < menu->stateTimer) {
      if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          g_GameManager.shottype = *(byte *)&menu->cursor;
          if (g_GameManager.is_in_practice_mode == 0) {
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
            menu->vmList[i].pendingInterrupt = 0x13;
          }
          menu->vmList[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
          vm_memset = menu->vmList + 0x56;
          for (i = 0; i < 2; i = i + 1) {
            if (i != (uint)g_GameManager.character) {
              vm_memset->pendingInterrupt = 0;
              vm_memset[1].pendingInterrupt = 0;
            }
            vm_memset = vm_memset + 2;
          }
          vm_memset = menu->vmList + 0x5c;
          for (i = 0; i < 2; i = i + 1) {
            if (i != (uint)g_GameManager.character) {
              vm_memset->pendingInterrupt = 0;
              vm_memset[1].pendingInterrupt = 0;
            }
            vm_memset = vm_memset + 2;
          }
          menu->cursor = g_GameManager.menu_cursor_backup;
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
          menu->vmList[i].pendingInterrupt = 7;
        }
        vm_memset = menu->vmList + 0x5c;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        menu->vmList[g_GameManager.difficulty + 0x51].pendingInterrupt = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        g_GameManager.shottype = *(byte *)&menu->cursor;
        menu->cursor = (uint)g_GameManager.character;
        vm_memset = menu->vmList + 0x56;
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
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    break;
  case STATE_MUSIC_ROOM:
    if (0x3b < menu->stateTimer) {
      g_Supervisor.curState = 9;
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
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
          g_GameManager.menu_cursor_backup = menu->cursor;
LAB_00436de7:
          g_GameManager.lives_remaining = g_Supervisor.cfg.lifeCount;
          g_GameManager.bombs_remaining = g_Supervisor.cfg.bombCount;
          if ((g_GameManager.difficulty == EXTRA) || (g_GameManager.is_in_practice_mode != 0)) {
            g_GameManager.lives_remaining = 2;
            g_GameManager.bombs_remaining = 3;
          }
          g_Supervisor.curState = 2;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
          g_GameManager.is_in_replay = 0;
          local_48 = 0.0;
          if (menu->timeRelatedArrSize < 2) {
            local_48 = 60.0;
          }
          else {
            for (i = 0; i < menu->timeRelatedArrSize; i = i + 1) {
              local_48 = local_48 + menu->timeRelatedArr[i];
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
          Supervisor::StopAudio(&g_Supervisor);
          return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
        }
      }
      else {
        menu->gameState = STATE_SHOT_SELECT;
        menu->stateTimer = 0;
        for (i = 0; i < 122; i = i + 1) {
          menu->vmList[i].pendingInterrupt = 13;
        }
        menu->vmList[g_GameManager.difficulty + uVar32].pendingInterrupt = 0;
        vm_memset = menu->vmList + uVar33;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        vm_memset = menu->vmList + uVar34;
        for (i = 0; i < 2; i = i + 1) {
          if (i != (uint)g_GameManager.character) {
            vm_memset->pendingInterrupt = 0;
            vm_memset[1].pendingInterrupt = 0;
          }
          vm_memset = vm_memset + 2;
        }
        menu->cursor = (uint)g_GameManager.shottype;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
      }
    }
  }
  menu->stateTimer = menu->stateTimer + 1;
  for (i = 0; i < 122; i = i + 1) {
    if (menu->vmList[i].sprite == (AnmLoadedSprite *)0x0) {
      bVar11 = false;
    }
    else if ((menu->vmList[i].sprite)->sourceFileIndex < 0) {
      bVar11 = false;
    }
    else {
      bVar11 = g_AnmManager->textures[(menu->vmList[i].sprite)->sourceFileIndex] !=
               (IDirect3DTexture8 *)0x0;
    }
    if (bVar11) {
      AnmManager::ExecuteScript(g_AnmManager,menu->vmList + i);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

