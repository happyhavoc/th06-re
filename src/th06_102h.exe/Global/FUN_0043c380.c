
int FUN_0043c380(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 4))(8);
  iVar2 = (**(code **)(*in_ECX + 4))(8);
  iVar3 = (**(code **)(*in_ECX + 4))(8);
  iVar4 = (**(code **)(*in_ECX + 4))(8);
  return iVar4 * 0x1000000 + iVar3 * 0x10000 + iVar2 * 0x100 + iVar1;
}

