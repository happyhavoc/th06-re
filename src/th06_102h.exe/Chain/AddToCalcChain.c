
ZunResult __thiscall th06::Chain::AddToCalcChain(Chain *this,ChainElem *elem,int priority)

{
  ZunResult ZVar1;
  ChainElem *cur;
  
  DebugPrint2("add calc chain (pri = %d)\n",priority);
  elem->priority = (short)priority;
  for (cur = &this->calcChain; (cur->next != (ChainElem *)0x0 && (cur->priority <= priority));
      cur = cur->next) {
  }
  if (priority < cur->priority) {
    elem->next = cur;
    elem->prev = cur->prev;
    if (elem->prev != (ChainElem *)0x0) {
      elem->prev->next = elem;
    }
    cur->prev = elem;
  }
  else {
    elem->next = (ChainElem *)0x0;
    elem->prev = cur;
    cur->next = elem;
  }
  if (elem->addedCallback == (ChainLifecycleCallback *)0x0) {
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = (*elem->addedCallback)(elem->arg);
    elem->addedCallback = (ChainLifecycleCallback *)0x0;
  }
  return ZVar1;
}

