
void FUN_00424e41(float param_1)

{
  int iVar1;
  long lVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x62c) != 0) {
    iVar1 = *(int *)(in_ECX + 0x62c);
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    lVar2 = __ftol2((double)(param_1 * 60.0));
    *(long *)(iVar1 + 0x14) = lVar2;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

