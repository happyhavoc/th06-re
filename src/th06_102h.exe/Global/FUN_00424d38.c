
undefined4 FUN_00424d38(void)

{
  if (g_GameContext.cfg.soundMode == 2) {
    if (DAT_006c6ec8 != 0) {
      FUN_004224e0();
    }
  }
  else {
    if (g_GameContext.cfg.soundMode != 1) {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM(&SOUND_PLAYER);
  }
  return 0;
}

