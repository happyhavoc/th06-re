
undefined4 * __fastcall FUN_0040e2d0(undefined4 *param_1)

{
  AnmVm *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = (AnmVm *)(param_1 + 2);
  while (local_1c = local_1c + -1, -1 < local_1c) {
    FUN_00403720(local_24);
    FUN_00424127((AnmTimer *)((int)&local_24[1].matrix.field0_0x0 + 0x18));
    local_24 = (AnmVm *)((int)&local_24[1].matrix.field0_0x0 + 0x30);
  }
  FUN_0040e340(param_1);
  return param_1;
}

