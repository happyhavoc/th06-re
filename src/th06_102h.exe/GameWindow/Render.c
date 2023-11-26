
undefined4 __thiscall GameWindow::Render(GameWindow *this)

{
  double dVar1;
  bool bVar2;
  DWORD DVar3;
  double local_34;
  D3DVIEWPORT8 viewport;
  int local_8;
  
  if (this->lastActiveAppValue != 0) {
    if (this->curFrame != 0) goto LAB_00420894;
    do {
      while( true ) {
        if (g_Supervisor.cfg.frameskipConfig <= this->curFrame) {
          if ((g_Supervisor.cfg.opts >> CLEAR_BACKBUFFER_ON_REFRESH & 1 |
              g_Supervisor.cfg.opts >> DISPLAY_MINIMUM_GRAPHICS & 1) != 0) {
            viewport.X = 0;
            viewport.Y = 0;
            viewport.Width = 640;
            viewport.Height = 480;
            viewport.MinZ = 0.0;
            viewport.MaxZ = 1.0;
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&viewport);
            (*(g_Supervisor.d3dDevice)->lpVtbl->Clear)
                      (g_Supervisor.d3dDevice,0,(D3DRECT *)0x0,3,g_Stage.skyFog.color,1.0,0);
            (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
                      (g_Supervisor.d3dDevice,&g_Supervisor.viewport);
          }
          (*(g_Supervisor.d3dDevice)->lpVtbl->BeginScene)(g_Supervisor.d3dDevice);
          Chain::RunDrawChain(&g_Chain);
          (*(g_Supervisor.d3dDevice)->lpVtbl->EndScene)(g_Supervisor.d3dDevice);
          (*(g_Supervisor.d3dDevice)->lpVtbl->SetTexture)
                    (g_Supervisor.d3dDevice,0,(IDirect3DBaseTexture8 *)0x0);
        }
        g_Supervisor.viewport.X = 0;
        g_Supervisor.viewport.Y = 0;
        g_Supervisor.viewport.Width = 640;
        g_Supervisor.viewport.Height = 480;
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)
                  (g_Supervisor.d3dDevice,&g_Supervisor.viewport);
        local_8 = Chain::RunCalcChain(&g_Chain);
        SoundPlayer::PlaySounds(&g_SoundPlayer);
        if (local_8 == 0) {
          return 1;
        }
        if (local_8 == -1) {
          return 2;
        }
        this->curFrame = this->curFrame + 1;
LAB_00420894:
        if (g_Supervisor.cfg.windowed != false) break;
        if (((g_Supervisor.cfg.opts >> 7 & 1) == 0) || (g_Supervisor.vsyncEnabled == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
LAB_004209ab:
        if (g_Supervisor.cfg.windowed != false) {
          return 0;
        }
        if (((g_Supervisor.cfg.opts >> 7 & 1) == 0) || (g_Supervisor.vsyncEnabled == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        if (g_Supervisor.cfg.frameskipConfig < this->curFrame) goto LAB_00420a0b;
        FUN_00420b50();
      }
      if (this->curFrame == 0) goto LAB_004209ab;
      g_Supervisor.framerateMultiplier = 1.0;
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      dVar1 = (double)(ulonglong)DVar3;
      if (dVar1 < DOUBLE_006c6bf8 != (NAN(dVar1) || NAN(DOUBLE_006c6bf8))) {
        DOUBLE_006c6bf8 = dVar1;
      }
      local_34 = _fabs(dVar1 - DOUBLE_006c6bf8);
      timeEndPeriod(1);
      if (local_34 < 16.66666666666667) goto LAB_004209ab;
      do {
        DOUBLE_006c6bf8 = DOUBLE_006c6bf8 + 16.66666666666667;
        local_34 = local_34 - 16.66666666666667;
      } while (16.66666666666667 <= local_34);
    } while (this->curFrame <= g_Supervisor.cfg.frameskipConfig);
LAB_00420a0b:
    FUN_00420b50();
    if (NAN(g_Supervisor.framerateMultiplier) == (g_Supervisor.framerateMultiplier == 0.0)) {
      g_Supervisor.field81_0x1a8 = g_Supervisor.framerateMultiplier;
    }
    else if (1 < (int)UINT_006c6bf4) {
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      if (DVar3 < (uint)g_Supervisor.lastFrameTime) {
        g_Supervisor.lastFrameTime = DVar3;
      }
      dVar1 = ((((double)(ulonglong)(DVar3 - g_Supervisor.lastFrameTime) * 60.0) / 2.0) / 1000.0) /
              (double)(g_Supervisor.cfg.frameskipConfig + 1);
      if (dVar1 < 0.865) {
        if (dVar1 < 0.6) {
          g_Supervisor.field81_0x1a8 = 0.5;
        }
        else {
          g_Supervisor.field81_0x1a8 = 0.8;
        }
      }
      else {
        g_Supervisor.field81_0x1a8 = 1.0;
      }
      g_Supervisor.lastFrameTime = DVar3;
      timeEndPeriod(1);
      UINT_006c6bf4 = 0;
    }
    this->curFrame = 0;
    UINT_006c6bf4 = UINT_006c6bf4 + 1;
  }
  return 0;
}

