
int __fastcall FUN_00411190(int param_1)

{
  AnmVm *local_94;
  int local_8c;
  
  FUN_00411240((AnmVm *)(param_1 + 8));
  local_8c = 0x101;
  local_94 = (AnmVm *)(param_1 + 0xed0);
  while (local_8c = local_8c + -1, -1 < local_8c) {
    FUN_00411240(local_94);
    local_94 = (AnmVm *)&local_94[0xd].posInterpTime.current;
  }
  FUN_00424127((AnmTimer *)(param_1 + 0xee5e0));
  FUN_00410e30((undefined4 *)param_1);
  return param_1;
}

