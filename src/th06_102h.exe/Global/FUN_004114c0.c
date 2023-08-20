
void FUN_004114c0(int param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0xea0); local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0xe70 + local_8 * 4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xe70 + local_8 * 4) + 0x17a) = 1;
      *(undefined4 *)(param_1 + 0xe70 + local_8 * 4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xea0) = 0;
  return;
}

