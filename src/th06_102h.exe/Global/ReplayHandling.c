
void __fastcall ReplayHandling(MainMenu *menu)

{
  ZunResult ZVar2;
  BOOL nextFile;
  int *pbVar4;
  int _;
  ReplayData *nextReplayData;
  char **ppcVar1;
  char **replayDataMagics;
  _WIN32_FIND_DATAA replayFileInfo;
  char replayFilePath [64];
  uint stackCookie;
  ReplayData *replayData;
  int replayFileIdx;
  HANDLE replayFileHandle;
  int i;
  AnmVm *anmVM;
  GameState gameState;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  gameState = menu->gameState;
  if (gameState == STATE_UNLOAD_TO_REPLAY_MENU) {
    if (menu->gameSubState == 0x3c) {
      ZVar2 = LoadReplayMenu(menu);
      if (ZVar2 == ZUN_SUCCESS) {
        replayFileIdx = 0;
        for (i = 0; i < 0xf; i = i + 1) {
          sprintf(replayFilePath,"./replay/th6_%.2d.rpy",i + 1);
          replayData = (ReplayData *)FileSystem::OpenPath(replayFilePath,1);
          if (replayData != (ReplayData *)0x0) {
            ZVar2 = validateReplayData(replayData,g_LastFileSize);
            if (ZVar2 == ZUN_SUCCESS) {
              nextReplayData = replayData;
              ppcVar1 = (char **)(&menu->field_0xfc1c + replayFileIdx * 0x50);
              for (_ = 0x14; _ != 0; _ = _ + -1) {
                *ppcVar1 = nextReplayData->magic;
                nextReplayData = (ReplayData *)&nextReplayData->version;
                ppcVar1 = ppcVar1 + 1;
              }
              _strcpy(menu->replayFilePaths[replayFileIdx],replayFilePath);
              sprintf(menu->replayFileNumber[replayFileIdx],"No.%.2d",i + 1);
              replayFileIdx = replayFileIdx + 1;
            }
            _free(replayData);
          }
        }
        createDirectoryInCWD("./replay");
        ChangeCWD("./replay");
        replayFileHandle = FindFirstFileA("th6_ud????.rpy",&replayFileInfo);
        if (replayFileHandle != (HANDLE)0xffffffff) {
          for (i = 0; i < 0x2d; i = i + 1) {
            replayData = (ReplayData *)FileSystem::OpenPath(replayFileInfo.cFileName,1);
            if (replayData != (ReplayData *)0x0) {
              ZVar2 = validateReplayData(replayData,g_LastFileSize);
              if (ZVar2 == ZUN_SUCCESS) {
                nextReplayData = replayData;
                replayDataMagics = (char **)(&menu->field_0xfc1c + replayFileIdx * 0x50);
                for (_ = 0x14; _ != 0; _ = _ + -1) {
                  *replayDataMagics = nextReplayData->magic;
                  nextReplayData = (ReplayData *)&nextReplayData->version;
                  replayDataMagics = replayDataMagics + 1;
                }
                sprintf(menu->replayFilePaths[replayFileIdx],"./replay/%s",replayFileInfo.cFileName)
                ;
                sprintf(menu->replayFileNumber[replayFileIdx],"User ");
                replayFileIdx = replayFileIdx + 1;
              }
              _free(replayData);
              nextFile = FindNextFileA(replayFileHandle,&replayFileInfo);
              if (nextFile == 0) break;
            }
          }
        }
        FindClose(replayFileHandle);
        ChangeCWD("../");
        menu->replayFilesNum = replayFileIdx;
        menu->unk_81fc = 0.0;
        menu->field78_0x8214 = menu->isActive;
        menu->isActive = 0;
        menu->gameState = STATE_REPLAY_MENU;
        i = 0;
        anmVM = menu->AnmVMArray;
                    /* memset all pending interrupt to 15 */
        for (; i < 122; i = i + 1) {
          anmVM->pendingInterrupt = 15;
          anmVM = anmVM + 1;
        }
        menu->cursor = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_Supervisor.curState = 4;
      }
    }
  }
  else if (gameState == STATE_REPLAY_MENU) {
    if (0x27 < menu->gameSubState) {
      if (menu->replayFilesNum != 0) {
        MainMenu::MoveCursor(menu,menu->replayFilesNum);
        menu->chosenReplay = menu->cursor;
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          menu->gameState = STATE_15;
          anmVM = menu->AnmVMArray + 0x61;
          for (i = 0; i < 0x19; i = i + 1) {
            anmVM->pendingInterrupt = 0x11;
            anmVM = anmVM + 1;
          }
          anmVM = menu->AnmVMArray + menu->chosenReplay + 99;
          anmVM->pendingInterrupt = 0x10;
          menu->gameSubState = 0;
          menu->cursor = 0;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
          pbVar4 = (int *)FileSystem::OpenPath(menu->replayFilePaths[menu->chosenReplay],1);
          menu->replayGameData = pbVar4;
          validateReplayData((ReplayData *)menu->replayGameData,g_LastFileSize);
          for (i = 0; i < 7; i = i + 1) {
            if (menu->replayGameData[i + 0xd] != 0) {
              menu->replayGameData[i + 0xd] =
                   (int)menu->replayGameData + menu->replayGameData[i + 0xd];
            }
          }
          do {
            if (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + menu->chosenReplay * 0x50) != 0)
            goto LAB_0043877b;
            menu->cursor = menu->cursor + 1;
          } while (menu->cursor < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        menu->gameState = STATE_14;
        menu->gameSubState = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          menu->AnmVMArray[i].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        menu->cursor = 0;
      }
    }
  }
  else if (gameState == STATE_14) {
    if (menu->gameSubState == 0x24) {
      menu->gameState = STATE_STARTUP;
      menu->gameSubState = 0;
    }
  }
  else if ((gameState == STATE_15) && (0x27 < menu->gameSubState)) {
    i = MainMenu::MoveCursor(menu,7);
    if (i < ZUN_SUCCESS) {
      while (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + menu->chosenReplay * 0x50) == 0) {
        menu->cursor = menu->cursor + -1;
        if (menu->cursor < 0) {
          menu->cursor = 6;
        }
      }
    }
    else if (ZUN_SUCCESS < i) {
      while (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + menu->chosenReplay * 0x50) == 0) {
        menu->cursor = menu->cursor + 1;
        if (6 < menu->cursor) {
          menu->cursor = 0;
        }
      }
    }
    if ((((g_CurFrameInput & 0x1001) == 0) ||
        ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) ||
       (menu->replayGameData + menu->cursor * 0x14 + 0xd == (int *)0x0)) {
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        _free(menu->replayGameData);
        menu->replayGameData = (int *)0x0;
        menu->gameState = STATE_REPLAY_MENU;
        menu->gameSubState = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          menu->AnmVMArray[i].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        menu->gameState = STATE_REPLAY_MENU;
        i = 0;
        anmVM = menu->AnmVMArray;
        for (; i < 0x7a; i = i + 1) {
          anmVM->pendingInterrupt = 0xf;
          anmVM = anmVM + 1;
        }
        menu->cursor = menu->chosenReplay;
      }
    }
    else {
      g_GameManager.field7_0x1c = 1;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,menu->replayFilePaths[menu->chosenReplay]);
      g_GameManager.difficulty = (uint)*(byte *)((int)menu->replayGameData + 7);
      g_GameManager.character = *(byte *)((int)menu->replayGameData + 6) / 2;
      g_GameManager.shottype = *(byte *)((int)menu->replayGameData + 6) % 2;
      for (i = 0; menu->replayGameData[i + 0xd] == 0; i = i + 1) {
      }
      g_GameManager.lives_remaining = *(byte *)(menu->replayGameData[i + 0xd] + 9);
      g_GameManager.bombs_remaining = *(byte *)(menu->replayGameData[i + 0xd] + 10);
      _free(menu->replayGameData);
      menu->replayGameData = (int *)0x0;
      g_GameManager.current_stage = menu->cursor;
      g_Supervisor.curState = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}

