
undefined4 __thiscall GameWindow::Render(GameWindow *this)

{
  double dVar1;
  bool bVar2;
  DWORD DVar3;
  double local_34;
  D3DVIEWPORT8 viewport;
  int local_8;
  
  if (this->activeapp_param != 0) {
    if (this->field4_0x10 != 0) goto LAB_00420894;
    do {
      while( true ) {
        if (g_GameContext.cfg.frameskip_config <= this->field4_0x10) {
          if (((uint)g_GameContext.cfg.render_opts >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
              (uint)g_GameContext.cfg.render_opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0) {
            viewport.X = 0;
            viewport.Y = 0;
            viewport.Width = 0x280;
            viewport.Height = 0x1e0;
            viewport.MinZ = 0.0;
            viewport.MaxZ = 1.0;
            (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)(g_GameContext.d3d_device,&viewport);
            (*(g_GameContext.d3d_device)->lpVtbl->Clear)
                      (g_GameContext.d3d_device,0,(D3DRECT *)0x0,3,DAT_00487b60,1.0,0);
            (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
                      (g_GameContext.d3d_device,&g_GameContext.viewport);
          }
          (*(g_GameContext.d3d_device)->lpVtbl->BeginScene)(g_GameContext.d3d_device);
          RunDrawChain(&CHAIN);
          (*(g_GameContext.d3d_device)->lpVtbl->EndScene)(g_GameContext.d3d_device);
          (*(g_GameContext.d3d_device)->lpVtbl->SetTexture)
                    (g_GameContext.d3d_device,0,(IDirect3DBaseTexture8 *)0x0);
        }
        g_GameContext.viewport.X = 0;
        g_GameContext.viewport.Y = 0;
        g_GameContext.viewport.Width = 0x280;
        g_GameContext.viewport.Height = 0x1e0;
        (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
                  (g_GameContext.d3d_device,&g_GameContext.viewport);
        local_8 = RunCalcChain(&CHAIN);
        playSounds(&SOUND_PLAYER);
        if (local_8 == 0) {
          return 1;
        }
        if (local_8 == -1) {
          return 2;
        }
        this->field4_0x10 = this->field4_0x10 + 1;
LAB_00420894:
        if (g_GameContext.cfg.windowed != false) break;
        if ((((uint)g_GameContext.cfg.render_opts >> 7 & 1) == 0) ||
           (g_GameContext.field85_0x1a0 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
LAB_004209ab:
        if (g_GameContext.cfg.windowed != false) {
          return 0;
        }
        if ((((uint)g_GameContext.cfg.render_opts >> 7 & 1) == 0) ||
           (g_GameContext.field85_0x1a0 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        if (g_GameContext.cfg.frameskip_config < this->field4_0x10) goto LAB_00420a0b;
        FUN_00420b50();
      }
      if (this->field4_0x10 == 0) goto LAB_004209ab;
      g_GameContext._428_4_ = 0x3f800000;
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      dVar1 = (double)(ulonglong)DVar3;
      if (dVar1 < LAST_FRAME_TIME != (NAN(dVar1) || NAN(LAST_FRAME_TIME))) {
        LAST_FRAME_TIME = dVar1;
      }
      local_34 = _fabs(dVar1 - LAST_FRAME_TIME);
      timeEndPeriod(1);
      if (local_34 < 16.66666666666667) goto LAB_004209ab;
      do {
        LAST_FRAME_TIME = LAST_FRAME_TIME + 16.66666666666667;
        local_34 = local_34 - 16.66666666666667;
      } while (16.66666666666667 <= local_34);
    } while (this->field4_0x10 <= g_GameContext.cfg.frameskip_config);
LAB_00420a0b:
    FUN_00420b50();
    if (NAN((float)g_GameContext._428_4_) == ((float)g_GameContext._428_4_ == 0.0)) {
      g_GameContext._424_4_ = g_GameContext._428_4_;
    }
    else if (1 < DAT_006c6bf4) {
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      if (DVar3 < (uint)g_GameContext._420_4_) {
        g_GameContext._420_4_ = DVar3;
      }
      dVar1 = ((((double)(ulonglong)(DVar3 - g_GameContext._420_4_) * 60.0) / 2.0) / 1000.0) /
              (double)(g_GameContext.cfg.frameskip_config + 1);
      if (dVar1 < 0.865) {
        if (dVar1 < 0.6) {
          g_GameContext._424_4_ = 0x3f000000;
        }
        else {
          g_GameContext._424_4_ = 0x3f4ccccd;
        }
      }
      else {
        g_GameContext._424_4_ = 0x3f800000;
      }
      g_GameContext._420_4_ = DVar3;
      timeEndPeriod(1);
      DAT_006c6bf4 = 0;
    }
    this->field4_0x10 = 0;
    DAT_006c6bf4 = DAT_006c6bf4 + 1;
  }
  return 0;
}

