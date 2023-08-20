
undefined4 FUN_0043b4d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
    if (*(int *)(in_ECX + 0x14) < 1) {
      *(undefined4 *)(in_ECX + 0x1c) = 0;
      (**(code **)(***(int ***)(in_ECX + 4) + 0x48))(**(undefined4 **)(in_ECX + 4));
      return 1;
    }
    (**(code **)(***(int ***)(in_ECX + 4) + 0x3c))
              (**(undefined4 **)(in_ECX + 4),
               (*(int *)(in_ECX + 0x14) * 5000) / *(int *)(in_ECX + 0x18) + -5000);
  }
  return 0;
}

