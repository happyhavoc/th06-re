
undefined4 isMusicMutedWtf(void)

{
  undefined4 uVar1;
  
  if ((g_Supervisor.cfg.musicMode == MIDI) || (g_Supervisor.cfg.musicMode == WAV)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
