
void __thiscall MainMenu::ReplayHandling(MainMenu *this)

{
  ZunResult ZVar2;
  BOOL nextFile;
  int _;
  ReplayData *nextReplayData;
  char **headerMemset;
  ReplayData *memsetHeader;
  _WIN32_FIND_DATAA replayFileInfo;
  char replayFilePath [64];
  uint stackCookie;
  ReplayData *replayData;
  int replayFileIdx;
  HANDLE replayFileHandle;
  int cur;
  AnmVm *anmVM;
  GameState gameState;
  uint unaff_retaddr;
  
  stackCookie = __security_cookie ^ unaff_retaddr;
  gameState = this->gameState;
  if (gameState == STATE_REPLAY_LOAD) {
    if (this->stateTimer == 0x3c) {
      ZVar2 = LoadReplayMenu(this);
      if (ZVar2 == ZUN_SUCCESS) {
        replayFileIdx = 0;
        for (cur = 0; cur < 0xf; cur = cur + 1) {
          sprintf(replayFilePath,"./replay/th6_%.2d.rpy",cur + 1);
          replayData = (ReplayData *)FileSystem::OpenPath(replayFilePath,1);
          if (replayData != (ReplayData *)0x0) {
            ZVar2 = validateReplayData(replayData,g_LastFileSize);
            if (ZVar2 == ZUN_SUCCESS) {
              _ = 0x14;
              nextReplayData = replayData;
              headerMemset = &this->replayFileData[replayFileIdx].magic;
              for (; _ != 0; _ = _ + -1) {
                *headerMemset = nextReplayData->magic;
                nextReplayData = (ReplayData *)&nextReplayData->version;
                headerMemset = headerMemset + 1;
              }
              _strcpy(this->replayFilePaths[replayFileIdx],replayFilePath);
              sprintf(this->replayFileName[replayFileIdx],"No.%.2d",cur + 1);
              replayFileIdx = replayFileIdx + 1;
            }
            _free(replayData);
          }
        }
        createDirectoryInCWD("./replay");
        ChangeCWD("./replay");
        replayFileHandle = FindFirstFileA("th6_ud????.rpy",&replayFileInfo);
        if (replayFileHandle != (HANDLE)0xffffffff) {
          for (cur = 0; cur < 0x2d; cur = cur + 1) {
            replayData = (ReplayData *)FileSystem::OpenPath(replayFileInfo.cFileName,1);
            if (replayData != (ReplayData *)0x0) {
              ZVar2 = validateReplayData(replayData,g_LastFileSize);
              if (ZVar2 == ZUN_SUCCESS) {
                nextReplayData = replayData;
                memsetHeader = this->replayFileData + replayFileIdx;
                for (_ = 0x14; _ != 0; _ = _ + -1) {
                  memsetHeader->magic = nextReplayData->magic;
                  nextReplayData = (ReplayData *)&nextReplayData->version;
                  memsetHeader = (ReplayData *)&memsetHeader->version;
                }
                sprintf(this->replayFilePaths[replayFileIdx],"./replay/%s",replayFileInfo.cFileName)
                ;
                sprintf(this->replayFileName[replayFileIdx],"User ");
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
        this->replayFilesNum = replayFileIdx;
        this->unk_81fc = 0.0;
        this->wasActive = this->isActive;
        this->isActive = 0;
        this->gameState = STATE_REPLAY_ANIM;
        cur = 0;
        anmVM = &this->vm1;
                    /* memset all pending interrupt to 15 */
        for (; cur < 122; cur = cur + 1) {
          anmVM->pendingInterrupt = 15;
          anmVM = anmVM + 1;
        }
        this->cursor = 0;
      }
      else {
        GameErrorContextLog(&g_GameErrorContext,"セレクト画面の読み込みに失敗\n");
        g_Supervisor.curState = 4;
      }
    }
  }
  else if (gameState == STATE_REPLAY_ANIM) {
    if (0x27 < this->stateTimer) {
      if (this->replayFilesNum != 0) {
        MoveCursor(this,this->replayFilesNum);
        this->chosenReplay = this->cursor;
        if (((g_CurFrameInput & 0x1001) != 0) &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
          this->gameState = STATE_REPLAY_SELECT;
          anmVM = &this->field97_0x6710;
          for (cur = 0; cur < 0x19; cur = cur + 1) {
            anmVM->pendingInterrupt = 0x11;
            anmVM = anmVM + 1;
          }
          anmVM = &this->field99_0x6930 + this->chosenReplay;
          anmVM->pendingInterrupt = 0x10;
          this->stateTimer = 0;
          this->cursor = 0;
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
          nextReplayData =
               (ReplayData *)FileSystem::OpenPath(this->replayFilePaths[this->chosenReplay],1);
          this->currentReplay = nextReplayData;
          validateReplayData(this->currentReplay,g_LastFileSize);
          for (cur = 0; cur < 7; cur = cur + 1) {
            if (this->currentReplay->stage_score[cur + 1] != (StageReplayData *)0x0) {
              this->currentReplay->stage_score[cur + 1] =
                   (StageReplayData *)
                   ((int)this->currentReplay->stage_score +
                   (int)(this->currentReplay->stage_score[cur + 1][-1].replay_inputs + 0xd2e8));
            }
          }
          do {
            if (this->replayFileData[this->chosenReplay].stage_score[this->cursor + 1] !=
                (StageReplayData *)0x0) goto LAB_0043877b;
            this->cursor = this->cursor + 1;
          } while (this->cursor < 7);
          goto LAB_00438bb2;
        }
      }
LAB_0043877b:
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        this->gameState = STATE_REPLAY_UNLOAD;
        this->stateTimer = 0;
        for (cur = 0; cur < 0x7a; cur = cur + 1) {
          (&this->vm1)[cur].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        this->cursor = 0;
      }
    }
  }
  else if (gameState == STATE_REPLAY_UNLOAD) {
    if (this->stateTimer == 0x24) {
      this->gameState = STATE_STARTUP;
      this->stateTimer = 0;
    }
  }
  else if ((gameState == STATE_REPLAY_SELECT) && (0x27 < this->stateTimer)) {
    cur = MoveCursor(this,7);
    if (cur < ZUN_SUCCESS) {
      while (this->replayFileData[this->chosenReplay].stage_score[this->cursor + 1] ==
             (StageReplayData *)0x0) {
        this->cursor = this->cursor + -1;
        if (this->cursor < 0) {
          this->cursor = 6;
        }
      }
    }
    else if (ZUN_SUCCESS < cur) {
      while (this->replayFileData[this->chosenReplay].stage_score[this->cursor + 1] ==
             (StageReplayData *)0x0) {
        this->cursor = this->cursor + 1;
        if (6 < this->cursor) {
          this->cursor = 0;
        }
      }
    }
    if ((((g_CurFrameInput & 0x1001) == 0) ||
        ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) ||
       (this->currentReplay[this->cursor].stage_score == (StageReplayData **)0xfffffffc)) {
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        _free(this->currentReplay);
        this->currentReplay = (ReplayData *)0x0;
        this->gameState = STATE_REPLAY_ANIM;
        this->stateTimer = 0;
        for (cur = 0; cur < 0x7a; cur = cur + 1) {
          (&this->vm1)[cur].pendingInterrupt = 4;
        }
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        this->gameState = STATE_REPLAY_ANIM;
        cur = 0;
        anmVM = &this->vm1;
        for (; cur < 0x7a; cur = cur + 1) {
          anmVM->pendingInterrupt = 0xf;
          anmVM = anmVM + 1;
        }
        this->cursor = this->chosenReplay;
      }
    }
    else {
      g_GameManager.field7_0x1c = 1;
      g_Supervisor.framerateMultiplier = 1.0;
      _strcpy(g_GameManager.replay_file,this->replayFilePaths[this->chosenReplay]);
      g_GameManager.difficulty = (uint)this->currentReplay->difficulty;
      g_GameManager.character = this->currentReplay->shottype_chara / 2;
      g_GameManager.shottype = this->currentReplay->shottype_chara % 2;
      for (cur = 0; this->currentReplay->stage_score[cur + 1] == (StageReplayData *)0x0;
          cur = cur + 1) {
      }
      g_GameManager.lives_remaining = this->currentReplay->stage_score[cur + 1]->lives_remaining;
      g_GameManager.bombs_remaining = this->currentReplay->stage_score[cur + 1]->bombs_remaining;
      _free(this->currentReplay);
      this->currentReplay = (ReplayData *)0x0;
      g_GameManager.current_stage = this->cursor;
      g_Supervisor.curState = 2;
    }
  }
LAB_00438bb2:
  __security_check_cookie(stackCookie ^ unaff_retaddr);
  return;
}

