
void FUN_0041c5fa(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x1a7c) = *(int *)(in_ECX + 0x1a7c) - param_1;
  while (*(int *)(in_ECX + 0x1a7c) < 0) {
    *(int *)(in_ECX + 0x1a70) = *(int *)(in_ECX + 0x1a70) + -1;
    *(int *)(in_ECX + 0x1a7c) = *(int *)(in_ECX + 0x1a7c) + 100;
  }
  if (*(int *)(in_ECX + 0x1a70) < *(int *)(in_ECX + 0x1a78)) {
    *(undefined4 *)(in_ECX + 0x1a70) = *(undefined4 *)(in_ECX + 0x1a78);
  }
  return;
}

