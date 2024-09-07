
void th06::ResultScreen::MoveCursor(ResultScreen *rs,int length)

{
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    rs->cursor = rs->cursor + -1;
    if (rs->cursor < 0) {
      rs->cursor = rs->cursor + length;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
    rs->cursor = rs->cursor + 1;
    if (length <= rs->cursor) {
      rs->cursor = rs->cursor - length;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
  }
  return;
}

