
undefined4 InitD3dRendering(void)

{
  bool bVar1;
  HRESULT HVar2;
  int iVar3;
  undefined4 unaff_EBP;
  D3DPRESENT_PARAMETERS *pDVar4;
  D3DPRESENT_PARAMETERS *pDVar5;
  double dVar6;
  undefined2 extraout_ST0h;
  D3DXVECTOR3 pEye;
  D3DXVECTOR3 pAt;
  D3DXVECTOR3 pUp;
  D3DPRESENT_PARAMETERS present_params;
  D3DDISPLAYMODE display_mode;
  uint local_5;
  undefined uStack_1;
  
  uStack_1 = (undefined)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,1);
                    /* memset(&present_params, 0, sizeof(D3DPRESENT_PARAMETERS)); */
  pDVar4 = &present_params;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar4->BackBufferWidth = 0;
    pDVar4 = (D3DPRESENT_PARAMETERS *)&pDVar4->BackBufferHeight;
  }
  (*(g_GameContext.d3dIface)->lpVtbl->GetAdapterDisplayMode)(g_GameContext.d3dIface,0,&display_mode)
  ;
  if (g_GameContext.cfg.windowed == false) {
    if ((g_GameContext.cfg.opts >> 2 & 1) == 1) {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
      g_GameContext.cfg.colorMode16bit = 1;
    }
    else if (g_GameContext.cfg.colorMode16bit == 0xff) {
      if ((display_mode.Format == D3DFMT_X8R8G8B8) || (display_mode.Format == D3DFMT_A8R8G8B8)) {
        present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
        g_GameContext.cfg.colorMode16bit = 0;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 32Bits で初期化しました\n");
      }
      else {
        present_params.BackBufferFormat = D3DFMT_R5G6B5;
        g_GameContext.cfg.colorMode16bit = 1;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 16Bits で初期化しました\n");
      }
    }
    else if (g_GameContext.cfg.colorMode16bit == 0) {
      present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
    }
    else {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
    }
    if ((g_GameContext.cfg.opts >> 7 & 1) == 0) {
      present_params.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_ONE;
    }
    else {
      present_params.FullScreen_RefreshRateInHz = 60;
      present_params.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_ONE;
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートを60Hzに変更します\n");
    }
    if (g_GameContext.cfg.frameskipConfig == 0) {
      present_params.SwapEffect = D3DSWAPEFFECT_FLIP;
    }
    else {
      present_params.SwapEffect = D3DSWAPEFFECT_COPY_VSYNC;
    }
  }
  else {
    present_params.BackBufferFormat = display_mode.Format;
    present_params.SwapEffect = D3DSWAPEFFECT_COPY;
    present_params.Windowed = 1;
  }
  present_params.BackBufferWidth = 640;
  present_params.BackBufferHeight = 480;
  present_params.EnableAutoDepthStencil = 1;
  present_params.AutoDepthStencilFormat = D3DFMT_D16;
  present_params.Flags = D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
  g_GameContext.lockableBackbuffer = 1;
  pDVar4 = &present_params;
  pDVar5 = &g_GameContext.presentParameters;
                    /* memcpy() */
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar5->BackBufferWidth = pDVar4->BackBufferWidth;
    pDVar4 = (D3DPRESENT_PARAMETERS *)&pDVar4->BackBufferHeight;
    pDVar5 = (D3DPRESENT_PARAMETERS *)&pDVar5->BackBufferHeight;
  }
  do {
    if ((g_GameContext.cfg.opts >> REFERENCE_RASTERIZER_MODE & 1) == 0) {
      HVar2 = (*(g_GameContext.d3dIface)->lpVtbl->CreateDevice)
                        (g_GameContext.d3dIface,0,D3DDEVTYPE_HAL,g_GameWindow.window,
                         D3DCREATE_HARDWARE_VERTEXPROCESSING,&present_params,
                         &g_GameContext.d3dDevice);
      if (-1 < HVar2) {
        GameErrorContextLog(&g_GameErrorContext,"T&L HAL で動作しま〜す\n");
        g_GameContext.hasD3dHardwareVertexProcessing = 1;
        goto LAB_004211ab;
      }
      GameErrorContextLog(&g_GameErrorContext,"T&L HAL は使用できないようです\n");
      HVar2 = (*(g_GameContext.d3dIface)->lpVtbl->CreateDevice)
                        (g_GameContext.d3dIface,0,D3DDEVTYPE_HAL,g_GameWindow.window,
                         D3DCREATE_SOFTWARE_VERTEXPROCESSING,&present_params,
                         &g_GameContext.d3dDevice);
      if (HVar2 < 0) {
        GameErrorContextLog(&g_GameErrorContext,"HAL も使用できないようです\n");
        goto LAB_00421077;
      }
      GameErrorContextLog(&g_GameErrorContext,"HAL で動作します\n");
LAB_00421190:
      g_GameContext.hasD3dHardwareVertexProcessing = 0;
LAB_004211ab:
      dVar6 = fload_withFB(0x3fd0c15240000000);
      pUp.x = 0.0;
      pUp.y = 1.0;
      pUp.z = 0.0;
      pAt.x = 320.0;
      pAt.y = -240.0;
      pAt.z = 0.0;
      pEye.x = 320.0;
      pEye.y = -240.0;
      pEye.z = -(240.0 / (float)(float10)CONCAT28(extraout_ST0h,dVar6));
      _D3DXMatrixLookAtLH_16(&g_GameContext.viewMatrix,&pEye,&pAt,&pUp);
      _D3DXMatrixPerspectiveFovLH_20
                ((float *)&g_GameContext.projectionMatrix,0.5235988,1.333333,100.0,10000.0);
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
                (g_GameContext.d3dDevice,D3DTS_VIEW,&g_GameContext.viewMatrix);
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
                (g_GameContext.d3dDevice,D3DTS_PROJECTION,&g_GameContext.projectionMatrix);
      (*(g_GameContext.d3dDevice)->lpVtbl->GetViewport)
                (g_GameContext.d3dDevice,&g_GameContext.viewport);
      (*(g_GameContext.d3dDevice)->lpVtbl->GetDeviceCaps)
                (g_GameContext.d3dDevice,&g_GameContext.d3dCaps);
      if (((g_GameContext.cfg.opts & 1) == 0) &&
         ((g_GameContext.d3dCaps.TextureOpCaps & D3DTEXOPCAPS_ADD) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "D3DTEXOPCAPS_ADD をサポートしていません、色加算エミュレートモードで動作します\n"
                           );
        g_GameContext.cfg.opts = g_GameContext.cfg.opts | 1;
      }
      if (((g_GameContext.cfg.opts >> FORCE_60FPS & 1) == 0) || (g_GameContext.vsyncEnabled == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         ((g_GameContext.d3dCaps.PresentationIntervals & D3DPRESENT_INTERVAL_IMMEDIATE) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "ビデオカードが非同期フリップをサポートしていません、Force60Frameで動作できません\n"
                           );
        g_GameContext.cfg.opts = g_GameContext.cfg.opts & 0xffffff7f;
      }
      if (((g_GameContext.cfg.opts >> FORCE_16BIT_COLOR_MODE & 1) == 0) && ((local_5 & 0xff) != 0))
      {
        HVar2 = (*(g_GameContext.d3dIface)->lpVtbl->CheckDeviceFormat)
                          (g_GameContext.d3dIface,0,D3DDEVTYPE_HAL,present_params.BackBufferFormat,0
                           ,D3DRTYPE_TEXTURE,D3DFMT_A8R8G8B8);
        if (HVar2 == 0) {
          g_GameContext.colorMode16Bits = 1;
        }
        else {
          g_GameContext.colorMode16Bits = 0;
          g_GameContext.cfg.opts = g_GameContext.cfg.opts | 4;
          GameErrorContextLog(&g_GameErrorContext,
                              "D3DFMT_A8R8G8B8 をサポートしていません、減色モードで動作します\n"
                             );
        }
      }
      InitD3dDevice();
      SetViewport(0);
      g_GameWindow.isAppClosing = 0;
      g_GameContext.lastFrameTime = 0;
      g_GameContext.framerateMultiplier = 0.0;
      return 0;
    }
LAB_00421077:
    HVar2 = (*(g_GameContext.d3dIface)->lpVtbl->CreateDevice)
                      (g_GameContext.d3dIface,0,D3DDEVTYPE_REF,g_GameWindow.window,
                       D3DCREATE_SOFTWARE_VERTEXPROCESSING,&present_params,&g_GameContext.d3dDevice)
    ;
    if (-1 < HVar2) {
      GameErrorContextLog(&g_GameErrorContext,
                          "REF で動作しますが、重すぎて恐らくゲームになりません...\n"
                         );
      local_5 = local_5 & 0xffffff00;
      goto LAB_00421190;
    }
    if (((g_GameContext.cfg.opts >> FORCE_60FPS & 1) == 0) || (g_GameContext.vsyncEnabled != 0)) {
      if (present_params.Flags != 1) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "Direct3D の初期化に失敗、これではゲームは出来ません\n");
        if (g_GameContext.d3dIface != (IDirect3D8 *)0x0) {
          (*(g_GameContext.d3dIface)->lpVtbl->Release)(g_GameContext.d3dIface);
          g_GameContext.d3dIface = (IDirect3D8 *)0x0;
        }
        return 1;
      }
      GameErrorContextLog(&g_GameErrorContext,
                          "バックバッファをロック不可能にしてみます\n");
      present_params.Flags = 0;
      g_GameContext.lockableBackbuffer = 0;
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートが変更できません、vsync 非同期に変更します\n"
                         );
      present_params.FullScreen_RefreshRateInHz = 0;
      g_GameContext.vsyncEnabled = 1;
      present_params.FullScreen_PresentationInterval = 0x80000000;
    }
  } while( true );
}

