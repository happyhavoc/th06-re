
ZunResult __thiscall MainMenu::WeirdSecondInputCheck(MainMenu *this)

{
  ZunResult result;
  int i;
  D3DXVECTOR3 *d3d_vec;
  
  if (this->stateTimer < 0x1e) {
    result = 1;
  }
  else if ((((g_CurFrameInput & 0x160b) == 0) ||
           ((g_CurFrameInput & 0x160b) == (g_LastFrameInput & 0x160b))) &&
          (((g_CurFrameInput & 0x160b) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
    result = 1;
  }
  else {
    this->stateTimer = 0;
    this->gameState = STATE_MAIN_MENU;
    for (i = 0; i < 122; i = i + 1) {
      this->vmList[i].pendingInterrupt = 2;
    }
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      this->vmList[this->cursor].color.color = 0xffff0000;
    }
    else {
      this->vmList[this->cursor].color.color = 0xffffe0e0;
    }
    d3d_vec = &this->vmList[this->cursor].pos2;
    d3d_vec->x = -6.0;
    d3d_vec->y = -6.0;
    d3d_vec->z = 0.0;
    this->minimumOpacity = 0;
    this->menuTextColor = 0x40000000;
    this->numFramesSinceActive = 0;
                    /* Seems to only get set once the current menu is active (aka the function has
                       been called), 0 when its not ready (loading, or on the title screen), and 60
                       when it is ready and active. */
    this->isActive = 60;
    result = ZUN_SUCCESS;
  }
  return result;
}

