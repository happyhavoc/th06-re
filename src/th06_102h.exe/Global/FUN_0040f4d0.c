
long __fastcall FUN_0040f4d0(int param_1)

{
  long lVar1;
  
  lVar1 = _atol(*(char **)(param_1 + 0x116c));
  while (**(char **)(param_1 + 0x116c) != '\0') {
    *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
  }
  while (**(char **)(param_1 + 0x116c) == '\0') {
    *(int *)(param_1 + 0x116c) = *(int *)(param_1 + 0x116c) + 1;
  }
  return lVar1;
}

