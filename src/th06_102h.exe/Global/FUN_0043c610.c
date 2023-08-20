
undefined4 FUN_0043c610(uint param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (param_1 < (uint)in_ECX[2]) {
    iVar1 = (**(code **)(*in_ECX + 0x10))();
    if (iVar1 != 0) {
      iVar1 = FUN_0043d030(param_1,0);
      if (iVar1 != 0) {
        in_ECX[1] = param_1;
        in_ECX[5] = 0;
        return 1;
      }
    }
  }
  return 0;
}

