
void __thiscall ChainElem::~ChainElem(ChainElem *this)

{
  if (this->deletedCallback != 0) {
    (*(code *)this->deletedCallback)(this->arg);
  }
  this->prev = (ChainElem *)0x0;
  this->next = (ChainElem *)0x0;
  this->callback = 0;
  this->addedCallback = 0;
  this->deletedCallback = 0;
  return;
}

