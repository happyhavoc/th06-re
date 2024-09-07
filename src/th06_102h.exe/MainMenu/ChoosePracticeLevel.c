
ZunResult __thiscall th06::MainMenu::ChoosePracticeLevel(MainMenu *this)

{
  uint stage;
  int color;
  D3DXVECTOR3 text_pos;
  uint selected_stage;
  int charShotType;
  int color_copy;
  uint stage_num;
  
  if (this->gameState == STATE_PRACTICE_LVL_SELECT) {
    text_pos.x = 320.0;
    text_pos.y = 200.0;
    text_pos.z = 0.0;
    if (this->stateTimer < 0x1e) {
      color = (this->stateTimer * 0xff) / 0x1e;
    }
    else {
      color = 0xff;
    }
    color_copy = color;
    charShotType = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (*(byte *)(charShotType * 0x18 + 0x69cce1 + g_GameManager.difficulty) < 7) {
      stage = (uint)*(byte *)(charShotType * 0x18 + 0x69cce1 + g_GameManager.difficulty);
    }
    else {
      stage = 6;
    }
    selected_stage = stage;
    if ((g_GameManager.difficulty == EASY) && (stage == 6)) {
      selected_stage = 5;
    }
    for (stage_num = 0; (int)stage_num < (int)selected_stage; stage_num = stage_num + 1) {
      if (stage_num == this->cursor) {
        g_AsciiManager.color = color_copy << 0x18 | 0xc0f0f0;
      }
      else {
        g_AsciiManager.color = ((uint)color_copy >> 1) << 0x18 | 0x80c0c0;
      }
      AsciiManager::AddFormatText
                (&g_AsciiManager,&text_pos,"STAGE %d  %.9d",stage_num + 1,
                 *(undefined4 *)
                  (charShotType * 0x1e0 + stage_num * 0x50 + 0x69cd3c +
                  g_GameManager.difficulty * 0x14));
      text_pos.y = text_pos.y + 24.0;
    }
    g_AsciiManager.color = 0xffffffff;
  }
  return ZUN_SUCCESS;
}

