
void __thiscall Gui::ShowBombNamePortrait(Gui *this,uint sprite,char *bombName)

{
  char cVar1;
  GuiImpl *pGVar2;
  AnmManager *pAVar3;
  char *local_1c;
  
  pAVar3 = g_AnmManager;
  pGVar2 = this->impl;
  (pGVar2->playerSpellcardPortrait).anmFileIndex = 0x4a1;
  AnmManager::SetAndExecuteScript(pAVar3,&pGVar2->playerSpellcardPortrait,pAVar3->scripts[0x4a1]);
  AnmManager::SetActiveSprite(g_AnmManager,&this->impl->playerSpellcardPortrait,sprite);
  pAVar3 = g_AnmManager;
  pGVar2 = this->impl;
  (pGVar2->bombSpellcardName).anmFileIndex = 0x706;
  AnmManager::SetAndExecuteScript(pAVar3,&pGVar2->bombSpellcardName,pAVar3->scripts[0x706]);
  AnmManager::DrawVmTextFmt(g_AnmManager,&this->impl->bombSpellcardName,0xf0f0ff,0,bombName);
  local_1c = bombName;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  this->field2_0x8 =
       (float)(ulonglong)(uint)(((int)local_1c - (int)(bombName + 1)) * 0xf) / 2.0 + 16.0;
  g_Supervisor.unk198 = 3;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB,0);
  return;
}

