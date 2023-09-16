
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 InitD3dRendering(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_EBP;
  D3DPRESENT_PARAMETERS *pDVar3;
  UINT *pUVar4;
  double dVar5;
  undefined2 extraout_ST0h;
  int *piVar6;
  undefined4 uVar7;
  undefined *puVar8;
  D3DXVECTOR3 pEye;
  D3DXVECTOR3 pAt;
  D3DXVECTOR3 pUp;
  D3DPRESENT_PARAMETERS present_params;
  undefined display_mode [12];
  D3DFORMAT DStack_c;
  uint local_5;
  undefined uStack_1;
  
  uStack_1 = (undefined)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,1);
                    /* memset(&present_params, 0, sizeof(D3DPRESENT_PARAMETERS)); */
  pDVar3 = &present_params;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    pDVar3->BackBufferWidth = 0;
    pDVar3 = (D3DPRESENT_PARAMETERS *)&pDVar3->BackBufferHeight;
  }
  (**(code **)(*DAT_006c6d1c + 0x20))(DAT_006c6d1c,0,display_mode);
  if (DAT_006c6e4a == '\0') {
    if ((DAT_006c6e60 >> 2 & 1) == 1) {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
      DAT_006c6e46 = '\x01';
    }
    else if (DAT_006c6e46 == -1) {
      if ((DStack_c == D3DFMT_X8R8G8B8) || (DStack_c == D3DFMT_A8R8G8B8)) {
        present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
        DAT_006c6e46 = '\0';
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "初回起動、画面を 32Bits で初期化しました\n");
      }
      else {
        present_params.BackBufferFormat = D3DFMT_R5G6B5;
        DAT_006c6e46 = '\x01';
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "初回起動、画面を 16Bits で初期化しました\n");
      }
    }
    else if (DAT_006c6e46 == '\0') {
      present_params.BackBufferFormat = D3DFMT_X8R8G8B8;
    }
    else {
      present_params.BackBufferFormat = D3DFMT_R5G6B5;
    }
    if ((DAT_006c6e60 >> 7 & 1) == 0) {
      present_params.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_ONE;
    }
    else {
      present_params.FullScreen_RefreshRateInHz = 60;
      present_params.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_ONE;
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "リフレッシュレートを60Hzに変更します\n");
    }
    if (DAT_006c6e4b == '\0') {
      present_params.SwapEffect = D3DSWAPEFFECT_FLIP;
    }
    else {
      present_params.SwapEffect = D3DSWAPEFFECT_COPY_VSYNC;
    }
  }
  else {
    present_params.BackBufferFormat = DStack_c;
    present_params.SwapEffect = D3DSWAPEFFECT_COPY;
    present_params.Windowed = 1;
  }
  present_params.BackBufferWidth = 640;
  present_params.BackBufferHeight = 480;
  present_params.EnableAutoDepthStencil = 1;
  present_params.AutoDepthStencilFormat = D3DFMT_D16;
  present_params.Flags = D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
  DAT_006c7115 = 1;
  pDVar3 = &present_params;
  pUVar4 = &DAT_006c6df8;
                    /* memcpy() */
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pUVar4 = pDVar3->BackBufferWidth;
    pDVar3 = (D3DPRESENT_PARAMETERS *)&pDVar3->BackBufferHeight;
    pUVar4 = pUVar4 + 1;
  }
  do {
    if ((DAT_006c6e60 >> REFERENCE_RASTERIZER_MODE & 1) == 0) {
      iVar2 = (**(code **)(*DAT_006c6d1c + 0x3c))
                        (DAT_006c6d1c,0,1,DAT_006c6bd4,D3DCREATE_HARDWARE_VERTEXPROCESSING,
                         &present_params);
      if (-1 < iVar2) {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,"T&L HAL で動作しま〜す\n");
        DAT_006c7114 = 1;
        goto LAB_004211ab;
      }
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "T&L HAL は使用できないようです\n");
      iVar2 = (**(code **)(*DAT_006c6d1c + 0x3c))
                        (DAT_006c6d1c,0,1,DAT_006c6bd4,D3DCREATE_SOFTWARE_VERTEXPROCESSING,
                         &present_params);
      if (iVar2 < 0) {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "HAL も使用できないようです\n");
        goto LAB_00421077;
      }
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,"HAL で動作します\n");
LAB_00421190:
      DAT_006c7114 = 0;
