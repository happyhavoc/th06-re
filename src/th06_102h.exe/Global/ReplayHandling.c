
void __thiscall ReplayHandling(void *this,MainMenu *menu)

{
  ZunResult ZVar2;
  BOOL nextFile;
  byte *pbVar4;
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
  gameState = *(GameState *)((int)this + 0x81f0);
  if (gameState == STATE_UNLOAD_TO_REPLAY_MENU) {
    if (*(int *)((int)this + 0x81f4) == 0x3c) {
      ZVar2 = LoadReplayMenu((MainMenu *)this);
      if (ZVar2 == ZUN_SUCCESS) {
        replayFileIdx = 0;
        for (i = 0; i < 0xf; i = i + 1) {
          sprintf(replayFilePath,"./replay/th6_%.2d.rpy",i + 1);
          replayData = (ReplayData *)FileSystem::OpenPath(replayFilePath,1);
          if (replayData != (ReplayData *)0x0) {
            ZVar2 = validateReplayData(replayData,g_LastFileSize);
            if (ZVar2 == ZUN_SUCCESS) {
              nextReplayData = replayData;
              ppcVar1 = (char **)((int)this + replayFileIdx * 0x50 + 0xfc1c);
              for (_ = 0x14; _ != 0; _ = _ + -1) {
                *ppcVar1 = nextReplayData->magic;
                nextReplayData = (ReplayData *)&nextReplayData->version;
                ppcVar1 = ppcVar1 + 1;
              }
              _strcpy((char *)((int)this + replayFileIdx * 0x200 + 0x823c),replayFilePath);
              sprintf((char *)((int)this + replayFileIdx * 8 + 0xfa3c),"No.%.2d",i + 1);
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
                replayDataMagics = (char **)((int)this + replayFileIdx * 0x50 + 0xfc1c);
                for (_ = 0x14; _ != 0; _ = _ + -1) {
                  *replayDataMagics = nextReplayData->magic;
                  nextReplayData = (ReplayData *)&nextReplayData->version;
                  replayDataMagics = replayDataMagics + 1;
                }
                sprintf((char *)((int)this + replayFileIdx * 0x200 + 0x823c),"./replay/%s",
                        replayFileInfo.cFileName);
                sprintf((char *)((int)this + replayFileIdx * 8 + 0xfa3c),"User ");
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
        *(int *)((int)this + 0x81ec) = replayFileIdx;
        *(undefined4 *)((int)this + 0x81fc) = 0;
        *(undefined4 *)((int)this + 0x8214) = *(undefined4 *)((int)this + 0x8210);
        *(undefined4 *)((int)this + 0x8210) = 0;
        *(undefined4 *)((int)this + 0x81f0) = STATE_REPLAY_MENU;
        anmVM = (AnmVm *)this;
                    /* memset all pending interrupt to 15 */
        for (i = 0; i < 122; i = i + 1) {
          anmVM->pendingInterrupt = 15;
          anmVM = anmVM + 1;
        }
        *(undefined4 *)((int)this + 0x81a0) = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_Supervisor.curState = 4;
      }
    }
  }
  else if (gameState == STATE_REPLAY_MENU) {
    if (0x27 < *(int *)((int)this + 0x81f4)) {
      if (*(int *)((int)this + 0x81ec) != 0) {
        MainMenu::MoveCursor((MainMenu *)this,*(int *)((int)this + 0x81ec));
        *(undefined4 *)((int)this + 0x81e8) = *(undefined4 *)((int)this + 0x81a0);
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          *(undefined4 *)((int)this + 0x81f0) = 0xf;
          anmVM = (AnmVm *)((int)this + 0x6710);
          for (i = 0; i < 0x19; i = i + 1) {
            anmVM->pendingInterrupt = 0x11;
            anmVM = anmVM + 1;
          }
          anmVM = (AnmVm *)((int)this + (*(int *)((int)this + 0x81e8) + 99) * 0x110);
          anmVM->pendingInterrupt = 0x10;
          *(undefined4 *)((int)this + 0x81f4) = 0;
          *(undefined4 *)((int)this + 0x81a0) = 0;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
          pbVar4 = FileSystem::OpenPath
                             ((char *)((int)this + *(int *)((int)this + 0x81e8) * 0x200 + 0x823c),1)
          ;
          *(byte **)((int)this + 0x10edc) = pbVar4;
          validateReplayData(*(ReplayData **)((int)this + 0x10edc),g_LastFileSize);
          for (i = 0; i < 7; i = i + 1) {
            if (*(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4) != 0) {
              *(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4) =
                   *(int *)((int)this + 0x10edc) +
                   *(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4);
            }
          }
          do {
            if (*(int *)((int)this +
                        *(int *)((int)this + 0x81a0) * 4 +
                        *(int *)((int)this + 0x81e8) * 0x50 + 0xfc50) != 0) goto LAB_0043877b;
            *(int *)((int)this + 0x81a0) = *(int *)((int)this + 0x81a0) + 1;
          } while (*(int *)((int)this + 0x81a0) < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        *(undefined4 *)((int)this + 0x81f0) = 0xe;
        *(undefined4 *)((int)this + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)((int)this + i * 0x110 + 0x8a) = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        *(undefined4 *)((int)this + 0x81a0) = 0;
      }
    }
  }
  else if (gameState == STATE_14) {
    if (*(int *)((int)this + 0x81f4) == 0x24) {
      *(undefined4 *)((int)this + 0x81f0) = 0;
      *(undefined4 *)((int)this + 0x81f4) = 0;
    }
  }
  else if ((gameState == STATE_15) && (0x27 < *(int *)((int)this + 0x81f4))) {
    i = MainMenu::MoveCursor((MainMenu *)this,7);
    if (i < ZUN_SUCCESS) {
      while (*(int *)((int)this +
                     *(int *)((int)this + 0x81a0) * 4 + *(int *)((int)this + 0x81e8) * 0x50 + 0xfc50
                     ) == 0) {
        *(int *)((int)this + 0x81a0) = *(int *)((int)this + 0x81a0) + -1;
        if (*(int *)((int)this + 0x81a0) < 0) {
          *(undefined4 *)((int)this + 0x81a0) = 6;
        }
      }
    }
    else if (ZUN_SUCCESS < i) {
      while (*(int *)((int)this +
                     *(int *)((int)this + 0x81a0) * 4 + *(int *)((int)this + 0x81e8) * 0x50 + 0xfc50
                     ) == 0) {
        *(int *)((int)this + 0x81a0) = *(int *)((int)this + 0x81a0) + 1;
        if (6 < *(int *)((int)this + 0x81a0)) {
          *(undefined4 *)((int)this + 0x81a0) = 0;
        }
      }
    }
    if ((((g_CurFrameInput & 0x1001) == 0) ||
        ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) ||
       (*(int *)((int)this + 0x10edc) + 0x34 + *(int *)((int)this + 0x81a0) * 0x50 == 0)) {
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        _free(*(void **)((int)this + 0x10edc));
        *(undefined4 *)((int)this + 0x10edc) = 0;
        *(undefined4 *)((int)this + 0x81f0) = STATE_TRANSITION_TO_REPLAY_MENU;
        *(undefined4 *)((int)this + 0x81f4) = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          *(undefined2 *)((int)this + i * 0x110 + 0x8a) = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        *(undefined4 *)((int)this + 0x81f0) = 0xd;
        anmVM = (AnmVm *)this;
        for (i = 0; i < 0x7a; i = i + 1) {
          anmVM->pendingInterrupt = 0xf;
          anmVM = anmVM + 1;
        }
        *(undefined4 *)((int)this + 0x81a0) = *(undefined4 *)((int)this + 0x81e8);
      }
    }
    else {
      g_GameManager.field7_0x1c = 1;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,
              (char *)((int)this + *(int *)((int)this + 0x81e8) * 0x200 + 0x823c));
      g_GameManager.difficulty = (uint)*(byte *)(*(int *)((int)this + 0x10edc) + 7);
      g_GameManager.character = *(byte *)(*(int *)((int)this + 0x10edc) + 6) / 2;
      g_GameManager.shottype = *(byte *)(*(int *)((int)this + 0x10edc) + 6) % 2;
      for (i = 0; *(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4) == 0; i = i + 1) {
      }
      g_GameManager.lives_remaining =
           *(byte *)(*(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4) + 9);
      g_GameManager.bombs_remaining =
           *(byte *)(*(int *)(*(int *)((int)this + 0x10edc) + 0x34 + i * 4) + 10);
      _free(*(void **)((int)this + 0x10edc));
      *(undefined4 *)((int)this + 0x10edc) = 0;
      g_GameManager.current_stage = *(uint *)((int)this + 0x81a0);
      g_Supervisor.curState = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}

