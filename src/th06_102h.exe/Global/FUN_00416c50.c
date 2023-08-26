
void FUN_00416c50(void *param_1)

{
  void *local_8;
  
  switch(*(undefined2 *)((int)param_1 + 0x5be)) {
  case 2:
    local_8 = (void *)((int)param_1 + 0x110);
    break;
  case 3:
    local_8 = (void *)((int)param_1 + 0x220);
    break;
  case 4:
    local_8 = (void *)((int)param_1 + 0x330);
    break;
  case 5:
    local_8 = (void *)((int)param_1 + 0x440);
    break;
  default:
    local_8 = param_1;
  }
  *(float *)((int)local_8 + 0x90) = VIEWPORT_X + *(float *)((int)param_1 + 0x560);
  *(float *)((int)local_8 + 0x94) = VIEWPORT_Y + *(float *)((int)param_1 + 0x564);
  *(undefined4 *)((int)local_8 + 0x98) = 0;
  *(uint *)((int)local_8 + 0x7c) = *(uint *)((int)local_8 + 0x7c) & 0xff000000 | 0xffffff;
  if (*(short *)((int)local_8 + 0x88) != 0) {
    *(float *)((int)local_8 + 8) = 1.570796 - *(float *)((int)param_1 + 0x590);
  }
  FUN_00432cc0(local_8);
  return;
}

