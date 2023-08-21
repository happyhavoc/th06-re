
undefined4 FUN_00424d82(float param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (g_GameContext.cfg.midi_stuff == 2) {
    if (DAT_006c6ec8 != 0) {
      uVar1 = __ftol2();
      FUN_00422630(uVar1);
    }
  }
  else {
    if (g_GameContext.cfg.midi_stuff != 1) {
      return 0xffffffff;
    }
    if (NAN(*(float *)(in_ECX + 0x1a8)) == (*(float *)(in_ECX + 0x1a8) == 0.0)) {
      if (*(float *)(in_ECX + 0x1a8) <= 1.0) {
        FUN_00424e41(param_1 / *(float *)(in_ECX + 0x1a8));
      }
      else {
        FUN_00424e41(param_1);
      }
    }
    else {
      FUN_00424e41(param_1);
    }
  }
  return 0;
}

