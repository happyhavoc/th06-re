
void __thiscall th06::Chain::Release(Chain *this)

{
  ReleaseSingleChain(this,&this->calcChain);
  ReleaseSingleChain(this,&this->drawChain);
  return;
}

