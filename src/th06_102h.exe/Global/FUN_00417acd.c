
void FUN_00417acd(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  char *local_1c;
  
  iVar3 = DAT_006d4588;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x1e78) = 0x4a1;
  FUN_00432430(iVar2 + 0x1dc4,*(undefined4 *)(iVar3 + 0x1dbb8));
  FUN_004323a0(*(int *)(in_ECX + 4) + 0x1dc4,param_1);
  iVar3 = DAT_006d4588;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x2098) = 0x706;
  FUN_00432430(iVar2 + 0x1fe4,*(undefined4 *)(iVar3 + 0x1e54c));
  FUN_00434b60(DAT_006d4588,*(int *)(in_ECX + 4) + 0x1fe4,0xf0f0ff,0,param_2);
  local_1c = param_2;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(in_ECX + 8) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_2 + 1)) * 0xf) / 2.0 + 16.0;
  DAT_006c6eb0 = 3;
  FUN_004311e0(0xe,0);
  return;
}

