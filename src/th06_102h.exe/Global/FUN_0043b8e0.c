
int __fastcall FUN_0043b8e0(int param_1)

{
  int iVar1;
  int local_8;
  
  if ((**(int **)(param_1 + 4) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar1 = FUN_0043b090(**(undefined4 **)(param_1 + 4),&local_8);
    if ((-1 < iVar1) &&
       ((local_8 == 0 || (iVar1 = FUN_0043aea0(param_1,**(int ***)(param_1 + 4),0), -1 < iVar1)))) {
      FUN_0043be70(0);
      iVar1 = (**(code **)(***(int ***)(param_1 + 4) + 0x34))(**(undefined4 **)(param_1 + 4),0);
    }
  }
  return iVar1;
}

