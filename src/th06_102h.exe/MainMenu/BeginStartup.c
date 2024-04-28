
ZunResult __thiscall MainMenu::BeginStartup(MainMenu *this)

{
  D3DXVECTOR3 *pDVar1;
  ZunResult loadTitleAnm;
  ZunResult result;
  int i;
  DWORD time;
  
  loadTitleAnm = LoadTitleAnm(this);
  if (loadTitleAnm == ZUN_SUCCESS) {
    if (g_Supervisor.startup_time_for_menu_music != 0) {
      time = timeGetTime();
      while (time - g_Supervisor.startup_time_for_menu_music < 3000) {
        time = timeGetTime();
      }
      g_Supervisor.startup_time_for_menu_music = 0;
      Supervisor::PlayAudio(&g_Supervisor,"bgm/th06_01.mid");
    }
    for (i = 0; i < 122; i = i + 1) {
      this->vmList[i].pendingInterrupt = 1;
      *(uint *)&this->vmList[i].flags = *(uint *)&this->vmList[i].flags | 8;
      if ((g_Supervisor.cfg.opts & 1) == 0) {
        this->vmList[i].color.color = 0xff000000;
      }
      else {
        this->vmList[i].color.color = 0xffffffff;
      }
      pDVar1 = &this->vmList[i].offset;
      pDVar1->x = 0.0;
      pDVar1->y = 0.0;
      pDVar1->z = 0.0;
    }
    this->gameState = STATE_PRE_INPUT;
    result = ZUN_SUCCESS;
  }
  else {
    g_Supervisor.curState = 4;
    result = ZUN_ERROR;
  }
  return result;
}

