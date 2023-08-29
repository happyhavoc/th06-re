
void __thiscall Chain::ReleaseSingleChain(Chain *this,ChainElem *root)

{
  ChainElem *allocatedChainElem;
  ChainElem *local_60;
  ChainElem *allocatedChainElem2;
  ChainElem newRootElem;
  ChainElem *local_1c;
  ChainElem *local_18;
  ChainElem *curElem;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046917e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ChainElem::Init(&newRootElem);
  local_8 = 0;
  allocatedChainElem = (ChainElem *)operator_new(0x20);
  local_8._0_1_ = 1;
  if (allocatedChainElem == (ChainElem *)0x0) {
    allocatedChainElem2 = (ChainElem *)0x0;
  }
  else {
    allocatedChainElem2 = ChainElem::Init(allocatedChainElem);
  }
  local_1c = allocatedChainElem2;
  newRootElem.next = allocatedChainElem2;
  for (curElem = root; local_8._0_1_ = 0, curElem != (ChainElem *)0x0; curElem = curElem->next) {
    local_1c->unkPtr = curElem;
    allocatedChainElem = (ChainElem *)operator_new(0x20);
    local_8._0_1_ = 2;
    if (allocatedChainElem == (ChainElem *)0x0) {
      local_60 = (ChainElem *)0x0;
    }
    else {
      local_60 = ChainElem::Init(allocatedChainElem);
    }
    local_1c->next = local_60;
    local_1c = local_1c->next;
  }
  for (curElem = &newRootElem; curElem != (ChainElem *)0x0; curElem = curElem->next) {
    CutChain(this,curElem->unkPtr);
  }
  local_1c = newRootElem.next;
  while (allocatedChainElem = local_1c, local_1c != (ChainElem *)0x0) {
    local_18 = local_1c->next;
    if (local_1c != (ChainElem *)0x0) {
      ChainElem::drop(local_1c);
      _free(allocatedChainElem);
    }
    local_1c = local_18;
  }
  local_8 = 0xffffffff;
  ChainElem::drop(&newRootElem);
  ExceptionList = local_10;
  return;
}

