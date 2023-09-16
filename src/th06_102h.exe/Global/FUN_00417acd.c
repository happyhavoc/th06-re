
void __thiscall FUN_00417acd(int param_1_00,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  AnmManager *pAVar3;
  char *local_1c;
  
  pAVar3 = DAT_006d4588;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x1e78) = 0x4a1;
  FUN_00432430((Unknown *)(iVar2 + 0x1dc4),(int)pAVar3->scripts[0x4a1]);
  AnmManager::FUN_004323a0(DAT_006d4588,(AnmVm *)(*(int *)(param_1_00 + 4) + 0x1dc4),param_2);
  pAVar3 = DAT_006d4588;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x2098) = 0x706;
  FUN_00432430((Unknown *)(iVar2 + 0x1fe4),(int)pAVar3->scripts[0x706]);
  FUN_00434b60(DAT_006d4588,*(int *)(param_1_00 + 4) + 0x1fe4,0xf0f0ff,0,param_3);
  local_1c = param_3;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(param_1_00 + 8) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_3 + 1)) * 0xf) / 2.0 + 16.0;
  DAT_006c6eb0 = 3;
  FUN_004311e0(0xe);
  return;
}

