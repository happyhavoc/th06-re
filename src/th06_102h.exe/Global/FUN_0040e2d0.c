
undefined4 * __fastcall FUN_0040e2d0(undefined4 *param_1)

{
  AnmVm *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = (AnmVm *)(param_1 + 2);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm(local_24);
    AnmTimer::AnmTimer((AnmTimer *)(local_24[1].matrix.m[1] + 2));
    local_24 = (AnmVm *)(local_24[1].matrix.m + 3);
  }
  FUN_0040e340(param_1);
  return param_1;
}

