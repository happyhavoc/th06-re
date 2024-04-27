
undefined4 __thiscall
ResultScreen::FUN_0042d18f(ResultScreen *this,ResultScreen *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((g_CurFrameInput & 0x40) == 0) || ((g_CurFrameInput & 0x40) == (g_LastFrameInput & 0x40)))
     && (((g_CurFrameInput & 0x40) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
    if ((((g_CurFrameInput & 0x80) == 0) || ((g_CurFrameInput & 0x80) == (g_LastFrameInput & 0x80)))
       && (((g_CurFrameInput & 0x80) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
      uVar1 = 0;
    }
    else {
      param_1->unk_10 = param_1->unk_10 + 1;
      if (param_2 <= param_1->unk_10) {
        param_1->unk_10 = param_1->unk_10 - param_2;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
      uVar1 = 1;
    }
  }
  else {
    param_1->unk_10 = param_1->unk_10 + -1;
    if (param_1->unk_10 < 0) {
      param_1->unk_10 = param_1->unk_10 + param_2;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
    uVar1 = 1;
  }
  return uVar1;
}

