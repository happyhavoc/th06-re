
undefined4 __thiscall ResultScreen::FUN_0042d35a(ResultScreen *this)

{
  float local_34;
  float local_20;
  D3DXVECTOR3 local_14;
  AnmVm *local_8;
  
  if ((0xe < this->unk_8) && (this->unk_8 < 0x11)) {
    local_8 = &this->field74_0x2790;
    g_AsciiManager.color = (this->field74_0x2790).color.color;
    if ((int)g_GameManager.difficulty < 4) {
      local_34 = (float)g_GameManager.counat / 89500.0;
    }
    else {
      local_34 = (float)g_GameManager.counat / 39600.0;
    }
    local_14.z = (this->field74_0x2790).pos.z;
    local_14.x = (this->field74_0x2790).pos.x + 224.0;
    local_14.y = (this->field74_0x2790).pos.y + 32.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&local_14,"%9d");
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddString
              (&g_AsciiManager,&local_14,(&PTR_s__Easy_00478504)[g_GameManager.difficulty]);
    local_14.y = local_14.y + 22.0;
    if ((g_GameManager.difficulty == EASY) || (g_GameManager.unk_1822 == 0)) {
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_14,"    %3.2f%%",(double)(local_34 * 100.0));
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
    local_20 = g_Supervisor.unk_frame_related1 / g_Supervisor.unk_frames_related2 - 0.5;
    local_20 = local_20 + local_20;
    if (local_20 < 0.0 == NAN(local_20)) {
      if (1.0 <= local_20) {
        local_20 = 1.0;
      }
    }
    else {
      local_20 = 0.0;
    }
    local_14.y = local_14.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&local_14,"    %3.2f%%",(double)((1.0 - local_20) * 100.0));
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}
