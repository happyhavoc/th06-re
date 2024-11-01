
ZunResult __thiscall th06::MainMenu::DrawReplayMenu(MainMenu *this)

{
  int replay_amount;
  uint i;
  AnmVm *vm_ref;
  
  AsciiManager::AddFormatText
            (&g_AsciiManager,&this->vmList[0x62].pos,"No.   Name      Date     Player   Rank");
                    /* unsure */
  replay_amount = this->chosenReplay - this->chosenReplay % 15;
  vm_ref = this->vmList + 0x62;
  for (i = replay_amount; ((int)i < replay_amount + 0xf && ((int)i < this->replayFilesNum));
      i = i + 1) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      if (i == this->chosenReplay) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    else {
      g_AsciiManager.isSelected = (int)(i == this->chosenReplay);
      if (i == this->chosenReplay) {
        g_AsciiManager.color = 0xffffffff;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
                    /* 
                       Draws something like this
                       
                       "No.1 AAAA 07/03/23 MarisaB Extra
                        */
    AsciiManager::AddFormatText
              (&g_AsciiManager,&vm_ref[1].pos,"%s %8s  %8s %7s  %7s",this->replayFileName + i,
               this->replayFileData[i].name,this->replayFileData[i].date,
               g_shortCharacterList[this->replayFileData[i].shottype_chara],
               g_difficultyList[this->replayFileData[i].difficulty]);
    vm_ref = vm_ref + 1;
  }
  if ((this->gameState == STATE_REPLAY_SELECT) && (this->currentReplay != (ReplayData *)0x0)) {
    g_AsciiManager.color = 0xffffffff;
    g_AsciiManager.isSelected = 0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&this->vmList[0x61].pos,"       %2.3f%%",
               (double)this->currentReplay->slowdown_rate);
    AsciiManager::AddFormatText(&g_AsciiManager,&this->vmList[0x72].pos,"Stage  LastScore");
    vm_ref = this->vmList + 0x72;
    for (i = 0; (int)i < 7; i = i + 1) {
      if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1 | g_Supervisor.cfg.opts & 1) ==
          USE_D3D_HW_TEXTURE_BLENDING) {
        if (i == this->cursor) {
          g_AsciiManager.color = 0xffff8080;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      else {
        g_AsciiManager.isSelected = (int)(i == this->cursor);
        if (i == this->cursor) {
          g_AsciiManager.color = 0xffffffff;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      if (this->currentReplay->stage_replay_data[i] == (StageReplayData *)0x0) {
        AsciiManager::AddFormatText(&g_AsciiManager,&vm_ref[1].pos,"%s ---------");
      }
      else {
        AsciiManager::AddFormatText(&g_AsciiManager,&vm_ref[1].pos,"%s %9d",g_stageList[i]);
      }
      vm_ref = vm_ref + 1;
    }
  }
  g_AsciiManager.color = 0xffffffff;
  g_AsciiManager.isSelected = 0;
  return ZUN_SUCCESS;
}

