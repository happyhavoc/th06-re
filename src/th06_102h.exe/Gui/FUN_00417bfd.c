
void __thiscall Gui::FUN_00417bfd(Gui *this,int param_1,char *param_2)

{
  char *local_1c;
  char cVar1;
  GuiImpl *iVar2;
  AnmManager *pAVar3;
  
  pAVar3 = g_AnmManager;
  iVar2 = this->impl;
  (iVar2->enemySpellcardPortrait).anmFileIndex = 0x4a3;
  AnmManager::SetAndExecuteScript(pAVar3,&iVar2->enemySpellcardPortrait,pAVar3->scripts[0x4a3]);
  AnmManager::SetActiveSprite(g_AnmManager,&this->impl->enemySpellcardPortrait,param_1 + 0x4a8);
  pAVar3 = g_AnmManager;
  iVar2 = this->impl;
  (iVar2->enemySpellcardName).anmFileIndex = 0x707;
  AnmManager::SetAndExecuteScript(pAVar3,&iVar2->enemySpellcardName,pAVar3->scripts[0x707]);
  AnmManager::DrawStringFormat
            (g_AnmManager,&this->impl->enemySpellcardName,(ZunColor)0xfff0f0,(ZunColor)0x0,param_2);
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

