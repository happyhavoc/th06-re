
undefined4 InitD3dRendering(void)

{
  bool bVar1;
  HRESULT HVar2;
  int iVar3;
  undefined4 unaff_EBP;
  D3DPRESENT_PARAMETERS *pDVar4;
  D3DPRESENT_PARAMETERS *pDVar5;
  vec3f local_84;
  vec3f local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
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
  (*(g_GameContext.d3d_iface)->lpVtbl->GetAdapterDisplayMode)
            (g_GameContext.d3d_iface,0,&display_mode);
  if (g_GameContext.cfg.field14_0x1e == 0) {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 2 & 1) == 1) {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
      g_GameContext.cfg.field10_0x1a = 1;
    }
    else if (g_GameContext.cfg.field10_0x1a == 0xff) {
      if ((display_mode.Format == D3DFMT_X8R8G8B8) || (display_mode.Format == D3DFMT_A8R8G8B8)) {
        present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
        g_GameContext.cfg.field10_0x1a = 0;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 32Bits で初期化しました\n");
      }
      else {
        present_params.BackBufferFormat = D3DFMT_R5G6B5;
        g_GameContext.cfg.field10_0x1a = 1;
        GameErrorContextLog(&g_GameErrorContext,
                            "初回起動、画面を 16Bits で初期化しました\n");
      }
    }
    else if (g_GameContext.cfg.field10_0x1a == 0) {
      present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
    }
    else {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
    }
    if (((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) {
      present_params.FullScreen_PresentationInterval = 1;
    }
    else {
      present_params.FullScreen_RefreshRateInHz = 0x3c;
      present_params.FullScreen_PresentationInterval = 1;
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートを60Hzに変更します\n");
    }
    if (g_GameContext.cfg.field15_0x1f == 0) {
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
  present_params.BackBufferWidth = 0x280;
  present_params.BackBufferHeight = 0x1e0;
  present_params.EnableAutoDepthStencil = 1;
  present_params.AutoDepthStencilFormat = D3DFMT_D16;
  present_params.Flags = 1;
  DAT_006c7115 = 1;
  pDVar4 = &present_params;
  pDVar5 = &g_GameContext.present_parameters;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar5->BackBufferWidth = pDVar4->BackBufferWidth;
    pDVar4 = (D3DPRESENT_PARAMETERS *)&pDVar4->BackBufferHeight;
    pDVar5 = (D3DPRESENT_PARAMETERS *)&pDVar5->BackBufferHeight;
  }
  do {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 9 & 1) == 0) {
      HVar2 = (*(g_GameContext.d3d_iface)->lpVtbl->CreateDevice)
                        (g_GameContext.d3d_iface,0,D3DDEVTYPE_HAL,GAME_WINDOW.window,0x40,
                         &present_params,&g_GameContext.d3d_device);
      if (-1 < HVar2) {
        GameErrorContextLog(&g_GameErrorContext,"T&L HAL で動作しま〜す\n");
        DAT_006c7114 = 1;
        goto LAB_004211ab;
      }
      GameErrorContextLog(&g_GameErrorContext,"T&L HAL は使用できないようです\n");
      iVar3 = (*(g_GameContext.d3d_iface)->lpVtbl->CreateDevice)
                        (g_GameContext.d3d_iface,0,1,(HWND)GAME_WINDOW.window,0x20,
                         (int *)&present_params,&g_GameContext.d3d_device);
      if (iVar3 < 0) {
        GameErrorContextLog(&g_GameErrorContext,"HAL も使用できないようです\n");
        goto LAB_00421077;
      }
      GameErrorContextLog(&g_GameErrorContext,"HAL で動作します\n");
LAB_00421190:
      DAT_006c7114 = 0;
LAB_004211ab:
      local_58 = 320.0;
      local_54 = 240.0;
      local_5c = 1.333333;
      local_60 = 0.5235988;
      local_50 = fload_withFB(0);
      local_50 = local_54 / local_50;
      local_6c = 0;
      local_68 = 0x3f800000;
      local_64 = 0;
      local_78.x = local_58;
      local_78.y = -local_54;
      local_78.z = 0.0;
      local_84.x = local_58;
      local_84.y = -local_54;
      local_84.z = -local_50;
      _D3DXMatrixLookAtLH_16(&g_GameContext.view_matrix,&local_84,&local_78,&local_6c);
      _D3DXMatrixPerspectiveFovLH_20
                ((float *)&g_GameContext.projection_matrix,local_60,local_5c,100.0,10000.0);
      (*(g_GameContext.d3d_device)->lpVtbl->SetTransform)
                (g_GameContext.d3d_device,D3DTS_VIEW,&g_GameContext.view_matrix);
      (*(g_GameContext.d3d_device)->lpVtbl->SetTransform)
                (g_GameContext.d3d_device,D3DTS_PROJECTION,&g_GameContext.projection_matrix);
      (*(g_GameContext.d3d_device)->lpVtbl->GetViewport)
                (g_GameContext.d3d_device,&g_GameContext.viewport);
      (*(g_GameContext.d3d_device)->lpVtbl->GetDeviceCaps)(g_GameContext.d3d_device,&D3D_CAPS);
      if (((g_GameContext.cfg.field34_0x34 & 1U) == 0) && ((D3D_CAPS.TextureOpCaps & 0x40) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "D3DTEXOPCAPS_ADD をサポートしていません、色加算エミュレートモードで動作します\n"
                           );
        g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 | 1;
      }
      if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
         (g_GameContext.field149_0x1a0 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((D3D_CAPS.PresentationIntervals & 0x80000000) == 0)) {
        GameErrorContextLog(&g_GameErrorContext,
                            "ビデオカードが非同期フリップをサポートしていません、Force60Frameで動作できません\n"
                           );
        g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 & 0xffffff7f;
      }
      if ((((uint)g_GameContext.cfg.field34_0x34 >> 2 & 1) == 0) && ((local_5 & 0xff) != 0)) {
        HVar2 = (*(g_GameContext.d3d_iface)->lpVtbl->CheckDeviceFormat)
                          (g_GameContext.d3d_iface,0,D3DDEVTYPE_HAL,present_params.BackBufferFormat,
                           0,D3DRTYPE_TEXTURE,D3DFMT_A8R8G8B8);
        if (HVar2 == 0) {
          DAT_006c7116 = 1;
        }
        else {
          DAT_006c7116 = 0;
          g_GameContext.cfg.field34_0x34 = g_GameContext.cfg.field34_0x34 | 4;
          GameErrorContextLog(&g_GameErrorContext,
                              "D3DFMT_A8R8G8B8 をサポートしていません、減色モードで動作します\n"
                             );
        }
      }
      InitD3dDevice();
      SetViewport(0);
      GAME_WINDOW.is_app_closing = 0;
      INT_006c6ebc = 0;
      DAT_006c6ec4 = 0;
      return 0;
    }
LAB_00421077:
    HVar2 = (*(g_GameContext.d3d_iface)->lpVtbl->CreateDevice)
                      (g_GameContext.d3d_iface,0,D3DDEVTYPE_REF,GAME_WINDOW.window,0x20,
                       &present_params,&g_GameContext.d3d_device);
    if (-1 < HVar2) {
      GameErrorContextLog(&g_GameErrorContext,
                          "REF で動作しますが、重すぎて恐らくゲームになりません...\n"
                         );
      local_5 = local_5 & 0xffffff00;
      goto LAB_00421190;
    }
    if ((((uint)g_GameContext.cfg.field34_0x34 >> 7 & 1) == 0) ||
       (g_GameContext.field149_0x1a0 != 0)) {
      if (present_params.Flags != 1) {
        GameErrorContextFatal
                  (&g_GameErrorContext,
                   "Direct3D の初期化に失敗、これではゲームは出来ません\n");
        if (g_GameContext.d3d_iface != (IDirect3D8 *)0x0) {
          (*(g_GameContext.d3d_iface)->lpVtbl->Release)(g_GameContext.d3d_iface);
          g_GameContext.d3d_iface = (IDirect3D8 *)0x0;
        }
        return 1;
      }
      GameErrorContextLog(&g_GameErrorContext,
                          "バックバッファをロック不可能にしてみます\n");
      present_params.Flags = 0;
      DAT_006c7115 = 0;
    }
    else {
      GameErrorContextLog(&g_GameErrorContext,
                          "リフレッシュレートが変更できません、vsync 非同期に変更します\n"
                         );
      present_params.FullScreen_RefreshRateInHz = 0;
      g_GameContext.field149_0x1a0 = 1;
      present_params.FullScreen_PresentationInterval = 0x80000000;
    }
  } while( true );
}

