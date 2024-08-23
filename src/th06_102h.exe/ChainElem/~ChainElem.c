
void __thiscall ChainElem::~ChainElem(ChainElem *this)

{
  if (this->deletedCallback != (ChainLifecycleCallback *)0x0) {
    (*this->deletedCallback)(this->arg);
  }
  this->prev = (ChainElem *)0x0;
  this->next = (ChainElem *)0x0;
  this->callback = (ChainCallback *)0x0;
  this->addedCallback = (ChainLifecycleCallback *)0x0;
  this->deletedCallback = (ChainLifecycleCallback *)0x0;
  return;
}

