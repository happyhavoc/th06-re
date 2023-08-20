
void FUN_004173d9(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2c04) = 0x43d00000;
  *(undefined4 *)(iVar1 + 0x2c08) = 0x43680000;
  *(undefined4 *)(iVar1 + 0x2c0c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c14) = 1;
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 *)(iVar1 + 0x2c20) = 0;
  *(undefined4 *)(iVar1 + 0x2c1c) = 0;
  *(undefined4 *)(iVar1 + 0x2c18) = 0xfffffc19;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c10) = param_1;
  return;
}

