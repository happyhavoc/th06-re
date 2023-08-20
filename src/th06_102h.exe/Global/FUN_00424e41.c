
void FUN_00424e41(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x62c) != 0) {
    iVar1 = *(int *)(in_ECX + 0x62c);
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    uVar2 = __ftol2();
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

