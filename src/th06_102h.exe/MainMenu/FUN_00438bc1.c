
undefined4 __thiscall MainMenu::FUN_00438bc1(MainMenu *this)

{
  uint uVar1;
  uint local_c;
  AnmVm *local_8;
  
  AsciiManager::AddFormatText
            (&g_AsciiManager,&this->AnmVMArray[0x62].pos,"No.   Name      Date     Player   Rank");
  uVar1 = this->chosenReplay - (int)this->chosenReplay % 0xf;
  local_8 = this->AnmVMArray + 0x62;
  for (local_c = uVar1; ((int)local_c < (int)(uVar1 + 0xf) && ((int)local_c < this->replayFilesNum))
      ; local_c = local_c + 1) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      if (local_c == this->chosenReplay) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    else {
      g_AsciiManager.isSelected = (int)(local_c == this->chosenReplay);
      if (local_c == this->chosenReplay) {
        g_AsciiManager.color = 0xffffffff;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_8[1].pos,"%s %8s  %8s %7s  %7s",
               this->replayFileNumber + local_c,&this->field_0xfc35 + local_c * 0x50,
               &this->field_0xfc2c + local_c * 0x50,
               (&PTR_s_ReimuA_004786b0)[(byte)(&this->field_0xfc22)[local_c * 0x50]],
               (&PTR_s_Easy_004786c0)[(byte)(&this->field_0xfc23)[local_c * 0x50]]);
    local_8 = local_8 + 1;
  }
  if ((this->gameState == STATE_15) && (this->replayGameData != 0)) {
    g_AsciiManager.color = 0xffffffff;
    g_AsciiManager.isSelected = 0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&this->AnmVMArray[0x61].pos,"       %2.3f%%",
               (double)*(float *)(this->replayGameData + 0x2c));
    AsciiManager::AddFormatText(&g_AsciiManager,&this->AnmVMArray[0x72].pos,"Stage  LastScore");
    local_8 = this->AnmVMArray + 0x72;
    for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
      if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1 | g_Supervisor.cfg.opts & 1) ==
          USE_D3D_HW_TEXTURE_BLENDING) {
        if (local_c == this->cursor) {
          g_AsciiManager.color = 0xffff8080;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      else {
        g_AsciiManager.isSelected = (int)(local_c == this->cursor);
        if (local_c == this->cursor) {
          g_AsciiManager.color = 0xffffffff;
        }
        else {
          g_AsciiManager.color = 0xff808080;
        }
      }
      if (*(int *)(this->replayGameData + 0x34 + local_c * 4) == 0) {
        AsciiManager::AddFormatText(&g_AsciiManager,&local_8[1].pos,"%s ---------");
      }
      else {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_8[1].pos,"%s %9d",(&PTR_s_Stage1_00478694)[local_c]);
      }
      local_8 = local_8 + 1;
    }
  }
  g_AsciiManager.color = 0xffffffff;
  g_AsciiManager.isSelected = 0;
  return 0;
}

