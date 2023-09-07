
undefined4 FUN_00424ae4(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = g_GameContext.unknown_1b0;
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.unknown_1b0 != (void *)0x0) {
      FUN_004224e0(g_GameContext.unknown_1b0);
      FUN_00422140((int)pvVar1,param_1);
      FUN_00422490((int)pvVar1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

