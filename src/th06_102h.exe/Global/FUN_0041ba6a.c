
undefined4 FUN_0041ba6a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  ChainElem_0069d720.callback = FUN_0041b663;
  ChainElem_0069d720.added_callback = FUN_0041bb02;
  ChainElem_0069d720.deleted_callback = FUN_0041c1f7;
  ChainElem_0069d720.arg = &DAT_0069bca0;
  DAT_0069d6d0 = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_0069d720,4);
  if (iVar1 == 0) {
    ChainElem_0069d740.callback = FUN_0041ba4a;
    ChainElem_0069d740.added_callback = 0;
    ChainElem_0069d740.deleted_callback = 0;
    ChainElem_0069d740.arg = &DAT_0069bca0;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_0069d740,2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

