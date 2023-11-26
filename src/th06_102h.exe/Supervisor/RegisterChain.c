
undefined4 Supervisor::RegisterChain(void)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  g_Supervisor.wantedState = 0;
  g_Supervisor.curState = -1;
  g_Supervisor.calcCount = 0;
  pCVar1 = ChainElem::Allocate(CalcCallback);
  pCVar1->arg = &g_Supervisor;
  pCVar1->addedCallback = AddedCallback;
  pCVar1->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,pCVar1,0);
  if (iVar2 == 0) {
    pCVar1 = ChainElem::Allocate(DrawCallback);
    pCVar1->arg = &g_Supervisor;
    Chain::AddToDrawChain(&g_Chain,pCVar1,0xe);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

