
ZunResult Ending::RegisterChain(void)

{
  Ending *this;
  ChainElem *createChain;
  int iVar1;
  ZunResult result;
  Ending *endingChainElem;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_0046911b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (Ending *)operator_new(0x1170);
  local_8 = 0;
  if (this == (Ending *)0x0) {
    endingChainElem = (Ending *)0x0;
  }
  else {
    endingChainElem = Ending(this);
  }
  local_8 = -1;
  createChain = Chain::CreateElem(&g_Chain,OnUpdate);
  *(ChainElem **)endingChainElem = createChain;
  (*(ChainElem **)endingChainElem)->arg = endingChainElem;
  (*(ChainElem **)endingChainElem)->addedCallback = AddedCallback;
  (*(ChainElem **)endingChainElem)->deletedCallback = DeletedCallback;
  iVar1 = Chain::AddToCalcChain(&g_Chain,*(ChainElem **)endingChainElem,3);
  if (iVar1 == 0) {
    createChain = Chain::CreateElem(&g_Chain,OnDraw);
    endingChainElem->chainElem = createChain;
    endingChainElem->chainElem->arg = endingChainElem;
    Chain::AddToDrawChain(&g_Chain,endingChainElem->chainElem,1);
    result = ZUN_SUCCESS;
  }
  else {
    result = ZUN_ERROR;
  }
  ExceptionList = local_10;
  return result;
}

