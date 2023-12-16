
void __thiscall Chain::Release(Chain *this)

{
  ReleaseSingleChain(this,&this->calcChain);
  ReleaseSingleChain(this,&this->drawChain);
  return;
}

