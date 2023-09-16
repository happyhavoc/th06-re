
int __fastcall FUN_0043575d(void *param_1)

{
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x7a;
  local_20 = (AnmVm *)param_1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = local_20 + 1;
  }
  return (int)param_1;
}

