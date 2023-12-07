
undefined4 __thiscall MainMenu::FUN_00438bc1(MainMenu *this)

{
  int iVar1;
  uint local_c;
  AnmVm *local_8;
  
  AsciiManager::AddFormatText
            (&g_AsciiManager,&this->field0_0x0[0x62].pos.x,"No.   Name      Date     Player   Rank")
  ;
  iVar1 = *(int *)&this->field_0x81e8 - *(int *)&this->field_0x81e8 % 0xf;
  local_8 = this->field0_0x0 + 0x62;
  for (local_c = iVar1; ((int)local_c < iVar1 + 0xf && ((int)local_c < *(int *)&this->field_0x81ec))
      ; local_c = local_c + 1) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      if (local_c == *(int *)&this->field_0x81e8) {
        g_AsciiManager.color = 0xffff8080;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    else {
      g_AsciiManager.isSelected = (int)(local_c == *(int *)&this->field_0x81e8);
      if (local_c == *(int *)&this->field_0x81e8) {
        g_AsciiManager.color = 0xffffffff;
      }
      else {
        g_AsciiManager.color = 0xff808080;
      }
    }
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_8[1].pos.x,"%s %8s  %8s %7s  %7s",
               &this->field_0xfa3c + local_c * 8,&this->field_0xfc35 + local_c * 0x50,
               &this->field_0xfc2c + local_c * 0x50,
               (&PTR_s_ReimuA_004786b0)[(byte)(&this->field_0xfc22)[local_c * 0x50]],
               (&PTR_s_Easy_004786c0)[(byte)(&this->field_0xfc23)[local_c * 0x50]]);
    local_8 = local_8 + 1;
  }
  if ((this->unk_81f0 == 0xf) && (this->unk_10edc != 0)) {
    g_AsciiManager.color = 0xffffffff;
    g_AsciiManager.isSelected = 0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&this->field0_0x0[0x61].pos.x,"       %2.3f%%",
               (double)*(float *)(this->unk_10edc + 0x2c));
    AsciiManager::AddFormatText(&g_AsciiManager,&this->field0_0x0[0x72].pos.x,"Stage  LastScore");
    local_8 = this->field0_0x0 + 0x72;
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
      if (*(int *)(this->unk_10edc + 0x34 + local_c * 4) == 0) {
        AsciiManager::AddFormatText(&g_AsciiManager,&local_8[1].pos.x,"%s ---------");
      }
      else {
        AsciiManager::AddFormatText
                  (&g_AsciiManager,&local_8[1].pos.x,"%s %9d",(&PTR_s_Stage1_00478694)[local_c]);
      }
      local_8 = local_8 + 1;
    }
  }
  g_AsciiManager.color = 0xffffffff;
  g_AsciiManager.isSelected = 0;
  return 0;
}

