
ZunResult Supervisor::RegisterChain(void)

{
  ChainElem *pCVar1;
  int iVar2;
  ZunResult ZVar3;
  
  g_Supervisor.wantedState = 0;
  g_Supervisor.curState = -1;
  g_Supervisor.calcCount = 0;
  pCVar1 = Chain::CreateElem(&g_Chain,OnUpdate);
  pCVar1->arg = &g_Supervisor;
  pCVar1->addedCallback = AddedCallback;
  pCVar1->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,pCVar1,0);
  if (iVar2 == 0) {
    pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
    pCVar1->arg = &g_Supervisor;
    Chain::AddToDrawChain(&g_Chain,pCVar1,0xe);
    ZVar3 = ZUN_SUCCESS;
  }
  else {
    ZVar3 = ZUN_ERROR;
  }
  return ZVar3;
}

