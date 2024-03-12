
void __fastcall FUN_0042c2d4(ResultScreen *rs)

{
  ZunResult ZVar1;
  int iVar2;
  ReplayData *pRVar3;
  char **ppcVar4;
  uint unaff_retaddr;
  int local_b8;
  int local_b4;
  char local_a4 [68];
  int local_60;
  char local_5c [68];
  uint local_18;
  ReplayData *local_14;
  int local_10;
  int local_c;
  AnmVm *local_8;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  iVar2 = rs->unk_8;
  if (iVar2 == 10) {
    if (rs->field1_0x4 == 0x3c) {
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
      local_8 = &rs->field41_0x150;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        local_8->pendingInterrupt = (short)local_c;
        local_8 = local_8 + 1;
      }
      if (local_c != 9) {
        rs->unk_8 = 0xb;
      }
      rs->unk_10 = 0;
    }
    local_8 = &rs->field56_0x1140;
    if (rs->unk_10 == 0) {
      (rs->field56_0x1140).color.color = (rs->field56_0x1140).color.color & 0xff000000 | 0xff6060;
      (rs->field57_0x1250).color.color = (rs->field57_0x1250).color.color & 0xff000000 | 0x606060;
    }
    else {
      (rs->field56_0x1140).color.color = (rs->field56_0x1140).color.color & 0xff000000 | 0x606060;
      (rs->field57_0x1250).color.color = (rs->field57_0x1250).color.color & 0xff000000 | 0xff6060;
    }
    if (rs->field1_0x4 < 0x50) goto LAB_0042d095;
    FUN_0042d18f(rs,2);
    if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) &&
       (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
      if (((g_CurFrameInput & 0x1001) == 0) ||
         ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
      if (rs->unk_10 == 0) goto LAB_0042c515;
    }
    rs->field1_0x4 = 0;
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
    rs->unk_8 = 2;
    local_8 = &rs->unk_40;
    for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
      local_8->pendingInterrupt = 2;
      local_8 = local_8 + 1;
    }
  }
  else {
    if (iVar2 == 0xb) {
      if ((0x13 < rs->field1_0x4) &&
         ((((g_CurFrameInput & 0x1001) != 0 &&
           ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
          (((g_CurFrameInput & 10) != 0 && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))))))
      {
        rs->field1_0x4 = 0;
        SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
        rs->unk_8 = 2;
        local_8 = &rs->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          local_8->pendingInterrupt = 2;
          local_8 = local_8 + 1;
        }
      }
      goto LAB_0042d095;
    }
    if (iVar2 != 0xc) {
      if (iVar2 == 0xd) {
        if (rs->field1_0x4 < 0x1e) goto LAB_0042d095;
        if ((((g_CurFrameInput & 0x10) != 0) &&
            ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) ||
           (((g_CurFrameInput & 0x10) != 0 && (DAT_0069d90c != 0)))) {
          do {
            rs->possibly_selected_character = rs->possibly_selected_character + -0x10;
            if (rs->possibly_selected_character < 0) {
              rs->possibly_selected_character = rs->possibly_selected_character + 0x60;
            }
          } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
        }
        if ((((g_CurFrameInput & 0x20) != 0) &&
            ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20))) ||
           (((g_CurFrameInput & 0x20) != 0 && (DAT_0069d90c != 0)))) {
          do {
            rs->possibly_selected_character = rs->possibly_selected_character + 0x10;
            if (0x5f < rs->possibly_selected_character) {
              rs->possibly_selected_character = rs->possibly_selected_character + -0x60;
            }
          } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
        }
        if ((((g_CurFrameInput & 0x40) != 0) &&
            ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40))) ||
           (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
          do {
            rs->possibly_selected_character = rs->possibly_selected_character + -1;
            if (rs->possibly_selected_character % 0x10 == 0xf) {
              rs->possibly_selected_character = rs->possibly_selected_character + 0x10;
            }
            if (rs->possibly_selected_character < 0) {
              rs->possibly_selected_character = 0xf;
            }
          } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
        }
        if ((((g_CurFrameInput & 0x80) != 0) &&
            ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80))) ||
           (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
          do {
            rs->possibly_selected_character = rs->possibly_selected_character + 1;
            if (rs->possibly_selected_character % 0x10 == 0) {
              rs->possibly_selected_character = rs->possibly_selected_character + -0x10;
            }
          } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
        }
        if ((((g_CurFrameInput & 0x1001) != 0) &&
            ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) ||
           (((g_CurFrameInput & 0x1001) != 0 && (DAT_0069d90c != 0)))) {
          if (rs->unk_10 < 8) {
            local_b4 = rs->unk_10;
          }
          else {
            local_b4 = 7;
          }
          local_60 = local_b4;
          if (rs->possibly_selected_character < 0x5e) {
            (&rs->field_0x34)[local_b4] = g_AlphabetList[rs->possibly_selected_character];
          }
          else if (rs->possibly_selected_character == 0x5e) {
            (&rs->field_0x34)[local_b4] = 0x20;
          }
          else {
            sprintf(local_a4,"./replay/th6_%.2d.rpy",*(int *)&rs->field_0x1c + 1);
            FUN_0042ab30(local_a4,&rs->field_0x34);
            rs->field1_0x4 = 0;
            rs->unk_8 = 2;
            local_8 = &rs->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              local_8->pendingInterrupt = 2;
              local_8 = local_8 + 1;
            }
          }
          if ((rs->unk_10 < 8) && (rs->unk_10 = rs->unk_10 + 1, rs->unk_10 == 8)) {
            rs->possibly_selected_character = 0x5f;
          }
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,10);
        }
        if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10)))
           || (((g_CurFrameInput & 10) != 0 && (DAT_0069d90c != 0)))) {
          if (rs->unk_10 < 8) {
            local_b8 = rs->unk_10;
          }
          else {
            local_b8 = 7;
          }
          if (0 < rs->unk_10) {
            rs->unk_10 = rs->unk_10 + -1;
            (&rs->field_0x34)[local_b8] = 0x20;
          }
          SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
        }
        if (((g_CurFrameInput & 8) == 0) || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)))
        goto LAB_0042d095;
      }
      else {
        if (iVar2 != 0xe) goto LAB_0042d095;
        local_8 = &rs->field56_0x1140;
        if (rs->unk_10 == 0) {
          (rs->field56_0x1140).color.color =
               (rs->field56_0x1140).color.color & 0xff000000 | 0xff6060;
          (rs->field57_0x1250).color.color =
               (rs->field57_0x1250).color.color & 0xff000000 | 0x606060;
        }
        else {
          (rs->field56_0x1140).color.color =
               (rs->field56_0x1140).color.color & 0xff000000 | 0x606060;
          (rs->field57_0x1250).color.color =
               (rs->field57_0x1250).color.color & 0xff000000 | 0xff6060;
        }
        if (rs->field1_0x4 < 0x14) goto LAB_0042d095;
        FUN_0042d18f(rs,2);
        if ((((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10)))
           && (((g_CurFrameInput & 8) == 0 || ((g_CurFrameInput & 8) == (g_LastFrameInput & 8))))) {
          if (((g_CurFrameInput & 0x1001) == 0) ||
             ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) goto LAB_0042d095;
          rs->field1_0x4 = 0;
          if (rs->unk_10 == 0) {
            local_8 = &rs->unk_40;
            for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
              local_8->pendingInterrupt = 0xf;
              local_8 = local_8 + 1;
            }
            local_8 = &rs->field62_0x17a0 + *(int *)&rs->field_0x1c;
            local_8->pendingInterrupt = 0xe;
            rs->unk_8 = 0xd;
            goto LAB_0042d095;
          }
        }
      }
