
undefined4 FUN_00423da0(int param_1)

{
  int iVar1;
  
  if ((g_GameContext._20_4_ == 0) &&
     (iVar1 = (**(code **)(*(int *)g_GameContext._12_4_ + 0xc))
                        (g_GameContext._12_4_,param_1 + 4,0x6c6d2c,0), iVar1 < 0)) {
    return 1;
  }
  return 0;
}

