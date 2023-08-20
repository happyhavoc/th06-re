
int FUN_0043b8e0(void)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  if ((**(int **)(in_ECX + 4) == 0) || (*(int *)(in_ECX + 0xc) == 0)) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    iVar1 = FUN_0043b090(**(undefined4 **)(in_ECX + 4),&local_8);
    if ((-1 < iVar1) &&
       ((local_8 == 0 || (iVar1 = FUN_0043aea0(**(undefined4 **)(in_ECX + 4),0), -1 < iVar1)))) {
      FUN_0043be70(0);
      iVar1 = (**(code **)(***(int ***)(in_ECX + 4) + 0x34))(**(undefined4 **)(in_ECX + 4),0);
    }
  }
  return iVar1;
}

