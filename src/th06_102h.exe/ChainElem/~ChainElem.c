
void __thiscall ChainElem::~ChainElem(ChainElem *this)

{
  if (this->deleted_callback != 0) {
    (*(code *)this->deleted_callback)(this->arg);
  }
  this->prev = (ChainElem *)0x0;
  this->next = (ChainElem *)0x0;
  this->callback = 0;
  this->added_callback = 0;
  this->deleted_callback = 0;
  return;
}

