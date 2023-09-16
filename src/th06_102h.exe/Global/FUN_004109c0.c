
undefined4 FUN_004109c0(int param_1)

{
  int in_EAX;
  int local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    FUN_0040f7c0(param_1);
    if (in_EAX != 0) {
      return 0;
    }
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      if (*(short *)(param_1 + 200 + local_c * 0x110) != 0) {
        AnmManager::FUN_00433960(param_1 + 0x14 + local_c * 0x110);
      }
    }
    if (((*(int *)(param_1 + 0x1118) == 0) || ((BUTTONS_PRESSED_CURFRAME & 0x100) == 0)) ||
       (3 < local_8)) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

