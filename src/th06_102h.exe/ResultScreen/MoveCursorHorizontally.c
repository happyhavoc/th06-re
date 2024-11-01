
ZunBool th06::ResultScreen::MoveCursorHorizontally(ResultScreen *param_1,int param_2)

{
  ZunBool ZVar1;
  
  if ((((g_CurFrameInput & 0x40) == 0) || ((g_CurFrameInput & 0x40) == (g_LastFrameInput & 0x40)))
     && (((g_CurFrameInput & 0x40) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
    if ((((g_CurFrameInput & 0x80) == 0) || ((g_CurFrameInput & 0x80) == (g_LastFrameInput & 0x80)))
       && (((g_CurFrameInput & 0x80) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
      ZVar1 = 0;
    }
    else {
      param_1->cursor = param_1->cursor + 1;
      if (param_2 <= param_1->cursor) {
        param_1->cursor = param_1->cursor - param_2;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
      ZVar1 = 1;
    }
  }
  else {
    param_1->cursor = param_1->cursor + -1;
    if (param_1->cursor < 0) {
      param_1->cursor = param_1->cursor + param_2;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
    ZVar1 = 1;
  }
  return ZVar1;
}

