
void FUN_00417458(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2c24) = 0x43600000;
  *(undefined4 *)(iVar1 + 0x2c28) = 0x41800000;
  *(undefined4 *)(iVar1 + 0x2c2c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c34) = 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2c40) = 0;
  *(undefined4 *)(iVar1 + 0x2c3c) = 0;
  *(undefined4 *)(iVar1 + 0x2c38) = 0xfffffc19;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c30) = param_1;
  return;
}