LAB_0042c515:
      SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,10);
      rs->unk_8 = 0xc;
      local_8 = &rs->unk_40;
      for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
        local_8->pendingInterrupt = 10;
        local_8 = local_8 + 1;
      }
      rs->field1_0x4 = 0;
    }
    if (rs->field1_0x4 == 0) {
      createDirectoryInCWD("replay");
      for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
        sprintf(local_5c,"./replay/th6_%.2d.rpy",local_10 + 1);
        local_14 = (ReplayData *)FileSystem::OpenPath(local_5c,1);
        if (local_14 != (ReplayData *)0x0) {
          ZVar1 = validateReplayData(local_14,g_LastFileSize);
          if (ZVar1 == ZUN_SUCCESS) {
            pRVar3 = local_14;
            ppcVar4 = (char **)((int)&rs->hscr + local_10 * 0x50 + 0x30);
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
    if (0x13 < rs->field1_0x4) {
      ResultScreen::FUN_0042d0a4(rs,15);
      *(int *)&rs->field_0x1c = rs->unk_10;
      if (((g_CurFrameInput & 0x1001) != 0) &&
         ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
        SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,10);
        *(int *)&rs->field_0x1c = rs->unk_10;
        rs->field1_0x4 = 0;
        FUN_0045d414(&rs->field_0x5670);
        *(uint *)&rs->field_0x5684 = g_GameManager.score;
        if ((*(char (*) [4])((int)&rs->hscr + rs->unk_10 * 0x50 + 0x30) == (char  [4])0x50523654) &&
           (*(short *)((int)&rs->hscr + rs->unk_10 * 0x50 + 0x34) == 0x102)) {
          local_8 = &rs->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xb;
            local_8 = local_8 + 1;
          }
          local_8 = &rs->field62_0x17a0 + *(int *)&rs->field_0x1c;
          local_8->pendingInterrupt = 0xe;
          rs->unk_8 = 0xe;
        }
        else {
          local_8 = &rs->unk_40;
          for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
            local_8->pendingInterrupt = 0xf;
            local_8 = local_8 + 1;
          }
          local_8 = &rs->field62_0x17a0 + *(int *)&rs->field_0x1c;
          local_8->pendingInterrupt = 0xe;
          rs->unk_8 = 0xd;
        }
        rs->unk_10 = 0;
        rs->possibly_selected_character = 0;
      }
      if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
        SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
        rs->unk_8 = 10;
        local_8 = &rs->unk_40;
        for (local_10 = 0; local_10 < 0x26; local_10 = local_10 + 1) {
          local_8->pendingInterrupt = 2;
          local_8 = local_8 + 1;
        }
        rs->field1_0x4 = 0;
      }
    }
  }
LAB_0042d095:
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return;
}

