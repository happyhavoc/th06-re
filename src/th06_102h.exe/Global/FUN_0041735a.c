
void FUN_0041735a(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2be4) = 0x43d00000;
  *(undefined4 *)(iVar1 + 0x2be8) = 0x42000000;
  *(undefined4 *)(iVar1 + 0x2bec) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2bf4) = 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2c00) = 0;
  *(undefined4 *)(iVar1 + 0x2bfc) = 0;
  *(undefined4 *)(iVar1 + 0x2bf8) = 0xfffffc19;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2bf0) = param_1;
  return;
}

