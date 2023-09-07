
undefined4 FUN_00424aac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.unknown_1b0 != (void *)0x0) {
      FUN_00421ff0((int)g_GameContext.unknown_1b0,param_1,param_2);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

