
undefined4 FUN_0043c650(void)

{
  char cVar1;
  undefined4 *in_ECX;
  
  if (in_ECX[7] != 0) {
    cVar1 = *(char *)(in_ECX + 4);
    while (cVar1 != -0x80) {
      (**(code **)*in_ECX)();
      cVar1 = *(char *)(in_ECX + 4);
    }
    return 1;
  }
  return 0;
}

