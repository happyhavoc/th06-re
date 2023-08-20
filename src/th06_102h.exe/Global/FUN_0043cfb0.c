
uint FUN_0043cfb0(void)

{
  int iVar1;
  int *in_ECX;
  undefined *puVar2;
  uint uVar3;
  undefined local_8 [4];
  undefined local_4 [4];
  
  puVar2 = local_4;
  uVar3 = 1;
  iVar1 = (**(code **)(*in_ECX + 8))(puVar2,1,local_8);
  if ((iVar1 != 0) && (puVar2 != (undefined *)0x0)) {
    return uVar3 & 0xff;
  }
  return 0xffffffff;
}

