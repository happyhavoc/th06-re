
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall GameWindow::Render(GameWindow *this)

{
  double dVar1;
  bool bVar2;
  DWORD DVar3;
  double local_34;
  D3DVIEWPORT8 local_20;
  int local_8;
  
  if (this->activeapp_param != 0) {
    if (*(char *)&this->field4_0x10 != '\0') goto LAB_00420894;
    do {
      while( true ) {
        if (g_GameContext.cfg.frameskip_config <= *(byte *)&this->field4_0x10) {
          if (((uint)g_GameContext.cfg.render_opts >> 3 & 1 |
              (uint)g_GameContext.cfg.render_opts >> 4 & 1) != 0) {
            local_20.X = 0;
            local_20.Y = 0;
            local_20.Width = 0x280;
            local_20.Height = 0x1e0;
            local_20.MinZ = 0.0;
            local_20.MaxZ = 1.0;
            (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)(g_GameContext.d3d_device,&local_20);
            (*(g_GameContext.d3d_device)->lpVtbl->Clear)
                      (g_GameContext.d3d_device,0,(D3DRECT *)0x0,3,DAT_00487b60,1.0,0);
            (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
                      (g_GameContext.d3d_device,&g_GameContext.viewport);
          }
          (*(g_GameContext.d3d_device)->lpVtbl->BeginScene)(g_GameContext.d3d_device);
          UnkChain4((short *)&DAT_0069d918);
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
        local_8 = UnkChain3((short *)&DAT_0069d918);
        FUN_00431270(&SOUND_PLAYER);
        if (local_8 == 0) {
          return 1;
        }
        if (local_8 == -1) {
          return 2;
        }
        *(char *)&this->field4_0x10 = *(char *)&this->field4_0x10 + '\x01';
LAB_00420894:
        if (g_GameContext.cfg.windowed != false) break;
        if ((((uint)g_GameContext.cfg.render_opts >> 7 & 1) == 0) ||
           (g_GameContext.field149_0x1a0 == 0)) {
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
           (g_GameContext.field149_0x1a0 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0;
        }
        if (g_GameContext.cfg.frameskip_config < *(byte *)&this->field4_0x10) goto LAB_00420a0b;
        FUN_00420b50();
      }
      if (*(char *)&this->field4_0x10 == '\0') goto LAB_004209ab;
      DAT_006c6ec4 = 1.0;
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      dVar1 = (double)(ulonglong)DVar3;
      if (dVar1 < _DAT_006c6bf8 != (NAN(dVar1) || NAN(_DAT_006c6bf8))) {
        _DAT_006c6bf8 = dVar1;
      }
      local_34 = _fabs(dVar1 - _DAT_006c6bf8);
      timeEndPeriod(1);
      if (local_34 < 16.66666666666667) goto LAB_004209ab;
      do {
        _DAT_006c6bf8 = _DAT_006c6bf8 + 16.66666666666667;
        local_34 = local_34 - 16.66666666666667;
      } while (16.66666666666667 <= local_34);
    } while (*(byte *)&this->field4_0x10 <= g_GameContext.cfg.frameskip_config);
LAB_00420a0b:
    FUN_00420b50();
    if (NAN(DAT_006c6ec4) == (DAT_006c6ec4 == 0.0)) {
      DAT_006c6ec0 = DAT_006c6ec4;
    }
    else if (1 < DAT_006c6bf4) {
      timeBeginPeriod(1);
      DVar3 = timeGetTime();
      if (DVar3 < (uint)INT_006c6ebc) {
        INT_006c6ebc = DVar3;
      }
      dVar1 = ((((double)(ulonglong)(DVar3 - INT_006c6ebc) * 60.0) / 2.0) / 1000.0) /
              (double)(g_GameContext.cfg.frameskip_config + 1);
      if (dVar1 < 0.865) {
        if (dVar1 < 0.6) {
          DAT_006c6ec0 = 0.5;
        }
        else {
          DAT_006c6ec0 = 0.8;
        }
      }
      else {
        DAT_006c6ec0 = 1.0;
      }
      INT_006c6ebc = DVar3;
      timeEndPeriod(1);
      DAT_006c6bf4 = 0;
    }
    *(undefined *)&this->field4_0x10 = 0;
    DAT_006c6bf4 = DAT_006c6bf4 + 1;
  }
  return 0;
}

