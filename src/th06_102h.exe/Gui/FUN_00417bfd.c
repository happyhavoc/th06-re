
void __thiscall Gui::FUN_00417bfd(Gui *this,int param_1,char *param_2)

{
  char *local_1c;
  char cVar1;
  GuiImpl *iVar2;
  AnmManager *pAVar3;
  
  pAVar3 = g_AnmManager;
  iVar2 = this->impl;
  (iVar2->vm4).anmFileIndex = 0x4a3;
  AnmManager::SetAndExecuteScript(pAVar3,&iVar2->vm4,pAVar3->scripts[0x4a3]);
  AnmManager::SetActiveSprite(g_AnmManager,&this->impl->vm4,param_1 + 0x4a8);
  pAVar3 = g_AnmManager;
  iVar2 = this->impl;
  (iVar2->vm6).anmFileIndex = 0x707;
  AnmManager::SetAndExecuteScript(pAVar3,&iVar2->vm6,pAVar3->scripts[0x707]);
  AnmManager::DrawStringFormat(g_AnmManager,&this->impl->vm6,0xfff0f0,0,param_2);
  local_1c = param_2;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  this->blue_spellcard_bar_length =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(param_2 + 1)) * 0xf) / 2.0 + 16.0;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB,0);
  return;
}

