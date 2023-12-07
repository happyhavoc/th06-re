
int __fastcall FUN_0043575d(undefined param_1)

{
  undefined3 in_register_00000005;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x7a;
  local_20 = (AnmVm *)CONCAT31(in_register_00000005,param_1);
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  return (int)(AnmVm *)CONCAT31(in_register_00000005,param_1);
}

