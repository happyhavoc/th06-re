
undefined4 FUN_00407440(undefined4 *param_1,short param_2)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 4) + param_2 * 4);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 4294966297;
  *(short *)(param_1 + 0x12) = param_2;
  return 0;
}

