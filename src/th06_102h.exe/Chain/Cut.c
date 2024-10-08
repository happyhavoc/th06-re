
void __thiscall th06::Chain::Cut(Chain *this,ChainElem *to_remove)

{
  ChainLifecycleCallback *pCVar1;
  ChainElem *cur_elem;
  bool isDrawChain;
  
  isDrawChain = false;
  cur_elem = &this->calcChain;
  if (to_remove != (ChainElem *)0x0) {
    for (; cur_elem != (ChainElem *)0x0; cur_elem = cur_elem->next) {
      if (cur_elem == to_remove) goto destroy_elem;
    }
    isDrawChain = true;
    for (cur_elem = &this->drawChain; cur_elem != (ChainElem *)0x0; cur_elem = cur_elem->next) {
      if (cur_elem == to_remove) {
destroy_elem:
        if (isDrawChain) {
          utils::DebugPrint2("draw cut Chain (Pri = %d)\n",(int)to_remove->priority);
        }
        else {
          utils::DebugPrint2("calc cut Chain (Pri = %d)\n",(int)to_remove->priority);
        }
        if (to_remove->prev == (ChainElem *)0x0) {
          return;
        }
        to_remove->callback = (ChainCallback *)0x0;
        to_remove->prev->next = to_remove->next;
        if (to_remove->next != (ChainElem *)0x0) {
          to_remove->next->prev = to_remove->prev;
        }
        to_remove->prev = (ChainElem *)0x0;
        to_remove->next = (ChainElem *)0x0;
                    /* flags & IS_HEAP_ALLOCATED */
        if ((to_remove->flags & 1) != 0) {
          if (to_remove == (ChainElem *)0x0) {
            return;
          }
          ChainElem::~ChainElem(to_remove);
          operator_delete(to_remove);
          return;
        }
        if (to_remove->deletedCallback == (ChainLifecycleCallback *)0x0) {
          return;
        }
        pCVar1 = to_remove->deletedCallback;
        to_remove->deletedCallback = (ChainLifecycleCallback *)0x0;
        (*pCVar1)(to_remove->arg);
        return;
      }
    }
  }
  return;
}

