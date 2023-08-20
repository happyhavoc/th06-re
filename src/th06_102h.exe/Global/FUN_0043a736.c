
undefined4 FUN_0043a736(int param_1,int param_2)

{
  int in_ECX;
  undefined4 local_c;
  
  if (((*(char *)(in_ECX + 0x103d + (param_2 + param_1 * 2) * 0x18) == 'c') ||
      (*(char *)(in_ECX + 0x103e + (param_2 + param_1 * 2) * 0x18) == 'c')) ||
     (*(char *)(in_ECX + 0x103f + (param_2 + param_1 * 2) * 0x18) == 'c')) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

