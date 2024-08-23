
void __thiscall Chain::ReleaseSingleChain(Chain *this,ChainElem *root)

{
  ChainElem *_Memory;
  ChainElem *data_storage;
  ChainElem *allocatedChainElem2;
  ChainElem *allocatedChainElem;
  ChainElem newRootElem [20];
  ChainElem *pCStack_28;
  ChainElem *tmp;
  ChainElem *tmp2;
  ChainElem *curElem;
  void *exception_list_tmp;
  undefined *exception_frame_handler;
  undefined4 exception_mask;
  
  exception_mask = 0xffffffff;
  exception_frame_handler = &LAB_0046917e;
  exception_list_tmp = ExceptionList;
  ExceptionList = &exception_list_tmp;
  ChainElem::ChainElem(newRootElem);
  exception_mask = 0;
  data_storage = (ChainElem *)operator_new(0x20);
  exception_mask._0_1_ = 1;
  if (data_storage == (ChainElem *)0x0) {
    allocatedChainElem = (ChainElem *)0x0;
  }
  else {
    allocatedChainElem = ChainElem::ChainElem(data_storage);
  }
  tmp = allocatedChainElem;
  pCStack_28 = allocatedChainElem;
  for (curElem = root; exception_mask._0_1_ = 0, curElem != (ChainElem *)0x0;
      curElem = curElem->next) {
    tmp->unkPtr = curElem;
    data_storage = (ChainElem *)operator_new(0x20);
    exception_mask._0_1_ = 2;
    if (data_storage == (ChainElem *)0x0) {
      allocatedChainElem2 = (ChainElem *)0x0;
    }
    else {
      allocatedChainElem2 = ChainElem::ChainElem(data_storage);
    }
    tmp->next = allocatedChainElem2;
    tmp = tmp->next;
  }
  for (curElem = (ChainElem *)newRootElem; curElem != (ChainElem *)0x0;
      curElem = *(ChainElem **)((int)curElem + 0x14)) {
    Cut(this,*(ChainElem **)((int)curElem + 0x18));
  }
  tmp = pCStack_28;
  while (_Memory = tmp, tmp != (ChainElem *)0x0) {
    tmp2 = tmp->next;
    if (tmp != (ChainElem *)0x0) {
      ChainElem::~ChainElem((ChainElem *)tmp);
      _free(_Memory);
    }
    tmp = tmp2;
  }
  exception_mask = 0xffffffff;
  ChainElem::~ChainElem((ChainElem *)newRootElem);
  ExceptionList = exception_list_tmp;
  return;
}

