
void __fastcall ReplayHandling(MainMenu *menu)

{
  ZunResult ZVar2;
  BOOL nextFile;
  byte *pbVar4;
  int _;
  ReplayData *nextReplayData;
  char **replayDataMagics;
  _WIN32_FIND_DATAA replayFileInfo;
  char replayFilePath [64];
  uint stackCookie;
  ReplayData *replayData;
  int replayFilesNum;
  HANDLE replayFileHandle;
  ZunResult replayFile;
  MainMenu *main_menu;
  uint gameState;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  gameState = menu->gameState;
  if (gameState == STATE_UNLOAD_TO_REPLAY_MENU) {
    if (menu->gameSubState == 0x3c) {
      ZVar2 = LoadReplayMenu(menu);
      if (ZVar2 == ZUN_SUCCESS) {
        replayFilesNum = 0;
        for (replayFile = 0; replayFile < 0xf; replayFile = replayFile + 1) {
          sprintf(replayFilePath,"./replay/th6_%.2d.rpy",replayFile + 1);
          replayData = (ReplayData *)FileSystem::OpenPath(replayFilePath,1);
          if (replayData != (ReplayData *)0x0) {
            ZVar2 = validateReplayData(replayData,g_LastFileSize);
            if (ZVar2 == ZUN_SUCCESS) {
              nextReplayData = replayData;
              replayDataMagics = (char **)(&menu->field_0xfc1c + replayFilesNum * 0x50);
              for (_ = 0x14; _ != 0; _ = _ + -1) {
                *replayDataMagics = nextReplayData->magic;
                nextReplayData = (ReplayData *)&nextReplayData->version;
                replayDataMagics = replayDataMagics + 1;
              }
              _strcpy(&menu->field_0x823c + replayFilesNum * 0x200,replayFilePath);
              sprintf(&menu->field_0xfa3c + replayFilesNum * 8,"No.%.2d",replayFile + 1);
              replayFilesNum = replayFilesNum + 1;
            }
            _free(replayData);
          }
        }
        createDirectoryInCWD("./replay");
        ChangeCWD("./replay");
        replayFileHandle = FindFirstFileA("th6_ud????.rpy",&replayFileInfo);
        if (replayFileHandle != (HANDLE)0xffffffff) {
          for (replayFile = 0; replayFile < 0x2d; replayFile = replayFile + 1) {
            replayData = (ReplayData *)FileSystem::OpenPath(replayFileInfo.cFileName,1);
            if (replayData != (ReplayData *)0x0) {
              ZVar2 = validateReplayData(replayData,g_LastFileSize);
              if (ZVar2 == ZUN_SUCCESS) {
                nextReplayData = replayData;
                replayDataMagics = (char **)(&menu->field_0xfc1c + replayFilesNum * 0x50);
                for (_ = 0x14; _ != 0; _ = _ + -1) {
                  *replayDataMagics = nextReplayData->magic;
                  nextReplayData = (ReplayData *)&nextReplayData->version;
                  replayDataMagics = replayDataMagics + 1;
                }
                sprintf(&menu->field_0x823c + replayFilesNum * 0x200,"./replay/%s",
                        replayFileInfo.cFileName);
                sprintf(&menu->field_0xfa3c + replayFilesNum * 8,"User ");
                replayFilesNum = replayFilesNum + 1;
              }
              _free(replayData);
              nextFile = FindNextFileA(replayFileHandle,&replayFileInfo);
              if (nextFile == 0) break;
            }
          }
        }
        FindClose(replayFileHandle);
        ChangeCWD("../");
        *(int *)&menu->field_0x81ec = replayFilesNum;
        menu->unk_81fc = 0;
        *(uint *)&menu->field_0x8214 = menu->unk_8210;
        menu->unk_8210 = 0;
        menu->gameState = STATE_TRANSITION_TO_REPLAY_MENU;
        main_menu = menu;
        for (replayFile = ZUN_SUCCESS; replayFile < 122; replayFile = replayFile + 1) {
          main_menu->AnmVMArray[0].pendingInterrupt = 15;
          main_menu = (MainMenu *)(main_menu->AnmVMArray + 1);
        }
        menu->cursor = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_Supervisor.curState = 4;
      }
    }
  }
  else if (gameState == STATE_TRANSITION_TO_REPLAY_MENU) {
    if (0x27 < (int)menu->gameSubState) {
      if (*(int *)&menu->field_0x81ec != 0) {
        MainMenu::FUN_0043753c(menu,*(int *)&menu->field_0x81ec);
        *(uint *)&menu->field_0x81e8 = menu->cursor;
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          menu->gameState = 0xf;
          main_menu = (MainMenu *)(menu->AnmVMArray + 0x61);
          for (replayFile = 0; replayFile < 0x19; replayFile = replayFile + 1) {
            *(short *)main_menu->AnmVMArray = 0x11;
            main_menu = (MainMenu *)((int)main_menu + 0x110);
          }
          main_menu = (MainMenu *)(menu->AnmVMArray + *(int *)&menu->field_0x81e8 + 99);
          main_menu->AnmVMArray[0].pendingInterrupt = 0x10;
          menu->gameSubState = 0;
          menu->cursor = 0;
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
          pbVar4 = FileSystem::OpenPath(&menu->field_0x823c + *(int *)&menu->field_0x81e8 * 0x200,1)
          ;
          menu->unk_10edc = (uint)pbVar4;
          validateReplayData((ReplayData *)menu->unk_10edc,g_LastFileSize);
          for (replayFile = ZUN_SUCCESS; replayFile < 7; replayFile = replayFile + 1) {
            if (*(int *)(menu->unk_10edc + 0x34 + replayFile * 4) != 0) {
              *(uint *)(menu->unk_10edc + 0x34 + replayFile * 4) =
                   menu->unk_10edc + *(int *)(menu->unk_10edc + 0x34 + replayFile * 4);
            }
          }
          do {
            if (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + *(int *)&menu->field_0x81e8 * 0x50
                        ) != 0) goto LAB_0043877b;
            menu->cursor = menu->cursor + 1;
          } while ((int)menu->cursor < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        menu->gameState = 0xe;
        menu->gameSubState = 0;
        for (replayFile = ZUN_SUCCESS; replayFile < 0x7a; replayFile = replayFile + 1) {
          menu->AnmVMArray[replayFile].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        menu->cursor = 0;
      }
    }
  }
  else if (gameState == 0xe) {
    if (menu->gameSubState == 0x24) {
      menu->gameState = 0;
      menu->gameSubState = 0;
    }
  }
  else if ((gameState == 0xf) && (0x27 < (int)menu->gameSubState)) {
    replayFile = MainMenu::FUN_0043753c(menu,7);
    if (replayFile < ZUN_SUCCESS) {
      while (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + *(int *)&menu->field_0x81e8 * 0x50)
             == 0) {
        menu->cursor = menu->cursor - 1;
        if ((int)menu->cursor < 0) {
          menu->cursor = 6;
        }
      }
    }
    else if (ZUN_SUCCESS < replayFile) {
      while (*(int *)(&menu->field_0xfc50 + menu->cursor * 4 + *(int *)&menu->field_0x81e8 * 0x50)
             == 0) {
        menu->cursor = menu->cursor + 1;
        if (6 < (int)menu->cursor) {
          menu->cursor = 0;
        }
      }
    }
    if ((((g_CurFrameInput & 0x1001) == 0) ||
        ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) ||
       (menu->unk_10edc + 0x34 + menu->cursor * 0x50 == 0)) {
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        _free((void *)menu->unk_10edc);
        menu->unk_10edc = 0;
        menu->gameState = STATE_TRANSITION_TO_REPLAY_MENU;
        menu->gameSubState = 0;
        for (replayFile = 0; replayFile < 0x7a; replayFile = replayFile + 1) {
          menu->AnmVMArray[replayFile].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        menu->gameState = 0xd;
        main_menu = menu;
        for (replayFile = ZUN_SUCCESS; replayFile < 0x7a; replayFile = replayFile + 1) {
          main_menu->AnmVMArray[0].pendingInterrupt = 0xf;
          main_menu = (MainMenu *)(main_menu->AnmVMArray + 1);
        }
        menu->cursor = *(uint *)&menu->field_0x81e8;
      }
    }
    else {
      g_GameManager.field7_0x1c = 1;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,&menu->field_0x823c + *(int *)&menu->field_0x81e8 * 0x200);
      g_GameManager.difficulty = (uint)*(byte *)(menu->unk_10edc + 7);
      g_GameManager.character = *(byte *)(menu->unk_10edc + 6) / 2;
      g_GameManager.shottype = *(byte *)(menu->unk_10edc + 6) % 2;
      for (replayFile = ZUN_SUCCESS; *(int *)(menu->unk_10edc + 0x34 + replayFile * 4) == 0;
          replayFile = replayFile + 1) {
      }
      g_GameManager.lives_remaining =
           *(byte *)(*(int *)(menu->unk_10edc + 0x34 + replayFile * 4) + 9);
      g_GameManager.bombs_remaining =
           *(byte *)(*(int *)(menu->unk_10edc + 0x34 + replayFile * 4) + 10);
      _free((void *)menu->unk_10edc);
      menu->unk_10edc = 0;
      g_GameManager.current_stage = menu->cursor;
      g_Supervisor.curState = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}

