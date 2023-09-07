
undefined4 __fastcall FUN_00424d38(GameContext *param_1)

{
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.unknown_1b0 != (void *)0x0) {
      FUN_004224e0(g_GameContext.unknown_1b0);
    }
  }
  else {
    if (g_GameContext.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM(&g_SoundPlayer);
  }
  return 0;
}