LAB_004211ab:
      dVar5 = fload_withFB(0x3fd0c15240000000);
      pUp.x = 0.0;
      pUp.y = 1.0;
      pUp.z = 0.0;
      pAt.x = 320.0;
      pAt.y = -240.0;
      pAt.z = 0.0;
      pEye.x = 320.0;
      pEye.y = -240.0;
      pEye.z = -(240.0 / (float)(float10)CONCAT28(extraout_ST0h,dVar5));
      _D3DXMatrixLookAtLH_16((D3DXMATRIX *)&DAT_006c6d60,&pEye,&pAt,&pUp);
      _D3DXMatrixPerspectiveFovLH_20((float *)&DAT_006c6da0,0.5235988,1.333333,100.0,10000.0);
      puVar8 = &DAT_006c6d60;
      uVar7 = 2;
      piVar6 = DAT_006c6d20;
      (**(code **)(*DAT_006c6d20 + 0x94))();
      (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,3,&DAT_006c6da0,piVar6,uVar7,puVar8);
      (**(code **)(*DAT_006c6d20 + 0xa4))(DAT_006c6d20,&DAT_006c6de0);
      (**(code **)(*DAT_006c6d20 + 0x1c))(DAT_006c6d20,&DAT_006c711c);
      if (((DAT_006c6e60 & 1) == 0) && ((DAT_006c71ac & D3DTEXOPCAPS_ADD) == 0)) {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "D3DTEXOPCAPS_ADD をサポートしていません、色加算エミュレートモードで動作します\n"
                           );
        DAT_006c6e60 = DAT_006c6e60 | 1;
      }
      if (((DAT_006c6e60 >> FORCE_60FPS & 1) == 0) || (_DAT_006c6eb8 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((DAT_006c7130 & D3DPRESENT_INTERVAL_IMMEDIATE) == 0)) {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "ビデオカードが非同期フリップをサポートしていません、Force60Frameで動作できません\n"
                           );
        DAT_006c6e60 = DAT_006c6e60 & 0xffffff7f;
      }
      if (((DAT_006c6e60 >> FORCE_16BIT_COLOR_MODE & 1) == 0) && ((local_5 & 0xff) != 0)) {
        iVar2 = (**(code **)(*DAT_006c6d1c + 0x28))
                          (DAT_006c6d1c,0,1,present_params.BackBufferFormat,0,3,0x15);
        if (iVar2 == 0) {
          DAT_006c7116 = 1;
        }
        else {
          DAT_006c7116 = 0;
          DAT_006c6e60 = DAT_006c6e60 | 4;
          GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                              "D3DFMT_A8R8G8B8 をサポートしていません、減色モードで動作します\n"
                             );
        }
      }
      InitD3dDevice();
      SetViewport(0);
      _DAT_006c6bd8 = 0;
      _DAT_006c6ebc = 0;
      DAT_006c6ec4 = 0;
      return 0;
    }
LAB_00421077:
    iVar2 = (**(code **)(*DAT_006c6d1c + 0x3c))
                      (DAT_006c6d1c,0,2,DAT_006c6bd4,D3DCREATE_SOFTWARE_VERTEXPROCESSING,
                       &present_params);
    if (-1 < iVar2) {
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "REF で動作しますが、重すぎて恐らくゲームになりません...\n"
                         );
      local_5 = local_5 & 0xffffff00;
      goto LAB_00421190;
    }
    if (((DAT_006c6e60 >> FORCE_60FPS & 1) == 0) || (_DAT_006c6eb8 != 0)) {
      if (present_params.Flags != 1) {
        GameErrorContextFatal
                  ((GameErrorContext *)&DAT_0069d998,
                   "Direct3D の初期化に失敗、これではゲームは出来ません\n");
        if (DAT_006c6d1c != (int *)0x0) {
          (**(code **)(*DAT_006c6d1c + 8))();
          DAT_006c6d1c = (int *)0x0;
        }
        return 1;
      }
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "バックバッ��ァをロック不可能にしてみます\n");
      present_params.Flags = 0;
      DAT_006c7115 = 0;
    }
    else {
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "リフレッシュレートが変更できません、vsync 非同期に変更します\n"
                         );
      present_params.FullScreen_RefreshRateInHz = 0;
      _DAT_006c6eb8 = 1;
      present_params.FullScreen_PresentationInterval = 0x80000000;
    }
  } while( true );
}

