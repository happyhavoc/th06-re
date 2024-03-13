
undefined4 * __thiscall MusicRoom::FUN_00425318(MusicRoom *this)

{
  int iVar1;
  undefined4 *puVar2;
  AnmVm *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = (AnmVm *)(this + 0x24);
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 0x20;
  local_3c = (AnmVm *)(this + 0x134);
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::AnmVm(local_3c);
    local_3c = local_3c + 1;
  }
  local_50 = 0x10;
  local_58 = (AnmVm *)(this + 0x2334);
  while (local_50 = local_50 + -1, -1 < local_50) {
    AnmVm::AnmVm(local_58);
    local_58 = local_58 + 1;
  }
  puVar2 = (undefined4 *)this;
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (undefined4 *)this;
}

