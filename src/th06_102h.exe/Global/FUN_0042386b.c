
undefined4 FUN_0042386b(void)

{
  int iVar1;
  undefined4 uVar2;
  
  g_GameContext._392_4_ = 0;
  g_GameContext._396_4_ = 0xffffffff;
  g_GameContext._388_4_ = 0;
  iVar1 = FUN_0041cd40(FUN_0042333b);
  *(GameContext **)(iVar1 + 0x1c) = &g_GameContext;
  *(code **)(iVar1 + 8) = FUN_0042390a;
  *(code **)(iVar1 + 0xc) = FUN_00423ddf;
  iVar1 = FUN_0041c860(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0041cd40(FUN_00423785);
    *(GameContext **)(iVar1 + 0x1c) = &g_GameContext;
    FUN_0041c940(iVar1,0xe);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

