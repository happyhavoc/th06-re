
void FUN_0041c57e(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1a7c) = *(int *)(in_ECX + 0x1a7c) + param_1;
  while (99 < *(int *)(in_ECX + 0x1a7c)) {
    *(int *)(in_ECX + 0x1a70) = *(int *)(in_ECX + 0x1a70) + 1;
    *(int *)(in_ECX + 0x1a7c) = *(int *)(in_ECX + 0x1a7c) + -100;
  }
  if (*(int *)(in_ECX + 0x1a74) < *(int *)(in_ECX + 0x1a70)) {
    *(undefined4 *)(in_ECX + 0x1a70) = *(undefined4 *)(in_ECX + 0x1a74);
  }
  return;
}

