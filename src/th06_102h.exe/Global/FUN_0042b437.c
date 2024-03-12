
void FUN_0042b437(uint *param_1)

{
  uint *puVar1;
  
  param_1 = (uint *)param_1[1];
  while (param_1 != (uint *)0x0) {
    puVar1 = (uint *)param_1[1];
    _free(param_1);
    param_1 = puVar1;
  }
  return;
}

