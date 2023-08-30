
int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  VeryBigStruct *_Memory;
  VeryBigStruct *puVar1;
  BOOL BVar1;
  HRESULT HVar2;
  int retCode;
  VeryBigStruct *local_58;
  tagMSG local_28;
  HRESULT local_c;
  int local_8;
  
  local_8 = 0;
  retCode = CheckForRunningGameInstance();
  if (retCode == 0) {
    g_GameContext.hInstance = hInstance;
    retCode = GameContext::Parse(&g_GameContext,"東方紅魔郷.cfg");
    if (retCode == 0) {
      retCode = InitD3dInterface();
      if (retCode == 0) {
        SystemParametersInfoA(SPI_GETSCREENSAVEACTIVE,0,&g_SCREEN_SAVE_ACTIVE,0);
        SystemParametersInfoA(SPI_GETLOWPOWERACTIVE,0,&g_LOW_POWER_ACTIVE,0);
        SystemParametersInfoA(SPI_GETPOWEROFFACTIVE,0,&g_POWER_OFF_ACTIVE,0);
        SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,0,(PVOID)0x0,2);
        while( true ) {
          CreateGameWindow(hInstance);
          retCode = InitD3dRendering();
          if (retCode != 0) break;
          SoundPlayer::InitSound(&g_SoundPlayer,(HWND)g_GameWindow.window);
          GetJoystickCaps();
          ResetKeyboard();
          puVar1 = (VeryBigStruct *)operator_new(0x2112c);
          if (puVar1 == (VeryBigStruct *)0x0) {
            local_58 = (VeryBigStruct *)0x0;
          }
          else {
            local_58 = (VeryBigStruct *)VeryBigStruct::Init(puVar1);
          }
          VERY_BIG_STRUCT = local_58;
          retCode = AddInputChain();
          if (retCode == 0) {
            if (g_GameContext.cfg.windowed == false) {
              ShowCursor(0);
            }
            g_GameWindow.field4_0x10 = 0;
            do {
              while( true ) {
                while( true ) {
                  if (g_GameWindow.is_app_closing != 0) goto LAB_0042055a;
                  BVar1 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
                  if (BVar1 == 0) break;
                  TranslateMessage(&local_28);
                  DispatchMessageA(&local_28);
                }
                local_c = (*(g_GameContext.d3d_device)->lpVtbl->TestCooperativeLevel)
                                    (g_GameContext.d3d_device);
                if (local_c == 0) break;
                if (local_c == -0x7789f797) {
                  FUN_004219d0(VERY_BIG_STRUCT);
                  HVar2 = (*(g_GameContext.d3d_device)->lpVtbl->Reset)
                                    (g_GameContext.d3d_device,&g_GameContext.presentParameters);
                  if (HVar2 != 0) goto LAB_0042055a;
                  InitD3dDevice();
                  g_GameContext._408_4_ = 3;
                }
              }
              local_8 = GameWindow::Render(&g_GameWindow);
            } while (local_8 == 0);
          }
LAB_0042055a:
          Chain::Release(&CHAIN);
          SoundPlayer::Release(&g_SoundPlayer);
          _Memory = VERY_BIG_STRUCT;
          if (VERY_BIG_STRUCT != (VeryBigStruct *)0x0) {
            FUN_00423330();
            _free(_Memory);
          }
          VERY_BIG_STRUCT = (VeryBigStruct *)0x0;
          if (g_GameContext.d3d_device != (IDirect3DDevice8 *)0x0) {
            (*(g_GameContext.d3d_device)->lpVtbl->Release)(g_GameContext.d3d_device);
            g_GameContext.d3d_device = (IDirect3DDevice8 *)0x0;
          }
          ShowWindow((HWND)g_GameWindow.window,0);
          MoveWindow((HWND)g_GameWindow.window,0,0,0,0,0);
          DestroyWindow((HWND)g_GameWindow.window);
          if (local_8 != 2) {
            WriteConfigToFile("東方紅魔郷.cfg",&g_GameContext.cfg,0x38);
            SystemParametersInfoA(0x11,g_SCREEN_SAVE_ACTIVE,(PVOID)0x0,2);
            SystemParametersInfoA(0x55,g_LOW_POWER_ACTIVE,(PVOID)0x0,2);
            SystemParametersInfoA(0x56,g_POWER_OFF_ACTIVE,(PVOID)0x0,2);
            if (g_GameContext.d3d_iface != (IDirect3D8 *)0x0) {
              (*(g_GameContext.d3d_iface)->lpVtbl->Release)(g_GameContext.d3d_iface);
              g_GameContext.d3d_iface = (IDirect3D8 *)0x0;
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

