
int th06::WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  AnmManager *pAVar1;
  RenderResult RVar2;
  ZunResult ZVar3;
  BOOL BVar4;
  uint uVar5;
  AnmManager *puVar1;
  BOOL gotMessage;
  HRESULT HVar6;
  undefined3 extraout_var;
  int retCode;
  AnmManager *vbsPtr;
  MSG msg;
  uint testCoopLevelRet;
  int renderRet;
  
  renderRet = 0;
  retCode = CheckForRunningGameInstance();
  if (retCode == 0) {
    g_Supervisor.hInstance = hInstance;
    ZVar3 = Supervisor::LoadConfig(&g_Supervisor,"東方紅魔郷.cfg");
    if (ZVar3 == ZUN_SUCCESS) {
      BVar4 = InitD3dInterface();
      if (BVar4 == 0) {
        SystemParametersInfoA(SPI_GETSCREENSAVEACTIVE,0,&g_GameWindow.screen_save_active,0);
        SystemParametersInfoA(SPI_GETLOWPOWERACTIVE,0,&g_GameWindow.low_power_active,0);
        SystemParametersInfoA(SPI_GETPOWEROFFACTIVE,0,&g_GameWindow.power_off_active,0);
        SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,0,(PVOID)0x0,2);
        uVar5 = SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,0,(PVOID)0x0,2);
        while( true ) {
          CreateGameWindow((HINSTANCE)hInstance);
          InitD3dRendering();
          if (uVar5 != 0) break;
          SoundPlayer::InitializeDSound(&g_SoundPlayer,(HWND)g_GameWindow.window);
          GetJoystickCaps();
          ResetKeyboard();
          puVar1 = (AnmManager *)operator_new(0x2112c);
          if (puVar1 == (AnmManager *)0x0) {
            vbsPtr = (AnmManager *)0x0;
          }
          else {
            vbsPtr = AnmManager::AnmManager((AnmManager *)puVar1);
          }
          g_AnmManager = vbsPtr;
          ZVar3 = Supervisor::RegisterChain();
          if (ZVar3 == ZUN_SUCCESS) {
            if (g_Supervisor.cfg.windowed == false) {
              ShowCursor(0);
            }
            g_GameWindow.curFrame = 0;
            do {
              while( true ) {
                while( true ) {
                  if (g_GameWindow.isAppClosing != 0) goto LAB_0042055a;
                  gotMessage = PeekMessageA(&msg,(HWND)0x0,0,0,1);
                  if (gotMessage == 0) break;
                  TranslateMessage(&msg);
                  DispatchMessageA(&msg);
                }
                HVar6 = (*(g_Supervisor.d3dDevice)->lpVtbl->TestCooperativeLevel)
                                  (g_Supervisor.d3dDevice);
                if (HVar6 == D3D_OK) break;
                if (HVar6 == D3DERR_DEVICENOTRESET) {
                  AnmManager::ReleaseSurfaces((AnmManager *)g_AnmManager);
                  HVar6 = (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
                                    (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
                  if (HVar6 != 0) goto LAB_0042055a;
                  InitD3dDevice();
                  g_Supervisor.unk198 = 3;
                }
              }
              RVar2 = GameWindow::Render(&g_GameWindow);
              renderRet = CONCAT31(extraout_var,RVar2);
            } while (renderRet == 0);
          }
LAB_0042055a:
          Chain::Release(&g_Chain);
          SoundPlayer::Release(&g_SoundPlayer);
          pAVar1 = g_AnmManager;
          if (g_AnmManager != (AnmManager *)0x0) {
            AnmManager::~AnmManager((AnmManager *)g_AnmManager);
            operator_delete(pAVar1);
          }
          g_AnmManager = (AnmManager *)0x0;
          if (g_Supervisor.d3dDevice != (IDirect3DDevice8 *)0x0) {
            (*(g_Supervisor.d3dDevice)->lpVtbl->Release)(g_Supervisor.d3dDevice);
            g_Supervisor.d3dDevice = (IDirect3DDevice8 *)0x0;
          }
          ShowWindow((HWND)g_GameWindow.window,0);
          MoveWindow((HWND)g_GameWindow.window,0,0,0,0,0);
          DestroyWindow((HWND)g_GameWindow.window);
          if (renderRet != 2) {
            FileSystem::WriteDataToFile("東方紅魔郷.cfg",&g_Supervisor.cfg,0x38);
            SystemParametersInfoA
                      (SPI_SETSCREENSAVEACTIVE,g_GameWindow.screen_save_active,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,g_GameWindow.low_power_active,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,g_GameWindow.power_off_active,(PVOID)0x0,2);
            if (g_Supervisor.d3dIface != (IDirect3D8 *)0x0) {
              (*(g_Supervisor.d3dIface)->lpVtbl->Release)(g_Supervisor.d3dIface);
              g_Supervisor.d3dIface = (IDirect3D8 *)0x0;
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
          uVar5 = (uint)g_Supervisor.cfg.windowed;
          if (uVar5 == 0) {
            uVar5 = ShowCursor(1);
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

