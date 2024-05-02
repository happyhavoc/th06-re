
ItemManager * __thiscall ItemManager::FUN_0041f230(ItemManager *this)

{
  Item *pAStack_24;
  int local_1c;
  
  local_1c = 0x201;
  pAStack_24 = this->items;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm(&pAStack_24->vm);
    ZunTimer::Initialize(&pAStack_24->timer);
    pAStack_24 = pAStack_24 + 1;
  }
  return this;
}

