
void FUN_004321e0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c110 + param_1 * 4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c110 + param_1 * 4) + 8))
              (*(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4));
    *(undefined4 *)(in_ECX + 0x1c110 + param_1 * 4) = 0;
  }
  _free(*(void **)(in_ECX + 0x1c530 + param_1 * 4));
  *(undefined4 *)(in_ECX + 0x1c530 + param_1 * 4) = 0;
  return;
}

