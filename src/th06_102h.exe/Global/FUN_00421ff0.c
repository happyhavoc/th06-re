
undefined4 __thiscall FUN_00421ff0(int param_1_00,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if (g_GameContext.cfg.sound_mode == 2) {
    FUN_004224e0();
    FUN_00422070(param_2);
    pbVar2 = OpenPath(param_3,0);
    *(byte **)(param_1_00 + 0x94 + param_2 * 4) = pbVar2;
    if (*(int *)(param_1_00 + 0x94 + param_2 * 4) == 0) {
      GameErrorContextLog(&g_GameErrorContext,"error : MIDI File が読み込めない %s \n",
                          param_3);
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

