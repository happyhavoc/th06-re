
undefined4 Ending::RegisterChain(void)

{
  undefined4 *puVar1;
  ChainElem *pCVar2;
  int iVar3;
  undefined4 uVar4;
  ChainElem **local_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046911b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)operator_new(0x1170);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_40 = (ChainElem **)0x0;
  }
  else {
    local_40 = (ChainElem **)Ending(puVar1);
  }
  local_8 = 0xffffffff;
  pCVar2 = Chain::CreateElem(&g_Chain,OnUpdate);
  *local_40 = pCVar2;
  (*local_40)->arg = local_40;
  (*local_40)->addedCallback = AddedCallback;
  (*local_40)->deletedCallback = DeletedCallback;
  iVar3 = Chain::AddToCalcChain(&g_Chain,*local_40,3);
  if (iVar3 == 0) {
    pCVar2 = Chain::CreateElem(&g_Chain,OnDraw);
    local_40[1] = pCVar2;
    local_40[1]->arg = local_40;
    Chain::AddToDrawChain(&g_Chain,local_40[1],1);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar4;
}

