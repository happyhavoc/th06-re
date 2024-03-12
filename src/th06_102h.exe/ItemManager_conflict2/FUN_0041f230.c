
ItemManager * __thiscall ItemManager_conflict2::FUN_0041f230(void *this)

{
  ItemManager *pAStack_24;
  int local_1c;
  
  local_1c = 0x201;
  pAStack_24 = (ItemManager *)this;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm((AnmVm *)pAStack_24);
    ZunTimer::Initialize(&pAStack_24->field263_0x134);
    pAStack_24 = pAStack_24 + 1;
  }
  return (ItemManager *)this;
}

