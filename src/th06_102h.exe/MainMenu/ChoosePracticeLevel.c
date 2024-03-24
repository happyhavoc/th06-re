
undefined4 __thiscall MainMenu::ChoosePracticeLevel(MainMenu *this)

{
  uint local_2c;
  int local_28;
  D3DXVECTOR3 text_pos;
  uint local_14;
  int local_10;
  int local_c;
  uint stage_num;
  
  if (this->gameState == STATE_PRACTICE_LVL_SELECT) {
    text_pos.x = 320.0;
    text_pos.y = 200.0;
    text_pos.z = 0.0;
    if (this->stateTimer < 0x1e) {
      local_28 = (this->stateTimer * 0xff) / 0x1e;
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
    if ((g_GameManager.difficulty == EASY) && (local_2c == 6)) {
      local_14 = 5;
    }
    for (stage_num = 0; (int)stage_num < (int)local_14; stage_num = stage_num + 1) {
      if (stage_num == this->cursor) {
        g_AsciiManager.color = local_c << 0x18 | 0xc0f0f0;
      }
      else {
        g_AsciiManager.color = ((uint)local_c >> 1) << 0x18 | 0x80c0c0;
      }
      AsciiManager::AddFormatText
                (&g_AsciiManager,&text_pos,"STAGE %d  %.9d",stage_num + 1,
                 *(undefined4 *)
                  (local_10 * 0x1e0 + stage_num * 0x50 + 0x69cd3c + g_GameManager.difficulty * 0x14)
                );
      text_pos.y = text_pos.y + 24.0;
    }
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

