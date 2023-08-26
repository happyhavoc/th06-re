
undefined4 FUN_00424aac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (g_GameContext.cfg.sound_mode == 2) {
    if (DAT_006c6ec8 != 0) {
      FUN_00421ff0(DAT_006c6ec8,param_1,param_2);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

