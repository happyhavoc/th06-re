
void FUN_004240f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x210c4) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x210c4) + 8))(*(undefined4 *)(in_ECX + 0x210c4));
    *(undefined4 *)(in_ECX + 0x210c4) = 0;
  }
  return;
}

