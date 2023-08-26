
undefined4 FUN_00424ae4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_006c6ec8;
  if (g_GameContext.cfg.soundMode == 2) {
    if (DAT_006c6ec8 != 0) {
      FUN_004224e0();
      FUN_00422140(param_1);
      FUN_00422490(iVar1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

