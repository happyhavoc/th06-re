
undefined4 __thiscall MainMenu::FUN_00439965(MainMenu *this)

{
  uint local_2c;
  uint local_28;
  D3DXVECTOR3 local_20;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if (this->gameState == 0x11) {
    local_20.x = 320.0;
    local_20.y = 200.0;
    local_20.z = 0.0;
    if (this->gameSubState < 0x1e) {
      local_28 = (this->gameSubState * 0xff) / 0x1e;
    }
    else {
      local_28 = 0xff;
    }
    local_c = local_28;
    local_10 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (*(byte *)(local_10 * 0x18 + 0x69cce1 + g_GameManager.difficulty) < 7) {
      local_2c = (uint)*(byte *)(local_10 * 0x18 + 0x69cce1 + g_GameManager.difficulty);
    }
    else {
      local_2c = 6;
    }
    local_14 = local_2c;
    if ((g_GameManager.difficulty == 0) && (local_2c == 6)) {
      local_14 = 5;
    }
    for (local_8 = 0; (int)local_8 < (int)local_14; local_8 = local_8 + 1) {
      if (local_8 == this->cursor) {
        g_AsciiManager.color = local_c << 0x18 | 0xc0f0f0;
      }
      else {
        g_AsciiManager.color = (local_c >> 1) << 0x18 | 0x80c0c0;
      }
      AsciiManager::AddFormatText
                (&g_AsciiManager,&local_20,"STAGE %d  %.9d",local_8 + 1,
                 *(undefined4 *)
                  (local_10 * 0x1e0 + local_8 * 0x50 + 0x69cd3c + g_GameManager.difficulty * 0x14));
      local_20.y = local_20.y + 24.0;
    }
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

