
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00417bfd(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  AnmManager *pAVar3;
  int in_ECX;
  char *local_1c;
  
  pAVar3 = g_AnmManager;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x1f88) = 0x4a3;
  AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(iVar2 + 0x1ed4),pAVar3->scripts[0x4a3]);
  AnmManager::SetActiveSprite(g_AnmManager,(AnmVm *)(*(int *)(in_ECX + 4) + 0x1ed4),param_1 + 0x4a8)
  ;
  pAVar3 = g_AnmManager;
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined2 *)(iVar2 + 0x21a8) = 0x707;
  AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(iVar2 + 0x20f4),pAVar3->scripts[0x707]);
  AnmManager::FUN_00434c40(g_AnmManager,*(int *)(in_ECX + 4) + 0x20f4,0xfff0f0,0,param_2);
  local_1c = param_2;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  *(float *)(in_ECX + 0xc) =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_2 + 1)) * 0xf) / 2.0 + 16.0;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xe);
  return;
}
