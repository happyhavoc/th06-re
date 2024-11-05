
int __thiscall th06::ResultScreen::HandleReplaySaveKeyboard(ResultScreen *this)

{
  ZunResult ZVar1;
  int iVar2;
  ReplayData *pRVar3;
  ReplayData *pRVar4;
  uint unaff_retaddr;
  int local_b8;
  int local_b4;
  char replayPath [68];
  int local_60;
  char local_5c [68];
  uint local_18;
  ReplayData *local_14;
  int local_10;
  int local_c;
  AnmVm *local_8;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  iVar2 = this->resultScreenState;
  if (iVar2 == 10) {
    if (this->frameTimer == 0x3c) {
      if (g_GameManager.num_retries == 0) {
        if (g_Supervisor.framerateMultiplier < 0.99 == NAN(g_Supervisor.framerateMultiplier)) {
          local_c = 9;
        }
        else {
          local_c = 0xd;
        }
      }
      else {
        local_c = 0xc;
      }
      local_8 = &this->field19_0x150;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        local_8->pendingInterrupt = (short)local_c;
        local_8 = local_8 + 1;
      }
      if (local_c != 9) {
        this->resultScreenState = 0xb;
      }
      this->cursor = 0;
    }
    local_8 = &this->field34_0x1140;
    if (this->cursor == 0) {
      (this->field34_0x1140).color.color =
           (this->field34_0x1140).color.color & 0xff000000 | 0xff6060;
      (this->field35_0x1250).color.color =
           (this->field35_0x1250).color.color & 0xff000000 | 0x606060;
    }
    else {
      (this->field34_0x1140).color.color =
           (this->field34_0x1140).color.color & 0xff000000 | 0x606060;
      (this->field35_0x1250).color.color =
           (this->field35_0x1250).color.color & 0xff000000 | 0xff6060;
    }
    if (this->frameTimer < 0x50) goto LAB_0042d095;
    MoveCursorHorizontally(this,2);
    if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) &&
       (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
      if (((g_CurFrameInput & 0x1001) == 0) ||
         ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
      if (this->cursor == 0) goto LAB_0042c515;
    }
    this->frameTimer = 0;
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
    this->resultScreenState = 2;
    local_8 = &this->unk_40;
    for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
      local_8->pendingInterrupt = 2;
      local_8 = local_8 + 1;
    }
  }
  else {
    if (iVar2 == 0xb) {
      if ((0x13 < this->frameTimer) &&
         ((((g_CurFrameInput & 0x1001) != 0 &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
          (((g_CurFrameInput & 10) != 0 && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))))))
      {
        this->frameTimer = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        this->resultScreenState = 2;
        local_8 = &this->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          local_8->pendingInterrupt = 2;
          local_8 = local_8 + 1;
        }
      }
      goto LAB_0042d095;
    }
    if (iVar2 != 0xc) {
      if (iVar2 == 0xd) {
        if (this->frameTimer < 0x1e) goto LAB_0042d095;
        if ((((g_CurFrameInput & 0x10) != 0) &&
            ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
           (((g_CurFrameInput & 0x10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          do {
            this->possibly_selected_character = this->possibly_selected_character + -0x10;
            if (this->possibly_selected_character < 0) {
              this->possibly_selected_character = this->possibly_selected_character + 0x60;
            }
          } while (g_AlphabetList[this->possibly_selected_character] == ' ');
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        }
        if ((((g_CurFrameInput & 0x20) != 0) &&
            ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20))) ||
           (((g_CurFrameInput & 0x20) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          do {
            this->possibly_selected_character = this->possibly_selected_character + 0x10;
            if (0x5f < this->possibly_selected_character) {
              this->possibly_selected_character = this->possibly_selected_character + -0x60;
            }
          } while (g_AlphabetList[this->possibly_selected_character] == ' ');
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        }
        if ((((g_CurFrameInput & 0x40) != 0) &&
            ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40))) ||
           (((g_CurFrameInput & 0x40) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          do {
            this->possibly_selected_character = this->possibly_selected_character + -1;
            if (this->possibly_selected_character % 0x10 == 0xf) {
              this->possibly_selected_character = this->possibly_selected_character + 0x10;
            }
            if (this->possibly_selected_character < 0) {
              this->possibly_selected_character = 0xf;
            }
          } while (g_AlphabetList[this->possibly_selected_character] == ' ');
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        }
        if ((((g_CurFrameInput & 0x80) != 0) &&
            ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80))) ||
           (((g_CurFrameInput & 0x80) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          do {
            this->possibly_selected_character = this->possibly_selected_character + 1;
            if (this->possibly_selected_character % 0x10 == 0) {
              this->possibly_selected_character = this->possibly_selected_character + -0x10;
            }
          } while (g_AlphabetList[this->possibly_selected_character] == ' ');
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        }
        if ((((g_CurFrameInput & 0x1001) != 0) &&
            ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
           (((g_CurFrameInput & 0x1001) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          if (this->cursor < 8) {
            local_b4 = this->cursor;
          }
          else {
            local_b4 = 7;
          }
          local_60 = local_b4;
          if (this->possibly_selected_character < 0x5e) {
            this->replayname[local_b4] = g_AlphabetList[this->possibly_selected_character];
          }
          else if (this->possibly_selected_character == 0x5e) {
            this->replayname[local_b4] = ' ';
          }
          else {
            sprintf(replayPath,"./replay/th6_%.2d.rpy",this->field7_0x1c + 1);
            ReplayManager::SaveReplay(replayPath,this->replayname);
            this->frameTimer = 0;
            this->resultScreenState = 2;
            local_8 = &this->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              local_8->pendingInterrupt = 2;
              local_8 = local_8 + 1;
            }
          }
          if ((this->cursor < 8) && (this->cursor = this->cursor + 1, this->cursor == 8)) {
            this->possibly_selected_character = 0x5f;
          }
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        }
        if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))
           || (((g_CurFrameInput & 10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
          if (this->cursor < 8) {
            local_b8 = this->cursor;
          }
          else {
            local_b8 = 7;
          }
          if (0 < this->cursor) {
            this->cursor = this->cursor + -1;
            this->replayname[local_b8] = ' ';
          }
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        }
        if (((g_CurFrameInput & 8) == 0) || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)))
        goto LAB_0042d095;
      }
      else {
        if (iVar2 != 0xe) goto LAB_0042d095;
        local_8 = &this->field34_0x1140;
        if (this->cursor == 0) {
          (this->field34_0x1140).color.color =
               (this->field34_0x1140).color.color & 0xff000000 | 0xff6060;
          (this->field35_0x1250).color.color =
               (this->field35_0x1250).color.color & 0xff000000 | 0x606060;
        }
        else {
          (this->field34_0x1140).color.color =
               (this->field34_0x1140).color.color & 0xff000000 | 0x606060;
          (this->field35_0x1250).color.color =
               (this->field35_0x1250).color.color & 0xff000000 | 0xff6060;
        }
        if (this->frameTimer < 0x14) goto LAB_0042d095;
        MoveCursorHorizontally(this,2);
        if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10)))
           && (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
          if (((g_CurFrameInput & 0x1001) == 0) ||
             ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
          this->frameTimer = 0;
          if (this->cursor == 0) {
            local_8 = &this->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              local_8->pendingInterrupt = 0xf;
              local_8 = local_8 + 1;
            }
            local_8 = &this->field40_0x17a0 + this->field7_0x1c;
            local_8->pendingInterrupt = 0xe;
            this->resultScreenState = 0xd;
            goto LAB_0042d095;
          }
        }
      }
LAB_0042c515:
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
      this->resultScreenState = 0xc;
      local_8 = &this->unk_40;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        local_8->pendingInterrupt = 10;
        local_8 = local_8 + 1;
      }
      this->frameTimer = 0;
    }
    if (this->frameTimer == 0) {
      _mkdir("replay");
      for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
        sprintf(local_5c,"./replay/th6_%.2d.rpy",local_10 + 1);
        local_14 = (ReplayData *)FileSystem::OpenPath(local_5c,1);
        if (local_14 != (ReplayData *)0x0) {
          ZVar1 = ReplayManager::ValidateReplayData(local_14,g_LastFileSize);
          if (ZVar1 == ZUN_SUCCESS) {
            pRVar3 = local_14;
            pRVar4 = this->replays + local_10;
            for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
              pRVar4->magic = pRVar3->magic;
              pRVar3 = (ReplayData *)&pRVar3->version;
              pRVar4 = (ReplayData *)&pRVar4->version;
            }
          }
          _free(local_14);
        }
      }
    }
    if (0x13 < this->frameTimer) {
      MoveCursor(this,15);
      this->field7_0x1c = this->cursor;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        this->field7_0x1c = this->cursor;
        this->frameTimer = 0;
        strdate((this->defaultReplay).date);
        (this->defaultReplay).score = g_GameManager.score;
        if (((char  [4])this->replays[this->cursor].magic == (char  [4])0x50523654) &&
           (this->replays[this->cursor].version == 0x102)) {
          local_8 = &this->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xb;
            local_8 = local_8 + 1;
          }
          local_8 = &this->field40_0x17a0 + this->field7_0x1c;
          local_8->pendingInterrupt = 0xe;
          this->resultScreenState = 0xe;
        }
        else {
          local_8 = &this->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xf;
            local_8 = local_8 + 1;
          }
          local_8 = &this->field40_0x17a0 + this->field7_0x1c;
          local_8->pendingInterrupt = 0xe;
          this->resultScreenState = 0xd;
        }
        this->cursor = 0;
        this->possibly_selected_character = 0;
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        this->resultScreenState = 10;
        local_8 = &this->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          local_8->pendingInterrupt = 2;
          local_8 = local_8 + 1;
        }
        this->frameTimer = 0;
      }
    }
  }
LAB_0042d095:
  iVar2 = 0;
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return iVar2;
}

