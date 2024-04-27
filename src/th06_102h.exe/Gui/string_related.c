
void __thiscall Gui::string_related(Gui *this,uint param_1,char *param_2)

{
  char cVar1;
  GuiImpl *pGVar2;
  AnmManager *pAVar3;
  int in_stack_ffffffcc;
  char *local_1c;
  
  pAVar3 = g_AnmManager;
  pGVar2 = this->impl;
  (pGVar2->vm3).anmFileIndex = 0x4a1;
  AnmManager::SetAndExecuteScript(pAVar3,&pGVar2->vm3,pAVar3->scripts[0x4a1]);
  AnmManager::SetActiveSprite(g_AnmManager,&this->impl->vm3,param_1);
  pAVar3 = g_AnmManager;
  pGVar2 = this->impl;
  (pGVar2->vm5).anmFileIndex = 0x706;
  AnmManager::SetAndExecuteScript(pAVar3,&pGVar2->vm5,pAVar3->scripts[0x706]);
  AnmManager::FUN_00434b60(g_AnmManager,&this->impl->vm5,0xf0f0ff,0,param_2,in_stack_ffffffcc);
  local_1c = param_2;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  this->field2_0x8 =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_2 + 1)) * 0xf) / 2.0 + 16.0;
  g_Supervisor.unk198 = 3;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB,0);
  return;
}

