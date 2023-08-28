
undefined4 FUN_00424b2f(void)

{
  undefined4 uVar1;
  
  if ((g_GameContext.cfg.musicMode == MIDI) || (g_GameContext.cfg.musicMode == WAV)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

