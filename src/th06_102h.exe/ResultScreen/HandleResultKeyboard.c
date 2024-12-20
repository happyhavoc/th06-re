
int __thiscall th06::ResultScreen::HandleResultKeyboard(ResultScreen *this)

{
  int iVar1;
  int local_20;
  int local_1c;
  AnmVm *local_c;
  int local_8;
  
  if (this->frameTimer == 0) {
    this->charUsed = (uint)g_GameManager.character;
    this->diffPlayed = g_GameManager.difficulty;
    local_c = &this->unk_40;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      local_c->pendingInterrupt = (short)this->diffPlayed + 3;
      local_c = local_c + 1;
    }
    AnmManager::DrawStringFormat2
              (g_AnmManager,&this->unk_28a0,(ZunColor)0xffffff,(ZunColor)0x0,
               (&g_CharacterList)[this->charUsed * 2]);
    if (g_GameManager.shottype != 0) {
      (this->unk_28a0).color.color = 0x80ffffff;
    }
    AnmManager::DrawStringFormat2
              (g_AnmManager,&this->field57_0x29b0,(ZunColor)0xffffff,(ZunColor)0x0,
               (&PTR_Hakurei_Reimu__Dream__004784dc)[this->charUsed * 2]);
    if (g_GameManager.shottype != 1) {
      (this->field57_0x29b0).color.color = 0x80ffffff;
    }
    (this->hscr).character = g_GameManager.shottype + (char)this->charUsed * '\x02';
    (this->hscr).difficulty = *(byte *)&this->diffPlayed;
    (this->hscr).score = g_GameManager.score;
    (this->hscr).base.version_ = '\x10';
    (this->hscr).base.magic = (uint)(char  [4])0x52435348;
    if (g_GameManager.is_game_completed == 0) {
      (this->hscr).stage = (byte)g_GameManager.current_stage;
    }
    else {
      (this->hscr).stage = 99;
    }
    (this->hscr).base.field_0x9 = 1;
    _strcpy((this->hscr).name,"        ");
    iVar1 = LinkScoreEx(this,&this->hscr,this->diffPlayed,
                        (uint)g_GameManager.shottype + this->charUsed * 2);
    if (9 < iVar1) goto LAB_0042c273;
    this->cursor = 0;
    _strcpy(this->replayname,"");
  }
  if (this->frameTimer < 0x1e) {
    return 0;
  }
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    do {
      this->possibly_selected_character = this->possibly_selected_character + -0x10;
      if (this->possibly_selected_character < 0) {
        this->possibly_selected_character = this->possibly_selected_character + 0x60;
      }
    } while (g_AlphabetList[this->possibly_selected_character] == ' ');
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    do {
      this->possibly_selected_character = this->possibly_selected_character + 0x10;
      if (0x5f < this->possibly_selected_character) {
        this->possibly_selected_character = this->possibly_selected_character + -0x60;
      }
    } while (g_AlphabetList[this->possibly_selected_character] == ' ');
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
  }
  if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
     || (((g_CurFrameInput & 0x40) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
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
  if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
     || (((g_CurFrameInput & 0x80) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    do {
      this->possibly_selected_character = this->possibly_selected_character + 1;
      if (this->possibly_selected_character % 0x10 == 0) {
        this->possibly_selected_character = this->possibly_selected_character + -0x10;
      }
    } while (g_AlphabetList[this->possibly_selected_character] == ' ');
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
  }
  if ((((g_CurFrameInput & 0x1001) == 0) ||
      ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) &&
     (((g_CurFrameInput & 0x1001) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
LAB_0042c1aa:
    if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) ||
       (((g_CurFrameInput & 10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
      if (this->cursor < 8) {
        local_20 = this->cursor;
      }
      else {
        local_20 = 7;
      }
      if (0 < this->cursor) {
        this->cursor = this->cursor + -1;
        (this->hscr).name[local_20] = ' ';
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
    }
    if ((g_CurFrameInput & 8) == 0) {
      return 0;
    }
    if ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)) {
      return 0;
    }
  }
  else {
    if (this->cursor < 8) {
      local_1c = this->cursor;
    }
    else {
      local_1c = 7;
    }
    if (this->possibly_selected_character < 0x5e) {
      (this->hscr).name[local_1c] = g_AlphabetList[this->possibly_selected_character];
LAB_0042c173:
      if ((this->cursor < 8) && (this->cursor = this->cursor + 1, this->cursor == 8)) {
        this->possibly_selected_character = 0x5f;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
      goto LAB_0042c1aa;
    }
    if (this->possibly_selected_character == 0x5e) {
      (this->hscr).name[local_1c] = ' ';
      goto LAB_0042c173;
    }
  }
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
LAB_0042c273:
  this->resultScreenState = 0xf;
  this->frameTimer = 0;
  local_c = &this->unk_40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    local_c->pendingInterrupt = 2;
    local_c = local_c + 1;
  }
  _strcpy(this->replayname,(this->hscr).name);
  return 0;
}

