
int __thiscall Chain::RunDrawChain(Chain *this)

{
  undefined4 res;
  int updateCount;
  ChainElem *current;
  ChainElem *next;
  
  updateCount = 0;
  current = &this->drawChain;
LAB_0041cae9:
  while( true ) {
    if (current == (ChainElem *)0x0) {
      return updateCount;
    }
    if (current->callback != 0) break;
LAB_0041cb5c:
    current = current->next;
  }
  do {
    res = (*(code *)current->callback)(current->arg);
    switch(res) {
    case 0:
      goto switchD_0041cb14_caseD_0;
    default:
      updateCount = updateCount + 1;
      goto LAB_0041cb5c;
    case 2:
      break;
    case 3:
      return 1;
    case 4:
      return 0;
    case 5:
      return -1;
    }
  } while( true );
switchD_0041cb14_caseD_0:
  next = current->next;
  Cut(this,current);
  updateCount = updateCount + 1;
  current = next;
  goto LAB_0041cae9;
}

