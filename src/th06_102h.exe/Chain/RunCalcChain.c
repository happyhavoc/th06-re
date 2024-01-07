
int __thiscall Chain::RunCalcChain(Chain *this)

{
  ChainCallbackResult CVar1;
  undefined3 extraout_var;
  int updateCount;
  ChainElem *current;
  ChainElem *tmp;
  
LAB_0041ca19:
  updateCount = 0;
  current = &this->calcChain;
LAB_0041ca26:
  while( true ) {
    if (current == (ChainElem *)0x0) {
      return updateCount;
    }
    if (current->callback != (ChainCallback *)0x0) break;
LAB_0041ca9b:
    current = current->next;
  }
  do {
    CVar1 = (*current->callback)(current->arg);
    switch(CONCAT31(extraout_var,CVar1)) {
    case 0:
      goto switchD_0041ca51_caseD_0;
    default:
      updateCount = updateCount + 1;
      goto LAB_0041ca9b;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    case 6:
      goto LAB_0041ca19;
    }
  } while( true );
switchD_0041ca51_caseD_0:
  tmp = current->next;
  Cut(this,current);
  updateCount = updateCount + 1;
  current = tmp;
  goto LAB_0041ca26;
}

