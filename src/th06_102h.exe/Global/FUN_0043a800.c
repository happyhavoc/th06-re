
int FUN_0043a800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int **in_ECX;
  
  if (*in_ECX != (int *)0x0) {
    (**(code **)(**in_ECX + 8))(*in_ECX);
    *in_ECX = (int *)0x0;
  }
  iVar1 = Ordinal_11(0,in_ECX,0);
  if ((-1 < iVar1) && (iVar1 = (**(code **)(**in_ECX + 0x18))(*in_ECX,param_1,param_2), -1 < iVar1))
  {
    FUN_0043a890(param_3,param_4,param_5);
    iVar1 = 0;
  }
  return iVar1;
}

