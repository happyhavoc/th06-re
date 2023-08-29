
undefined4 __thiscall Chain::AddToCalcChain(Chain *this,ChainElem *param_2,int priority)

{
  undefined4 uVar1;
  ChainElem *cur;
  
  DebugPrint2("add calc chain (pri = %d)\n",priority);
  param_2->priority = (undefined2)priority;
  for (cur = &this->calcChain; (cur->next != (ChainElem *)0x0 && ((short)cur->priority <= priority))
      ; cur = cur->next) {
  }
  if (priority < (short)cur->priority) {
    param_2->next = cur;
    param_2->prev = cur->prev;
    if (param_2->prev != (ChainElem *)0x0) {
      param_2->prev->next = param_2;
    }
    cur->prev = param_2;
  }
  else {
    param_2->next = (ChainElem *)0x0;
    param_2->prev = cur;
    cur->next = param_2;
  }
  if (param_2->added_callback == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2->added_callback)(param_2->arg);
    param_2->added_callback = 0;
  }
  return uVar1;
}

