
undefined4 __thiscall ResultScreen::FUN_0042d35a(ResultScreen *this)

{
  D3DXVECTOR3 local_14;
  AnmVm *local_8;
  
  if ((0xe < this->unk_8) && (this->unk_8 < 0x11)) {
    local_8 = &this->field74_0x2790;
    g_AsciiManager.color = (this->field74_0x2790).color.color;
    local_14.z = (this->field74_0x2790).pos.z;
    local_14.x = (this->field74_0x2790).pos.x + 224.0;
    local_14.y = (this->field74_0x2790).pos.y + 32.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddString
              (&g_AsciiManager,&local_14,(&PTR_s__Easy_00478504)[g_GameManager.difficulty]);
    local_14.y = local_14.y + 22.0;
    if ((g_GameManager.difficulty == 0) || (g_GameManager.unk_1822 == 0)) {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"    %3.2f%%");
    }
    else {
      AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"      100%%");
    }
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"    %3.2f%%");
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

