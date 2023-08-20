
void FUN_00416b50(int param_1)

{
  int local_8;
  
  switch(*(undefined2 *)(param_1 + 0x5be)) {
  case 2:
    local_8 = param_1 + 0x110;
    break;
  case 3:
    local_8 = param_1 + 0x220;
    break;
  case 4:
    local_8 = param_1 + 0x330;
    break;
  case 5:
    local_8 = param_1 + 0x440;
    break;
  default:
    local_8 = param_1;
  }
  *(undefined4 *)(local_8 + 0x90) = *(undefined4 *)(param_1 + 0x560);
  *(undefined4 *)(local_8 + 0x94) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(local_8 + 0x98) = 0;
  *(uint *)(local_8 + 0x7c) = *(uint *)(local_8 + 0x7c) & 0xff000000 | 0xffffff;
  if (*(short *)(local_8 + 0x88) != 0) {
    *(float *)(local_8 + 8) = 1.570796 - *(float *)(param_1 + 0x590);
  }
  FUN_00433590(local_8);
  return;
}

