
ChainElem * __fastcall ChainElem::ChainElem(ChainElem *this)

{
  this->prev = (ChainElem *)0x0;
  this->next = (ChainElem *)0x0;
  this->callback = 0;
  this->unkPtr = this;
  this->addedCallback = 0;
  this->deletedCallback = 0;
  this->priority = 0;
  this->flags = this->flags & 0xfffe;
  return this;
}

