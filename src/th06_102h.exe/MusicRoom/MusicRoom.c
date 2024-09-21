
undefined4 * __thiscall th06::MusicRoom::MusicRoom(MusicRoom *this)

{
  int iVar1;
  MusicRoom *pMVar2;
  AnmVm *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = &this->field12_0x24;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 0x20;
  local_3c = this->field13_0x134;
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::AnmVm(local_3c);
    local_3c = local_3c + 1;
  }
  local_50 = 0x10;
  local_58 = this->field4366_0x2334;
  while (local_50 = local_50 + -1, -1 < local_50) {
    AnmVm::AnmVm(local_58);
    local_58 = local_58 + 1;
  }
  pMVar2 = this;
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar2 = 0;
    pMVar2 = (MusicRoom *)&pMVar2->calc_chain;
  }
  return (undefined4 *)this;
}

