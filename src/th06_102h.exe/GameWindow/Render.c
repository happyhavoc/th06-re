
undefined4 __thiscall GameWindow::Render(GameWindow *this)

{
  bool bVar1;
  DWORD delta;
  double local_34;
  D3DVIEWPORT8 viewport;
  int local_8;
  double slowDown;
  
  if (this->lastActiveAppValue != 0) {
    if (this->curFrame != 0) goto L3;
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
L3:
        if (g_Supervisor.cfg.windowed != false) break;
        if (((g_Supervisor.cfg.opts >> FORCE_60FPS & 1) == 0) || (g_Supervisor.vsyncEnabled == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) break;
L11:
        if (g_Supervisor.cfg.windowed != false) {
          return 0;
        }
        if (((g_Supervisor.cfg.opts >> FORCE_60FPS & 1) == 0) || (g_Supervisor.vsyncEnabled == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return 0;
        }
        if (g_Supervisor.cfg.frameskipConfig < this->curFrame) goto L15;
        Present();
      }
      if (this->curFrame == 0) goto L11;
      g_Supervisor.framerateMultiplier = 1.0;
      timeBeginPeriod(1);
      delta = timeGetTime();
      slowDown = (double)(ulonglong)delta;
      if (slowDown < g_LastFrameTime != (NAN(slowDown) || NAN(g_LastFrameTime))) {
        g_LastFrameTime = slowDown;
      }
      local_34 = _fabs(slowDown - g_LastFrameTime);
      timeEndPeriod(1);
      if (local_34 < 16.66666666666667) goto L11;
      do {
        g_LastFrameTime = g_LastFrameTime + 16.66666666666667;
        local_34 = local_34 - 16.66666666666667;
      } while (16.66666666666667 <= local_34);
    } while (this->curFrame <= g_Supervisor.cfg.frameskipConfig);
L15:
    Present();
    if (NAN(g_Supervisor.framerateMultiplier) == (g_Supervisor.framerateMultiplier == 0.0)) {
      g_Supervisor.effectiveFramerateMultiplier = g_Supervisor.framerateMultiplier;
    }
    else if (1 < (int)g_TickCountToEffectiveFramerate) {
      timeBeginPeriod(1);
      delta = timeGetTime();
      if (delta < g_Supervisor.lastFrameTime) {
        g_Supervisor.lastFrameTime = delta;
      }
      slowDown = ((((double)(ulonglong)(delta - g_Supervisor.lastFrameTime) * 60.0) / 2.0) / 1000.0)
                 / (double)(g_Supervisor.cfg.frameskipConfig + 1);
      if (slowDown < 0.865) {
        if (slowDown < 0.6) {
          g_Supervisor.effectiveFramerateMultiplier = 0.5;
        }
        else {
          g_Supervisor.effectiveFramerateMultiplier = 0.8;
        }
      }
      else {
        g_Supervisor.effectiveFramerateMultiplier = 1.0;
      }
      g_Supervisor.lastFrameTime = delta;
      timeEndPeriod(1);
      g_TickCountToEffectiveFramerate = 0;
    }
    this->curFrame = 0;
    g_TickCountToEffectiveFramerate = g_TickCountToEffectiveFramerate + 1;
  }
  return 0;
}

