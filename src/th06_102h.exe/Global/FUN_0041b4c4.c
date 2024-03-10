
int __fastcall FUN_0041b4c4(int param_1)

{
  AnmVm *local_5c;
  int local_54;
  AnmVm *local_40;
  int local_38;
  AnmVm *local_24;
  int local_1c;
  
  ZunTimer::ZunTimer((ZunTimer *)(param_1 + 0xc));
  local_1c = 2;
  local_24 = (AnmVm *)(param_1 + 0x1c);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm(local_24);
    local_24 = local_24 + 1;
  }
  local_38 = 2;
  local_40 = (AnmVm *)(param_1 + 0x23c);
  while (local_38 = local_38 + -1, -1 < local_38) {
    AnmVm::AnmVm(local_40);
    local_40 = local_40 + 1;
  }
  local_54 = 2;
  local_5c = (AnmVm *)(param_1 + 0x45c);
  while (local_54 = local_54 + -1, -1 < local_54) {
    AnmVm::AnmVm(local_5c);
    local_5c = local_5c + 1;
  }
  return param_1;
}

