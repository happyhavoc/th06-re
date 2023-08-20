
void FUN_0040daa0(int param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0xdb8 + local_8 * 4) != 0) &&
       (*(int *)(*(int *)(param_1 + 0xdb8 + local_8 * 4) + 600) != 0)) {
      *(undefined4 *)(param_1 + 0xd04) = 0x42800000;
      *(undefined4 *)(param_1 + 0xd08) = 0;
      *(undefined4 *)(param_1 + 0xd0c) = 0;
      FUN_0041e8d0(param_1 + 0xd04,param_1 + 0xd04,
                   *(undefined4 *)(*(int *)(param_1 + 0xdb8 + local_8 * 4) + 0x22c));
      *(float *)(param_1 + 0xd04) = *(float *)(param_1 + 0xd04) + *(float *)(param_1 + 0xc6c);
      *(float *)(param_1 + 0xd08) = *(float *)(param_1 + 0xd08) + *(float *)(param_1 + 0xc70);
      *(float *)(param_1 + 0xd0c) = *(float *)(param_1 + 0xd0c) + *(float *)(param_1 + 0xc74);
      FUN_004145c0(param_1 + 0xd00);
    }
  }
  return;
}

