
void ResultScreen::FUN_0042d0a4(ResultScreen *rs,int param_2)

{
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    rs->unk_10 = rs->unk_10 + -1;
    if (rs->unk_10 < 0) {
      rs->unk_10 = rs->unk_10 + param_2;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    rs->unk_10 = rs->unk_10 + 1;
    if (param_2 <= rs->unk_10) {
      rs->unk_10 = rs->unk_10 - param_2;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
  }
  return;
}

