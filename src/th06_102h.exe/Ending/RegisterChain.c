
undefined4 Ending::RegisterChain(void)

{
  Ending *this;
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  ChainElem **local_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046911b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (Ending *)operator_new(0x1170);
  local_8 = 0;
  if (this == (Ending *)0x0) {
    local_40 = (ChainElem **)0x0;
  }
  else {
    local_40 = (ChainElem **)Ending(this);
  }
  local_8 = 0xffffffff;
  pCVar1 = Chain::CreateElem(&g_Chain,OnUpdate);
  *local_40 = pCVar1;
  (*local_40)->arg = local_40;
  (*local_40)->addedCallback = AddedCallback;
  (*local_40)->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,*local_40,3);
  if (iVar2 == 0) {
    pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
    local_40[1] = pCVar1;
    local_40[1]->arg = local_40;
    Chain::AddToDrawChain(&g_Chain,local_40[1],1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar3;
}

