
bool FUN_0043c510(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    return false;
  }
  if (*(char *)(in_ECX + 0x10) == -0x80) {
    iVar2 = FUN_0043cfb0();
    *(int *)(in_ECX + 0xc) = iVar2;
    if (iVar2 == -1) {
      return false;
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + iVar2;
  }
  bVar1 = *(byte *)(in_ECX + 0x10);
  bVar3 = bVar1 >> 1;
  *(byte *)(in_ECX + 0x10) = bVar3;
  if (bVar3 == 0) {
    *(undefined *)(in_ECX + 0x10) = 0x80;
  }
  return (*(uint *)(in_ECX + 0xc) & (uint)bVar1) != 0;
}

