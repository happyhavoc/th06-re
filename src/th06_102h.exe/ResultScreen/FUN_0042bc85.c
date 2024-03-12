
undefined4 __fastcall ResultScreen::FUN_0042bc85(ResultScreen *rs)

{
  Hscr *out;
  int local_20;
  int local_1c;
  AnmVm *local_c;
  int local_8;
  
  if (rs->field1_0x4 == 0) {
    *(uint *)&rs->field15_0x24 = (uint)g_GameManager.character;
    *(uint *)&rs->field20_0x2c = g_GameManager.difficulty;
    local_c = &rs->unk_40;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      local_c->pendingInterrupt = (short)*(undefined4 *)&rs->field20_0x2c + 3;
      local_c = local_c + 1;
    }
    FUN_00434e20(g_AnmManager,&rs->unk_28a0,0xffffff,0,
                 (&g_CharacterList)[*(int *)&rs->field15_0x24 * 2]);
    if (g_GameManager.shottype != 0) {
      (rs->unk_28a0).color.color = 0x80ffffff;
    }
    FUN_00434e20(g_AnmManager,&rs->field79_0x29b0,0xffffff,0,
                 (&PTR_Hakurei_Reimu__Dream__004784dc)[*(int *)&rs->field15_0x24 * 2]);
    if (g_GameManager.shottype != 1) {
      (rs->field79_0x29b0).color.color = 0x80ffffff;
    }
    (rs->hscr).character = g_GameManager.shottype + (char)*(undefined4 *)&rs->field15_0x24 * '\x02';
    (rs->hscr).difficulty = rs->field20_0x2c;
    (rs->hscr).score = g_GameManager.score;
    (rs->hscr).base.version_ = '\x10';
    (rs->hscr).base.magic = 0x52435348;
    if (g_GameManager.unk_1822 == 0) {
      (rs->hscr).stage = (byte)g_GameManager.current_stage;
    }
    else {
      (rs->hscr).stage = 99;
    }
    (rs->hscr).base.field_0x9 = 1;
    _strcpy((rs->hscr).name,"        ");
    out = &rs->hscr;
    FUN_0042bc2d(rs,out,*(int *)&rs->field20_0x2c,
                 (uint)g_GameManager.shottype + *(int *)&rs->field15_0x24 * 2);
    if (9 < (int)out) goto LAB_0042c273;
    rs->unk_10 = 0;
    _strcpy(&rs->field_0x34,"");
  }
  if (rs->field1_0x4 < 0x1e) {
    return 0;
  }
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (DAT_0069d90c != 0)))) {
    do {
      rs->possibly_selected_character = rs->possibly_selected_character + -0x10;
      if (rs->possibly_selected_character < 0) {
        rs->possibly_selected_character = rs->possibly_selected_character + 0x60;
      }
    } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (DAT_0069d90c != 0)))) {
    do {
      rs->possibly_selected_character = rs->possibly_selected_character + 0x10;
      if (0x5f < rs->possibly_selected_character) {
        rs->possibly_selected_character = rs->possibly_selected_character + -0x60;
      }
    } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
     || (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
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
  if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
     || (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
    do {
      rs->possibly_selected_character = rs->possibly_selected_character + 1;
      if (rs->possibly_selected_character % 0x10 == 0) {
        rs->possibly_selected_character = rs->possibly_selected_character + -0x10;
      }
    } while (g_AlphabetList[rs->possibly_selected_character] == ' ');
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x1001) == 0) ||
      ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) &&
     (((g_CurFrameInput & 0x1001) == 0 || (DAT_0069d90c == 0)))) {
LAB_0042c1aa:
    if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) ||
       (((g_CurFrameInput & 10) != 0 && (DAT_0069d90c != 0)))) {
      if (rs->unk_10 < 8) {
        local_20 = rs->unk_10;
      }
      else {
        local_20 = 7;
      }
      if (0 < rs->unk_10) {
        rs->unk_10 = rs->unk_10 + -1;
        (rs->hscr).name[local_20] = ' ';
      }
      SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
    }
    if ((g_CurFrameInput & 8) == 0) {
      return 0;
    }
    if ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)) {
      return 0;
    }
  }
  else {
    if (rs->unk_10 < 8) {
      local_1c = rs->unk_10;
    }
    else {
      local_1c = 7;
    }
    if (rs->possibly_selected_character < 0x5e) {
      (rs->hscr).name[local_1c] = g_AlphabetList[rs->possibly_selected_character];
LAB_0042c173:
      if ((rs->unk_10 < 8) && (rs->unk_10 = rs->unk_10 + 1, rs->unk_10 == 8)) {
        rs->possibly_selected_character = 0x5f;
      }
      SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,10);
      goto LAB_0042c1aa;
    }
    if (rs->possibly_selected_character == 0x5e) {
      (rs->hscr).name[local_1c] = ' ';
      goto LAB_0042c173;
    }
  }
  SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xb);
LAB_0042c273:
  rs->unk_8 = 0xf;
  rs->field1_0x4 = 0;
  local_c = &rs->unk_40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    local_c->pendingInterrupt = 2;
    local_c = local_c + 1;
  }
  _strcpy(&rs->field_0x34,(rs->hscr).name);
  return 0;
}

