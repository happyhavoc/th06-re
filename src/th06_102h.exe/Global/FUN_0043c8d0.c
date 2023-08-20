
undefined4 FUN_0043c8d0(void)

{
  int **in_ECX;
  
  in_ECX[3] = (int *)0x0;
  in_ECX[2] = (int *)0x0;
  if (*in_ECX != (int *)0x0) {
    (**(code **)(**in_ECX + 0x1c))(1);
    *in_ECX = (int *)0x0;
  }
  if (in_ECX[4] != (int *)0x0) {
    _free(in_ECX[4]);
    in_ECX[4] = (int *)0x0;
  }
  _free(in_ECX[1]);
  return 1;
}

