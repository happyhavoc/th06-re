
void __thiscall th06::ResultScreen::FUN_0042c2d4(ResultScreen *this)

{
  ZunResult ZVar1;
  int iVar2;
  ReplayData *pRVar3;
  char **ppcVar4;
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
  iVar2 = this->unk_8;
  if (iVar2 == 10) {
    if (this->field1_0x4 == 0x3c) {
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
      local_8 = &this->field35_0x150;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        local_8->pendingInterrupt = (short)local_c;
        local_8 = local_8 + 1;
      }
      if (local_c != 9) {
        this->unk_8 = 0xb;
      }
      this->cursor = 0;
    }
    local_8 = &this->field50_0x1140;
    if (this->cursor == 0) {
      (this->field50_0x1140).color.color =
           (this->field50_0x1140).color.color & 0xff000000 | 0xff6060;
      (this->field51_0x1250).color.color =
           (this->field51_0x1250).color.color & 0xff000000 | 0x606060;
    }
    else {
      (this->field50_0x1140).color.color =
           (this->field50_0x1140).color.color & 0xff000000 | 0x606060;
      (this->field51_0x1250).color.color =
           (this->field51_0x1250).color.color & 0xff000000 | 0xff6060;
    }
    if (this->field1_0x4 < 0x50) goto LAB_0042d095;
    MoveCursor_2((ResultScreen *)local_8,this,2);
    if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) &&
       (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
      if (((g_CurFrameInput & 0x1001) == 0) ||
         ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
      if (this->cursor == 0) goto LAB_0042c515;
    }
    this->field1_0x4 = 0;
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
    this->unk_8 = 2;
    local_8 = &this->unk_40;
    for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
      *(undefined2 *)((int)&local_8->matrix + 0x4a) = 2;
      local_8 = (AnmVm *)((int)&local_8->matrix + 0xd0);
    }
  }
  else {
    if (iVar2 == 0xb) {
      if ((0x13 < this->field1_0x4) &&
         ((((g_CurFrameInput & 0x1001) != 0 &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
          (((g_CurFrameInput & 10) != 0 && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))))))
      {
        this->field1_0x4 = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        this->unk_8 = 2;
        local_8 = &this->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          *(undefined2 *)((int)&local_8->matrix + 0x4a) = 2;
          local_8 = (AnmVm *)((int)&local_8->matrix + 0xd0);
        }
      }
      goto LAB_0042d095;
    }
    if (iVar2 != 0xc) {
      if (iVar2 == 0xd) {
        if (this->field1_0x4 < 0x1e) goto LAB_0042d095;
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
            (&this->field_0x34)[local_b4] = g_AlphabetList[this->possibly_selected_character];
          }
          else if (this->possibly_selected_character == 0x5e) {
            (&this->field_0x34)[local_b4] = 0x20;
          }
          else {
            sprintf(replayPath,"./replay/th6_%.2d.rpy",*(int *)&this->field_0x1c + 1);
            SaveReplay(replayPath,&this->field_0x34);
            this->field1_0x4 = 0;
            this->unk_8 = 2;
            local_8 = &this->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              *(undefined2 *)((int)&local_8->matrix + 0x4a) = 2;
              local_8 = (AnmVm *)((int)&local_8->matrix + 0xd0);
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
            (&this->field_0x34)[local_b8] = 0x20;
          }
          SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        }
        if (((g_CurFrameInput & 8) == 0) || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)))
        goto LAB_0042d095;
      }
      else {
        if (iVar2 != 0xe) goto LAB_0042d095;
        local_8 = &this->field50_0x1140;
        if (this->cursor == 0) {
          (this->field50_0x1140).color.color =
               (this->field50_0x1140).color.color & 0xff000000 | 0xff6060;
          (this->field51_0x1250).color.color =
               (this->field51_0x1250).color.color & 0xff000000 | 0x606060;
        }
        else {
          (this->field50_0x1140).color.color =
               (this->field50_0x1140).color.color & 0xff000000 | 0x606060;
          (this->field51_0x1250).color.color =
               (this->field51_0x1250).color.color & 0xff000000 | 0xff6060;
        }
        if (this->field1_0x4 < 0x14) goto LAB_0042d095;
        MoveCursor_2((ResultScreen *)local_8,this,2);
        if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10)))
           && (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
          if (((g_CurFrameInput & 0x1001) == 0) ||
             ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
          this->field1_0x4 = 0;
          if (this->cursor == 0) {
            local_8 = &this->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              local_8->pendingInterrupt = 0xf;
              local_8 = local_8 + 1;
            }
            local_8 = &this->field56_0x17a0 + *(int *)&this->field_0x1c;
            *(undefined2 *)((int)&local_8->matrix + 0x4a) = 0xe;
            this->unk_8 = 0xd;
            goto LAB_0042d095;
          }
        }
      }
LAB_0042c515:
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
      this->unk_8 = 0xc;
      local_8 = &this->unk_40;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        *(undefined2 *)((int)&local_8->matrix + 0x4a) = 10;
        local_8 = (AnmVm *)((int)&local_8->matrix + 0xd0);
      }
      this->field1_0x4 = 0;
    }
    if (this->field1_0x4 == 0) {
      FileSystem::CreateDirectoryInCWD("replay");
      for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
        sprintf(local_5c,"./replay/th6_%.2d.rpy",local_10 + 1);
        local_14 = (ReplayData *)FileSystem::OpenPath(local_5c,1);
        if (local_14 != (ReplayData *)0x0) {
          ZVar1 = ValidateReplayData(local_14,g_LastFileSize);
          if (ZVar1 == ZUN_SUCCESS) {
            pRVar3 = local_14;
            ppcVar4 = (char **)((int)&this->hscr + local_10 * 0x50 + 0x30);
            for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
              *ppcVar4 = pRVar3->magic;
              pRVar3 = (ReplayData *)&pRVar3->version;
              ppcVar4 = ppcVar4 + 1;
            }
          }
          _free(local_14);
        }
      }
    }
    if (0x13 < this->field1_0x4) {
      MoveCursor(this,15);
      *(int *)&this->field_0x1c = this->cursor;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        *(int *)&this->field_0x1c = this->cursor;
        this->field1_0x4 = 0;
        setDate(this->date);
        this->score = g_GameManager.score;
        if ((*(char (*) [4])((int)&this->hscr + this->cursor * 0x50 + 0x30) == (char  [4])0x50523654
            ) && (*(short *)((int)&this->hscr + this->cursor * 0x50 + 0x34) == 0x102)) {
          local_8 = &this->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xb;
            local_8 = local_8 + 1;
          }
          local_8 = &this->field56_0x17a0 + *(int *)&this->field_0x1c;
          *(undefined2 *)((int)&local_8->matrix + 0x4a) = 0xe;
          this->unk_8 = 0xe;
        }
        else {
          local_8 = &this->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xf;
            local_8 = local_8 + 1;
          }
          local_8 = &this->field56_0x17a0 + *(int *)&this->field_0x1c;
          *(undefined2 *)((int)&local_8->matrix + 0x4a) = 0xe;
          this->unk_8 = 0xd;
        }
        this->cursor = 0;
        this->possibly_selected_character = 0;
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        this->unk_8 = 10;
        local_8 = &this->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          *(undefined2 *)((int)&local_8->matrix + 0x4a) = 2;
          local_8 = (AnmVm *)((int)&local_8->matrix + 0xd0);
        }
        this->field1_0x4 = 0;
      }
    }
  }
LAB_0042d095:
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return;
}

