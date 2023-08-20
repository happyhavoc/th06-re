
long FUN_0040f4d0(void)

{
  long lVar1;
  int in_ECX;
  
  lVar1 = _atol(*(char **)(in_ECX + 0x116c));
  while (**(char **)(in_ECX + 0x116c) != '\0') {
    *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
  }
  while (**(char **)(in_ECX + 0x116c) == '\0') {
    *(int *)(in_ECX + 0x116c) = *(int *)(in_ECX + 0x116c) + 1;
  }
  return lVar1;
}

