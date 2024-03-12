
ZunResult MainMenu::MoveCursor(MainMenu *menu,int menu_length)

{
  ZunResult result;
  
  if ((((g_CurFrameInput & 0x10) == 0) || ((g_CurFrameInput & 0x10) == (g_LastFrameInput & 0x10)))
     && (((g_CurFrameInput & 0x10) == 0 || (DAT_0069d90c == 0)))) {
    if ((((g_CurFrameInput & 0x20) == 0) || ((g_CurFrameInput & 0x20) == (g_LastFrameInput & 0x20)))
       && (((g_CurFrameInput & 0x20) == 0 || (DAT_0069d90c == 0)))) {
      result = ZUN_SUCCESS;
    }
    else {
      menu->cursor = menu->cursor + 1;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
      if (menu->cursor < 0) {
        menu->cursor = menu_length + -1;
      }
      if (menu_length <= menu->cursor) {
        menu->cursor = 0;
      }
      result = 1;
    }
  }
  else {
    menu->cursor = menu->cursor + -1;
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
    if (menu->cursor < 0) {
      menu->cursor = menu_length + -1;
    }
    if (menu_length <= menu->cursor) {
      menu->cursor = 0;
    }
    result = ZUN_ERROR;
  }
  return result;
}

