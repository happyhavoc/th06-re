
undefined4 * FUN_0043ac90(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 *in_ECX;
  uint local_8;
  
  *in_ECX = &PTR_FUN_0046c680;
  pvVar1 = operator_new(param_3 << 2);
  in_ECX[1] = pvVar1;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    *(undefined4 *)(in_ECX[1] + local_8 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
  }
  in_ECX[2] = param_2;
  in_ECX[4] = param_3;
  in_ECX[3] = param_4;
  FUN_0043aea0(*(undefined4 *)in_ECX[1],0);
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(in_ECX[1] + local_8 * 4) + 0x34))
              (*(undefined4 *)(in_ECX[1] + local_8 * 4),0);
  }
  return in_ECX;
}

