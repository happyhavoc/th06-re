
undefined4 FUN_00421ff0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (g_GameContext.cfg._27_1_ == '\x02') {
    FUN_004224e0();
    FUN_00422070(param_1);
    uVar1 = FUN_0041e290(param_2,0);
    *(undefined4 *)(in_ECX + 0x94 + param_1 * 4) = uVar1;
    if (*(int *)(in_ECX + 0x94 + param_1 * 4) == 0) {
      GameErrorContextLog(&g_GameErrorContext,"error : MIDI File が読み込めない %s \n",
                          param_2);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

