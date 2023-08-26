
undefined4 FUN_0042386b(void)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  g_GameContext._392_4_ = 0;
  g_GameContext._396_4_ = 0xffffffff;
  g_GameContext._388_4_ = 0;
  pCVar1 = CreateChainElem(&DAT_0069d918,FUN_0042333b);
  pCVar1->arg = &g_GameContext;
  pCVar1->field3_0x8 = FUN_0042390a;
  pCVar1->field4_0xc = FUN_00423ddf;
  iVar2 = AddToCalcChain((short *)&DAT_0069d918,pCVar1,0);
  if (iVar2 == 0) {
    pCVar1 = CreateChainElem(&DAT_0069d918,FUN_00423785);
    pCVar1->arg = &g_GameContext;
    AddToDrawChain(0x69d918,pCVar1,0xe);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

