
undefined4 FUN_00424ae4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = g_GameContext._432_4_;
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext._432_4_ != 0) {
      FUN_004224e0();
      FUN_00422140(param_1);
      FUN_00422490(uVar1);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

