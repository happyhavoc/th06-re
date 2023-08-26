
undefined4 FUN_00424d82(float param_1)

{
  long lVar1;
  int in_ECX;
  
  if (g_GameContext.cfg.soundMode == 2) {
    if (DAT_006c6ec8 != 0) {
      lVar1 = __ftol2((double)(param_1 * 1000.0));
      FUN_00422630(lVar1);
    }
  }
  else {
    if (g_GameContext.cfg.soundMode != 1) {
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

