
void ZunFree(int *param_1)

{
  int *piVar1;
  
  param_1 = (int *)param_1[1];
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    _free(param_1);
    param_1 = piVar1;
  }
  return;
}

