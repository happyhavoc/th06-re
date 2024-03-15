
int __thiscall MainMenu::FUN_004379e4(MainMenu *this)

{
  int result;
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
      (&this->vm1)[i].pendingInterrupt = 2;
    }
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      (&this->vm1)[this->cursor].color.color = 0xffff0000;
    }
    else {
      (&this->vm1)[this->cursor].color.color = 0xffffe0e0;
    }
    d3d_vec = &(&this->vm1)[this->cursor].pos2;
    d3d_vec->x = -6.0;
    d3d_vec->y = -6.0;
    d3d_vec->z = 0.0;
    this->unk_81fc = 0.0;
    this->maybe_menu_text_color = 0x40000000;
    this->unk_820c = 0;
                    /* Seems to only get set once the current menu is active (aka the function has
                       been called), 0 when its not ready (loading, or on the title screen), and 60
                       when it is ready and active. */
    this->isActive = 60;
    result = 0;
  }
  return result;
}

