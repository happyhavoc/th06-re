
int __fastcall FUN_00425e10(int param_1)

{
  AnmVm *local_64;
  int local_5c;
  AnmTimer *local_50;
  int local_48;
  int local_3c;
  int local_30;
  int local_24;
  AnmVm *local_20;
  int local_18;
  
  AnmVm::AnmVm((AnmVm *)param_1);
  local_18 = 3;
  local_20 = (AnmVm *)(param_1 + 0x110);
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_24 = 2;
  do {
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  local_30 = 0x20;
  do {
    local_30 = local_30 + -1;
  } while (-1 < local_30);
  local_3c = 0x20;
  do {
    local_3c = local_3c + -1;
  } while (-1 < local_3c);
  local_48 = 2;
  local_50 = (AnmTimer *)(param_1 + 0x9b8);
  while (local_48 = local_48 + -1, -1 < local_48) {
    AnmTimer::AnmTimer(local_50);
    local_50 = local_50 + 1;
  }
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x9e8));
  local_5c = 0x50;
  local_64 = (AnmVm *)(param_1 + 0xa28);
  while (local_5c = local_5c + -1, -1 < local_5c) {
    AnmVm::AnmVm(local_64);
    AnmTimer::AnmTimer(&local_64[1].currentTimeInScript);
    local_64 = (AnmVm *)((int)&local_64[1].matrix.field0_0x0 + 0xc);
  }
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x75a8));
  AnmTimer::AnmTimer((AnmTimer *)(param_1 + 0x75b4));
  FUN_00426000();
  return param_1;
}

