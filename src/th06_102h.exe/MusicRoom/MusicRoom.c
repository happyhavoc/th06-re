
MusicRoom * __thiscall th06::MusicRoom::MusicRoom(MusicRoom *this)

{
  int iVar1;
  MusicRoom *pMVar2;
  MusicRoom *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = &this->mainVM;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 32;
  local_3c = this->anmArray;
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::AnmVm(local_3c);
    local_3c = local_3c + 1;
  }
  local_50 = 16;
  local_58 = this + 1;
  while (local_50 = local_50 + -1, -1 < local_50) {
    AnmVm::AnmVm((AnmVm *)local_58);
    local_58 = (MusicRoom *)&(local_58->mainVM).offset.z;
  }
  pMVar2 = this;
  for (iVar1 = 3341; iVar1 != 0; iVar1 = iVar1 + -1) {
    pMVar2->calc_chain = (ChainElem *)0x0;
    pMVar2 = (MusicRoom *)&pMVar2->draw_chain;
  }
  return this;
}

