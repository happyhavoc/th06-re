
ZunResult __thiscall Chain::AddToDrawChain(Chain *this,ChainElem *param_2,int param_3)

{
  ZunResult ZVar1;
  ChainElem *local_8;
  
  DebugPrint2("add draw chain (pri = %d)\n",param_3);
  param_2->priority = (short)param_3;
  for (local_8 = &this->drawChain;
      (local_8->next != (ChainElem *)0x0 && (local_8->priority <= param_3)); local_8 = local_8->next
      ) {
  }
  if (param_3 < local_8->priority) {
    param_2->next = local_8;
    param_2->prev = local_8->prev;
    if (param_2->prev != (ChainElem *)0x0) {
      param_2->prev->next = param_2;
    }
    local_8->prev = param_2;
  }
  else {
    param_2->next = (ChainElem *)0x0;
    param_2->prev = local_8;
    local_8->next = param_2;
  }
  if (param_2->addedCallback == (ChainLifecycleCallback *)0x0) {
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = (*param_2->addedCallback)(param_2->arg);
  }
  return ZVar1;
}

