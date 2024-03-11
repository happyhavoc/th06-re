
ZunResult isMusicMutedWtf(void)

{
  ZunResult isMuted;
  
  if ((g_Supervisor.cfg.musicMode == MIDI) || (g_Supervisor.cfg.musicMode == WAV)) {
    isMuted = ZUN_SUCCESS;
  }
  else {
    isMuted = ZUN_ERROR;
  }
  return isMuted;
}

