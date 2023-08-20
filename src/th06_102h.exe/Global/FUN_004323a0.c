
undefined4 FUN_004323a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + param_2 * 0x38) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined2 *)(param_1 + 0xb0) = (undefined2)param_2;
    *(int *)(param_1 + 0xc0) = in_ECX + param_2 * 0x38;
    FUN_00403670(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) =
         *(float *)(*(int *)(param_1 + 0xc0) + 0x30) / *(float *)(*(int *)(param_1 + 0xc0) + 0x18);
    *(float *)(param_1 + 0x50) =
         *(float *)(*(int *)(param_1 + 0xc0) + 0x2c) / *(float *)(*(int *)(param_1 + 0xc0) + 0x14);
    uVar1 = 0;
  }
  return uVar1;
}

