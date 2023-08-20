
undefined4 FUN_0043c4a0(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x18) + 4))();
  FUN_0043c2f0();
  iVar1 = FUN_0043ce60(param_1,&DAT_0046cbe4);
  if (iVar1 == 0) {
    return 0;
  }
  DVar2 = GetFileSize(*(HANDLE *)(in_ECX + 0x1c),(LPDWORD)0x0);
  *(DWORD *)(in_ECX + 8) = DVar2;
  return 1;
}

