
int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  AnmManager *_Memory;
  AnmManager *puVar1;
  BOOL BVar1;
  HRESULT HVar2;
  int retCode;
  AnmManager *vbsPtr;
  MSG msg;
  uint testCoopLevelRet;
  int renderRet;
  
  renderRet = 0;
  retCode = CheckForRunningGameInstance();
  if (retCode == 0) {
    g_GameContext.hInstance = hInstance;
    retCode = GameContext::Parse(&g_GameContext,"東方紅魔郷.cfg");
    if (retCode == 0) {
      retCode = InitD3dInterface();
      if (retCode == 0) {
        SystemParametersInfoA(SPI_GETSCREENSAVEACTIVE,0,&DAT_006c6be8,0);
        SystemParametersInfoA(SPI_GETLOWPOWERACTIVE,0,&DAT_006c6bec,0);
        SystemParametersInfoA(SPI_GETPOWEROFFACTIVE,0,&DAT_006c6bf0,0);
        SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,0,(PVOID)0x0,2);
        while( true ) {
          CreateGameWindow(hInstance);
          retCode = InitD3dRendering();
          if (retCode != 0) break;
          SoundPlayer::Init(&g_SoundPlayer,(HWND)g_GameWindow.window);
          GetJoystickCaps();
          ResetKeyboard();
          puVar1 = (AnmManager *)operator_new(0x2112c);
          if (puVar1 == (AnmManager *)0x0) {
            vbsPtr = (AnmManager *)0x0;
          }
          else {
            vbsPtr = AnmManager::AnmManager(puVar1);
          }
          g_AnmManager = vbsPtr;
          retCode = AddInputChain();
          if (retCode == 0) {
            if (g_GameContext.cfg.windowed == false) {
              ShowCursor(0);
            }
            g_GameWindow.curFrame = 0;
            do {
              while( true ) {
                while( true ) {
                  if (g_GameWindow.isAppClosing != 0) goto LAB_0042055a;
                  BVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
                  if (BVar1 == 0) break;
                  TranslateMessage(&msg);
                  DispatchMessageA(&msg);
                }
                HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->TestCooperativeLevel)
                                  (g_GameContext.d3dDevice);
                if (HVar2 == 0) break;
                if (HVar2 == D3DERR_DEVICENOTRESET) {
                  AnmManager::ReleaseD3dSurfaces(g_AnmManager);
                  HVar2 = (*(g_GameContext.d3dDevice)->lpVtbl->Reset)
                                    (g_GameContext.d3dDevice,&g_GameContext.presentParameters);
                  if (HVar2 != 0) goto LAB_0042055a;
                  InitD3dDevice();
                  g_GameContext.field77_0x198 = 3;
                }
              }
              renderRet = GameWindow::Render(&g_GameWindow);
            } while (renderRet == 0);
          }
LAB_0042055a:
          Chain::Release(&g_Chain);
          SoundPlayer::Release(&g_SoundPlayer);
          _Memory = g_AnmManager;
          if (g_AnmManager != (AnmManager *)0x0) {
            AnmManager::~AnmManager();
            _free(_Memory);
          }
          g_AnmManager = (AnmManager *)0x0;
          if (g_GameContext.d3dDevice != (IDirect3DDevice8 *)0x0) {
            (*(g_GameContext.d3dDevice)->lpVtbl->Release)(g_GameContext.d3dDevice);
            g_GameContext.d3dDevice = (IDirect3DDevice8 *)0x0;
          }
          ShowWindow((HWND)g_GameWindow.window,0);
          MoveWindow((HWND)g_GameWindow.window,0,0,0,0,0);
          DestroyWindow((HWND)g_GameWindow.window);
          if (renderRet != 2) {
            WriteConfigToFile("東方紅魔郷.cfg",&g_GameContext.cfg,0x38);
            SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,DAT_006c6be8,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,DAT_006c6bec,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,DAT_006c6bf0,(PVOID)0x0,2);
            if (g_GameContext.d3dIface != (IDirect3D8 *)0x0) {
              (*(g_GameContext.d3dIface)->lpVtbl->Release)(g_GameContext.d3dIface);
              g_GameContext.d3dIface = (IDirect3D8 *)0x0;
            }
            ShowCursor(1);
            GameErrorContext::Flush(&g_GameErrorContext);
            return 0;
          }
          g_GameErrorContext.m_BufferEnd = g_GameErrorContext.m_Buffer;
          g_GameErrorContext.m_Buffer[0] = '\0';
          GameErrorContextLog(&g_GameErrorContext,
                              "再起動を要するオプションが変更されたので再起動します\n"
                             );
          if (g_GameContext.cfg.windowed == false) {
            ShowCursor(1);
          }
        }
        GameErrorContext::Flush(&g_GameErrorContext);
        retCode = 1;
      }
      else {
        GameErrorContext::Flush(&g_GameErrorContext);
        retCode = 1;
      }
    }
    else {
      GameErrorContext::Flush(&g_GameErrorContext);
      retCode = -1;
    }
  }
  else {
    GameErrorContext::Flush(&g_GameErrorContext);
    retCode = 1;
  }
  return retCode;
}

