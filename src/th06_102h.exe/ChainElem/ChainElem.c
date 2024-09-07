
ChainElem * __thiscall th06::ChainElem::ChainElem(ChainElem *this)

{
  this->prev = (ChainElem *)0x0;
  this->next = (ChainElem *)0x0;
  this->callback = (ChainCallback *)0x0;
  this->unkPtr = this;
  this->addedCallback = (ChainLifecycleCallback *)0x0;
  this->deletedCallback = (ChainLifecycleCallback *)0x0;
  this->priority = 0;
  this->flags = this->flags & 0xfffe;
  return this;
}

