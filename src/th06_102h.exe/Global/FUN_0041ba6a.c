
undefined4 FUN_0041ba6a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  ChainElem_0069d720.callback = FUN_0041b663;
  ChainElem_0069d720.addedCallback = FUN_0041bb02;
  ChainElem_0069d720.deletedCallback = FUN_0041c1f7;
  ChainElem_0069d720.arg = &g_GameManager;
  g_GameManager.field36_0x1a2e._2_4_ = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_0069d720,4);
  if (iVar1 == 0) {
    ChainElem_0069d740.callback = FUN_0041ba4a;
    ChainElem_0069d740.addedCallback = 0;
    ChainElem_0069d740.deletedCallback = 0;
    ChainElem_0069d740.arg = &g_GameManager;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_0069d740,2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

