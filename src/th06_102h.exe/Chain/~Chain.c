
void __thiscall Chain::~Chain(Chain *this)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  ChainElem::~ChainElem(&this->drawChain);
  local_8 = 0xffffffff;
  ChainElem::~ChainElem(&this->calcChain);
  ExceptionList = local_10;
  return;
}

