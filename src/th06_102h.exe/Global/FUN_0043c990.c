
undefined4 FUN_0043c990(uint param_1)

{
  int in_ECX;
  
  if (*(uint *)(in_ECX + 8) <= param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + param_1 * 0x114);
}

