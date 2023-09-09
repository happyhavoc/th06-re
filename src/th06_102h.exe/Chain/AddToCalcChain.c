
undefined4 __thiscall Chain::AddToCalcChain(Chain *this,ChainElem *elem,int priority)

{
  undefined4 uVar1;
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
  if (elem->added_callback == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)elem->added_callback)(elem->arg);
    elem->added_callback = 0;
  }
  return uVar1;
}

