
undefined4 __fastcall MainMenu::FUN_004379e4(MainMenu *menu)

{
  undefined4 result;
  int i;
  D3DXVECTOR3 *d3d_vec;
  
  if (menu->gameSubState < 0x1e) {
    result = 1;
  }
  else if ((((g_CurFrameInput & 0x160b) == 0) ||
           ((g_CurFrameInput & 0x160b) == (g_LastFrameInput & 0x160b))) &&
          (((g_CurFrameInput & 0x160b) == 0 || (DAT_0069d90c == 0)))) {
    result = 1;
  }
  else {
    menu->gameSubState = 0;
    menu->gameState = STATE_2;
    for (i = 0; i < 122; i = i + 1) {
      menu->AnmVMArray[i].pendingInterrupt = 2;
    }
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      menu->AnmVMArray[menu->cursor].color.color = 0xffff0000;
    }
    else {
      menu->AnmVMArray[menu->cursor].color.color = 0xffffe0e0;
    }
    d3d_vec = &menu->AnmVMArray[menu->cursor].pos2;
    d3d_vec->x = -6.0;
    d3d_vec->y = -6.0;
    d3d_vec->z = 0.0;
    menu->unk_81fc = 0.0;
    menu->maybe_menu_text_color = 0x40000000;
    menu->unk_820c = 0;
                    /* Seems to only get set once the current menu is active (aka the function has
                       been called), 0 when its not ready (loading, or on the title screen), and 60
                       when it is ready and active. */
    menu->isActive = 60;
    result = 0;
  }
  return result;
}

