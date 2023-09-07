
int __fastcall FUN_0043c380(Pbg3FileStuff *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*(int *)param_1 + 4))(8);
  iVar2 = (**(code **)(*(int *)param_1 + 4))(8);
  iVar3 = (**(code **)(*(int *)param_1 + 4))(8);
  iVar4 = (**(code **)(*(int *)param_1 + 4))(8);
  return iVar4 * 0x1000000 + iVar3 * 0x10000 + iVar2 * 0x100 + iVar1;
}

