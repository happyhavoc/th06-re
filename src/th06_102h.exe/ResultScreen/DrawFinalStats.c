
undefined4 __thiscall th06::ResultScreen::DrawFinalStats(ResultScreen *this)

{
  float completion;
  float local_20;
  D3DXVECTOR3 strPos;
  AnmVm *local_8;
  
  if ((0xe < this->resultScreenState) && (this->resultScreenState < 0x11)) {
    local_8 = &this->viewportMaybe;
    g_AsciiManager.color = (this->viewportMaybe).color.color;
    if ((int)g_GameManager.difficulty < 4) {
      completion = (float)g_GameManager.counat / 89500.0;
    }
    else {
      completion = (float)g_GameManager.counat / 39600.0;
    }
    strPos.z = (this->viewportMaybe).pos.z;
    strPos.x = (this->viewportMaybe).pos.x + 224.0;
    strPos.y = (this->viewportMaybe).pos.y + 32.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"%9d");
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddString
              (&g_AsciiManager,&strPos,(&PTR_s_Easy_00478504)[g_GameManager.difficulty]);
    strPos.y = strPos.y + 22.0;
    if ((g_GameManager.difficulty == EASY) || (g_GameManager.is_game_completed == 0)) {
      AsciiManager::AddFormatText
                (&g_AsciiManager,&strPos,"    %3.2f%%",(double)(completion * 100.0));
    }
    else {
      AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"      100%%");
    }
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"%9d",(uint)g_GameManager.num_retries);
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"%9d",g_GameManager.deaths);
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"%9d",g_GameManager.bombs_used);
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddFormatText(&g_AsciiManager,&strPos,"%9d",g_GameManager.spell_cards_captured);
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
    strPos.y = strPos.y + 22.0;
    AsciiManager::AddFormatText
              (&g_AsciiManager,&strPos,"    %3.2f%%",SUB84((double)((1.0 - local_20) * 100.0),0));
    g_AsciiManager.color = 0xffffffff;
  }
  return 0;
}

