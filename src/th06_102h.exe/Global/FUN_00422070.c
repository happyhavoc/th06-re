
void FUN_00422070(int param_1)

{
  int in_ECX;
  
  _free(*(void **)(in_ECX + 0x94 + param_1 * 4));
  *(undefined4 *)(in_ECX + 0x94 + param_1 * 4) = 0;
  return;
}

