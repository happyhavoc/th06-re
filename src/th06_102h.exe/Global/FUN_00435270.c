
void FUN_00435270(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20d34 + param_1 * 4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x20d34 + param_1 * 4) + 8))
              (*(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4));
    *(undefined4 *)(in_ECX + 0x20d34 + param_1 * 4) = 0;
  }
  if (*(int *)(in_ECX + 0x20db4 + param_1 * 4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x20db4 + param_1 * 4) + 8))
              (*(undefined4 *)(in_ECX + 0x20db4 + param_1 * 4));
    *(undefined4 *)(in_ECX + 0x20db4 + param_1 * 4) = 0;
  }
  return;
}

