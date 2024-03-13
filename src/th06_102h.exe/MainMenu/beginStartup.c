
ZunResult __fastcall MainMenu::beginStartup(MainMenu *menu)

{
  D3DXVECTOR3 *pDVar1;
  ZunResult loadTitleAnm;
  ZunResult result;
  int i;
  DWORD time;
  
  loadTitleAnm = MainMenu::loadTitleAnm(menu);
  if (loadTitleAnm == ZUN_SUCCESS) {
    if (g_Supervisor.startup_time_for_menu_music != 0) {
      time = timeGetTime();
      while (time - g_Supervisor.startup_time_for_menu_music < 3000) {
        time = timeGetTime();
      }
      g_Supervisor.startup_time_for_menu_music = 0;
      Supervisor::PlayAudio("bgm/th06_01.mid");
    }
    for (i = 0; i < 122; i = i + 1) {
      (&menu->vm1)[i].pendingInterrupt = 1;
      *(uint *)&(&menu->vm1)[i].flags = *(uint *)&(&menu->vm1)[i].flags | 8;
      if ((g_Supervisor.cfg.opts & 1) == 0) {
        (&menu->vm1)[i].color.color = 0xff000000;
      }
      else {
        (&menu->vm1)[i].color.color = 0xffffffff;
      }
      pDVar1 = &(&menu->vm1)[i].pos2;
      pDVar1->x = 0.0;
      pDVar1->y = 0.0;
      pDVar1->z = 0.0;
    }
    menu->gameState = STATE_PRE_INPUT;
    result = ZUN_SUCCESS;
  }
  else {
    g_Supervisor.curState = 4;
    result = ZUN_ERROR;
  }
  return result;
}

