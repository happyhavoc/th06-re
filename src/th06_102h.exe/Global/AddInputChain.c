
undefined4 AddInputChain(void)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  g_GameContext.unkInput1 = 0;
  g_GameContext.unkInput2 = -1;
  g_GameContext.unkInput3 = 0;
  pCVar1 = ChainElem::Allocate(InputChainCallback);
  pCVar1->arg = &g_GameContext;
  pCVar1->added_callback = InputChainAddedCallback;
  pCVar1->deleted_callback = InputChainRemovedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,pCVar1,0);
  if (iVar2 == 0) {
    pCVar1 = ChainElem::Allocate(FUN_00423785);
    pCVar1->arg = &g_GameContext;
    Chain::AddToDrawChain(&g_Chain,pCVar1,0xe);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

