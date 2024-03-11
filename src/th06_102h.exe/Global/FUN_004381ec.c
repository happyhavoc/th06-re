
void __fastcall FUN_004381ec(MainMenu *param_1)

{
  ZunResult ZVar2;
  BOOL BVar3;
  byte *pbVar4;
  int _;
  ReplayData *nextReplayData;
  char **magics;
  _WIN32_FIND_DATAA replayFileInfo;
  char replayFilePath [64];
  uint local_1c;
  ReplayData *replayData;
  int local_14;
  HANDLE replayFileHandle;
  int replayFile;
  MainMenu *local_8;
  uint uVar1;
  uint unaff_retaddr;
  
  local_1c = __security_cookie ^ unaff_retaddr;
  uVar1 = param_1->gameState;
  if (uVar1 == 0xc) {
    if (param_1->unk_81f4 == 0x3c) {
      ZVar2 = LoadReplayMenu(param_1);
      if (ZVar2 == ZUN_SUCCESS) {
        local_14 = 0;
        for (replayFile = 0; replayFile < 0xf; replayFile = replayFile + 1) {
          sprintf(replayFilePath,"./replay/th6_%.2d.rpy",replayFile + 1);
          replayData = (ReplayData *)FileSystem::OpenPath(replayFilePath,1);
          if (replayData != (ReplayData *)0x0) {
            ZVar2 = FUN_0042a140(replayData,g_LastFileSize);
            if (ZVar2 == ZUN_SUCCESS) {
              nextReplayData = replayData;
              magics = (char **)(&param_1->field_0xfc1c + local_14 * 0x50);
              for (_ = 0x14; _ != 0; _ = _ + -1) {
                *magics = nextReplayData->magic;
                nextReplayData = (ReplayData *)&nextReplayData->version;
                magics = magics + 1;
              }
              _strcpy((char *)(param_1->field92_0x821c + local_14 * 0x100 + 0x10),replayFilePath);
              sprintf(&param_1->field_0xfa3c + local_14 * 8,"No.%.2d",replayFile + 1);
              local_14 = local_14 + 1;
            }
            _free(replayData);
          }
        }
        FUN_0045d588("./replay");
        FUN_0045d5f9("./replay");
        replayFileHandle = FindFirstFileA("th6_ud????.rpy",&replayFileInfo);
        if (replayFileHandle != (HANDLE)0xffffffff) {
          for (replayFile = 0; replayFile < 0x2d; replayFile = replayFile + 1) {
            replayData = (ReplayData *)FileSystem::OpenPath(replayFileInfo.cFileName,1);
            if (replayData != (ReplayData *)0x0) {
              ZVar2 = FUN_0042a140(replayData,g_LastFileSize);
              if (ZVar2 == ZUN_SUCCESS) {
                nextReplayData = replayData;
                magics = (char **)(&param_1->field_0xfc1c + local_14 * 0x50);
                for (_ = 0x14; _ != 0; _ = _ + -1) {
                  *magics = nextReplayData->magic;
                  nextReplayData = (ReplayData *)&nextReplayData->version;
                  magics = magics + 1;
                }
                sprintf((char *)(param_1->field92_0x821c + local_14 * 0x100 + 0x10),"./replay/%s",
                        replayFileInfo.cFileName);
                sprintf(&param_1->field_0xfa3c + local_14 * 8,"User ");
                local_14 = local_14 + 1;
              }
              _free(replayData);
              BVar3 = FindNextFileA(replayFileHandle,&replayFileInfo);
              if (BVar3 == 0) break;
            }
          }
        }
        FindClose(replayFileHandle);
        FUN_0045d5f9(&DAT_0046c3b4);
        *(int *)&param_1->field_0x81ec = local_14;
        param_1->unk_81fc = 0;
        *(uint *)&param_1->field_0x8214 = param_1->unk_8210;
        param_1->unk_8210 = 0;
        param_1->gameState = 0xd;
        local_8 = param_1;
        for (replayFile = 0; replayFile < 0x7a; replayFile = replayFile + 1) {
          local_8->field0_0x0[0].pendingInterrupt = 0xf;
          local_8 = (MainMenu *)(local_8->field0_0x0 + 1);
        }
        param_1->cursor = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_Supervisor.curState = 4;
      }
    }
  }
  else if (uVar1 == 0xd) {
    if (0x27 < (int)param_1->unk_81f4) {
      if (*(int *)&param_1->field_0x81ec != 0) {
        MainMenu::FUN_0043753c(param_1,*(int *)&param_1->field_0x81ec);
        *(uint *)&param_1->field_0x81e8 = param_1->cursor;
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          param_1->gameState = 0xf;
          local_8 = (MainMenu *)(param_1->field0_0x0 + 0x61);
          for (replayFile = 0; replayFile < 0x19; replayFile = replayFile + 1) {
            *(short *)local_8->field0_0x0 = 0x11;
            local_8 = (MainMenu *)((int)local_8 + 0x110);
          }
          local_8 = (MainMenu *)(param_1->field0_0x0 + *(int *)&param_1->field_0x81e8 + 99);
          local_8->field0_0x0[0].pendingInterrupt = 0x10;
          param_1->unk_81f4 = 0;
          param_1->cursor = 0;
          SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
          pbVar4 = FileSystem::OpenPath
                             ((char *)(param_1->field92_0x821c +
                                      *(int *)&param_1->field_0x81e8 * 0x100 + 0x10),1);
          param_1->unk_10edc = (uint)pbVar4;
          FUN_0042a140((ReplayData *)param_1->unk_10edc,g_LastFileSize);
          for (replayFile = 0; replayFile < 7; replayFile = replayFile + 1) {
            if (*(int *)(param_1->unk_10edc + 0x34 + replayFile * 4) != 0) {
              *(uint *)(param_1->unk_10edc + 0x34 + replayFile * 4) =
                   param_1->unk_10edc + *(int *)(param_1->unk_10edc + 0x34 + replayFile * 4);
            }
          }
          do {
            if (*(int *)(&param_1->field_0xfc50 +
                        param_1->cursor * 4 + *(int *)&param_1->field_0x81e8 * 0x50) != 0)
            goto LAB_0043877b;
            param_1->cursor = param_1->cursor + 1;
          } while ((int)param_1->cursor < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        param_1->gameState = 0xe;
        param_1->unk_81f4 = 0;
        for (replayFile = 0; replayFile < 0x7a; replayFile = replayFile + 1) {
          param_1->field0_0x0[replayFile].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        param_1->cursor = 0;
      }
    }
  }
  else if (uVar1 == 0xe) {
    if (param_1->unk_81f4 == 0x24) {
      param_1->gameState = 0;
      param_1->unk_81f4 = 0;
    }
  }
  else if ((uVar1 == 0xf) && (0x27 < (int)param_1->unk_81f4)) {
    replayFile = MainMenu::FUN_0043753c(param_1,7);
    if (replayFile < 0) {
      while (*(int *)(&param_1->field_0xfc50 +
                     param_1->cursor * 4 + *(int *)&param_1->field_0x81e8 * 0x50) == 0) {
        param_1->cursor = param_1->cursor - 1;
        if ((int)param_1->cursor < 0) {
          param_1->cursor = 6;
        }
      }
    }
    else if (0 < replayFile) {
      while (*(int *)(&param_1->field_0xfc50 +
                     param_1->cursor * 4 + *(int *)&param_1->field_0x81e8 * 0x50) == 0) {
        param_1->cursor = param_1->cursor + 1;
        if (6 < (int)param_1->cursor) {
          param_1->cursor = 0;
        }
      }
    }
    if ((((g_CurFrameInput & 0x1001) == 0) ||
        ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) ||
       (param_1->unk_10edc + 0x34 + param_1->cursor * 0x50 == 0)) {
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        _free((void *)param_1->unk_10edc);
        param_1->unk_10edc = 0;
        param_1->gameState = 0xd;
        param_1->unk_81f4 = 0;
        for (replayFile = 0; replayFile < 0x7a; replayFile = replayFile + 1) {
          param_1->field0_0x0[replayFile].pendingInterrupt = 4;
        }
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        param_1->gameState = 0xd;
        local_8 = param_1;
        for (replayFile = 0; replayFile < 0x7a; replayFile = replayFile + 1) {
          local_8->field0_0x0[0].pendingInterrupt = 0xf;
          local_8 = (MainMenu *)(local_8->field0_0x0 + 1);
        }
        param_1->cursor = *(uint *)&param_1->field_0x81e8;
      }
    }
    else {
      g_GameManager.field7_0x1c = 1;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,
              (char *)(param_1->field92_0x821c + *(int *)&param_1->field_0x81e8 * 0x100 + 0x10));
      g_GameManager.difficulty = (uint)*(byte *)(param_1->unk_10edc + 7);
      g_GameManager.character = *(byte *)(param_1->unk_10edc + 6) / 2;
      g_GameManager.shottype = *(byte *)(param_1->unk_10edc + 6) % 2;
      for (replayFile = 0; *(int *)(param_1->unk_10edc + 0x34 + replayFile * 4) == 0;
          replayFile = replayFile + 1) {
      }
      g_GameManager.lives_remaining =
           *(byte *)(*(int *)(param_1->unk_10edc + 0x34 + replayFile * 4) + 9);
      g_GameManager.bombs_remaining =
           *(byte *)(*(int *)(param_1->unk_10edc + 0x34 + replayFile * 4) + 10);
      _free((void *)param_1->unk_10edc);
      param_1->unk_10edc = 0;
      g_GameManager.current_stage = param_1->cursor;
      g_Supervisor.curState = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return;
}

