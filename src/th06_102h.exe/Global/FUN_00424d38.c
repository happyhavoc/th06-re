
undefined4 FUN_00424d38(void)

{
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext._432_4_ != 0) {
      FUN_004224e0();
    }
  }
  else {
    if (g_GameContext.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM(&SOUND_PLAYER);
  }
  return 0;
}

