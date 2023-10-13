
void __thiscall FUN_00417acd(int param_1_00,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  AnmManager *pAVar3;
  char *local_1c;
  
  pAVar3 = g_AnmManager;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x1e78) = 0x4a1;
  AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(iVar2 + 0x1dc4),pAVar3->scripts[0x4a1]);
  AnmManager::SetActiveSprite(g_AnmManager,(AnmVm *)(*(int *)(param_1_00 + 4) + 0x1dc4),param_2);
  pAVar3 = g_AnmManager;
  iVar2 = *(int *)(param_1_00 + 4);
  *(undefined2 *)(iVar2 + 0x2098) = 0x706;
  AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(iVar2 + 0x1fe4),pAVar3->scripts[0x706]);
  FUN_00434b60(g_AnmManager,*(int *)(param_1_00 + 4) + 0x1fe4,0xf0f0ff,0,param_3);
  local_1c = param_3;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(param_1_00 + 8) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_3 + 1)) * 0xf) / 2.0 + 16.0;
  g_GameContext.field77_0x198 = 3;
  FUN_004311e0(0xe);
  return;
}

