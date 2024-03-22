
ItemManager * __thiscall ItemManager::FUN_0041f230(ItemManager *this)

{
  ItemManager *pAStack_24;
  int local_1c;
  
  local_1c = 0x201;
  pAStack_24 = this;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm((AnmVm *)pAStack_24);
    ZunTimer::Initialize(&pAStack_24->items[0].timer);
    pAStack_24 = (ItemManager *)(pAStack_24->items + 1);
  }
  return this;
}

