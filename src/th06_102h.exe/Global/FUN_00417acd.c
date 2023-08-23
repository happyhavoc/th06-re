
void __thiscall FUN_00417acd(int param_1_00,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *local_1c;
  
  iVar3 = DAT_006d4588;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x1e78) = 0x4a1;
  FUN_00432430(iVar2 + 0x1dc4,*(undefined4 *)(iVar3 + 0x1dbb8));
  FUN_004323a0(*(int *)(param_1_00 + 4) + 0x1dc4,param_2);
  iVar3 = DAT_006d4588;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x2098) = 0x706;
  FUN_00432430(iVar2 + 0x1fe4,*(undefined4 *)(iVar3 + 0x1e54c));
  FUN_00434b60(DAT_006d4588,*(int *)(param_1_00 + 4) + 0x1fe4,0xf0f0ff,0,param_3);
  local_1c = param_3;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(param_1_00 + 8) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_3 + 1)) * 0xf) / 2.0 + 16.0;
  g_GameContext._408_4_ = 3;
  FUN_004311e0(0xe,0);
  return;
}

