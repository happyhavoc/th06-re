
ItemManager * __thiscall th06::ItemManager::ItemManager(ItemManager *this)

{
  Item *pAStack_24;
  int local_1c;
  
  local_1c = 0x201;
  pAStack_24 = this->items;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm(&pAStack_24->sprite);
    ZunTimer::Initialize(&pAStack_24->timer);
    pAStack_24 = pAStack_24 + 1;
  }
  return this;
}

