
void FUN_0041cb90(undefined2 *param_1)

{
  ChainElem *pCVar1;
  undefined4 in_ECX;
  ChainElem *local_60;
  ChainElem *local_5c;
  ChainElem local_3c;
  ChainElem *local_1c;
  ChainElem *local_18;
  ChainElem *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046917e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041c720(&local_3c);
  local_8 = 0;
  pCVar1 = (ChainElem *)operator_new(0x20);
  local_8._0_1_ = 1;
  if (pCVar1 == (ChainElem *)0x0) {
    local_5c = (ChainElem *)0x0;
  }
  else {
    local_5c = FUN_0041c720(pCVar1);
  }
  local_1c = local_5c;
  local_3c.next = local_5c;
  for (local_14 = (ChainElem *)param_1; local_8._0_1_ = 0, local_14 != (ChainElem *)0x0;
      local_14 = *(ChainElem **)((int)local_14 + 0x14)) {
    local_1c->priority_ptr_ = &local_14->priority;
    pCVar1 = (ChainElem *)operator_new(0x20);
    local_8._0_1_ = 2;
    if (pCVar1 == (ChainElem *)0x0) {
      local_60 = (ChainElem *)0x0;
    }
    else {
      local_60 = FUN_0041c720(pCVar1);
    }
    local_1c->next = local_60;
    local_1c = local_1c->next;
  }
  for (local_14 = &local_3c; local_14 != (ChainElem *)0x0; local_14 = local_14->next) {
    CutChain(in_ECX,(ChainElem *)local_14->priority_ptr_);
  }
  local_1c = local_3c.next;
  while (pCVar1 = local_1c, local_1c != (ChainElem *)0x0) {
    local_18 = local_1c->next;
    if (local_1c != (ChainElem *)0x0) {
      ChainElem::drop(local_1c);
      _free(pCVar1);
    }
    local_1c = local_18;
  }
  local_8 = 0xffffffff;
  ChainElem::drop(&local_3c);
  ExceptionList = local_10;
  return;
}

