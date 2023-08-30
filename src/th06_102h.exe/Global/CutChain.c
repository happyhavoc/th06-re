
void __thiscall CutChain(Chain *this,ChainElem *to_delete)

{
  code *pcVar1;
  ChainElem *cur_elem;
  bool isDrawChain;
  
  isDrawChain = false;
  cur_elem = &this->calcChain;
  if (to_delete != (ChainElem *)0x0) {
    for (; cur_elem != (ChainElem *)0x0; cur_elem = cur_elem->next) {
      if (cur_elem == to_delete) goto LAB_0041ce4c;
    }
    isDrawChain = true;
    for (cur_elem = &this->drawChain; cur_elem != (ChainElem *)0x0; cur_elem = cur_elem->next) {
      if (cur_elem == to_delete) {
LAB_0041ce4c:
        if (isDrawChain) {
          DebugPrint2("draw cut Chain (Pri = %d)\n",(int)(short)to_delete->priority);
        }
        else {
          DebugPrint2("calc cut Chain (Pri = %d)\n",(int)(short)to_delete->priority);
        }
        if (to_delete->prev == (ChainElem *)0x0) {
          return;
        }
        to_delete->callback = 0;
        to_delete->prev->next = to_delete->next;
        if (to_delete->next != (ChainElem *)0x0) {
          to_delete->next->prev = to_delete->prev;
        }
        to_delete->prev = (ChainElem *)0x0;
        to_delete->next = (ChainElem *)0x0;
                    /* flags & IS_HEAP_ALLOCATED */
        if ((to_delete->flags & 1) != 0) {
          if (to_delete == (ChainElem *)0x0) {
            return;
          }
          ChainElem::drop(to_delete);
          _free(to_delete);
          return;
        }
        if (to_delete->deleted_callback == 0) {
          return;
        }
        pcVar1 = (code *)to_delete->deleted_callback;
        to_delete->deleted_callback = 0;
        (*pcVar1)(to_delete->arg);
        return;
      }
    }
  }
  return;
}
