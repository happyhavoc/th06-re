
ChainElem * __thiscall th06::Chain::CreateElem(Chain *this,ChainCallback *callback)

{
  ChainElem *this_00;
  ChainElem *local_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046919b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (ChainElem *)operator_new(0x20);
  local_8 = 0;
  if (this_00 == (ChainElem *)0x0) {
    local_24 = (ChainElem *)0x0;
  }
  else {
    local_24 = ChainElem::ChainElem(this_00);
  }
  local_24->callback = callback;
  local_24->addedCallback = (ChainLifecycleCallback *)0x0;
  local_24->deletedCallback = (ChainLifecycleCallback *)0x0;
  local_24->flags = local_24->flags | 1;
  ExceptionList = local_10;
  return local_24;
}

