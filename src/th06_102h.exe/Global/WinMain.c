
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    DAT_006c6d18 = hInstance;
    retCode = GameContext::Parse((GameContext *)&DAT_006c6d18,"東方紅魔郷.cfg");
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
          SoundPlayer::Init((SoundPlayer *)&DAT_006d3f50,DAT_006c6bd4);
          GetJoystickCaps();
          ResetKeyboard();
          puVar1 = (AnmManager *)operator_new(0x2112c);
          if (puVar1 == (AnmManager *)0x0) {
            vbsPtr = (AnmManager *)0x0;
          }
          else {
            vbsPtr = (AnmManager *)AnmManager::AnmManager(puVar1);
          }
          DAT_006d4588 = vbsPtr;
          retCode = AddInputChain();
          if (retCode == 0) {
            if (DAT_006c6e4a == '\0') {
              ShowCursor(0);
            }
            DAT_006c6be4 = 0;
            do {
              while( true ) {
                while( true ) {
                  if (_DAT_006c6bd8 != 0) goto LAB_0042055a;
                  BVar1 = PeekMessageA(&msg,(HWND)0x0,0,0,1);
                  if (BVar1 == 0) break;
                  TranslateMessage(&msg);
                  DispatchMessageA(&msg);
                }
                HVar2 = (*DAT_006c6d20->lpVtbl->TestCooperativeLevel)(DAT_006c6d20);
                if (HVar2 == 0) break;
                if (HVar2 == D3DERR_DEVICENOTRESET) {
                  AnmManager::ReleaseD3dSurfaces(DAT_006d4588);
                  HVar2 = (*DAT_006c6d20->lpVtbl->Reset)
                                    (DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
                  if (HVar2 != 0) goto LAB_0042055a;
                  InitD3dDevice();
                  DAT_006c6eb0 = 3;
                }
              }
              renderRet = GameWindow::Render((GameWindow *)&DAT_006c6bd4);
            } while (renderRet == 0);
          }
LAB_0042055a:
          Chain::Release((Chain *)&DAT_0069d918);
          SoundPlayer::Release((SoundPlayer *)&DAT_006d3f50);
          _Memory = DAT_006d4588;
          if (DAT_006d4588 != (AnmManager *)0x0) {
            AnmManager::~AnmManager();
            _free(_Memory);
          }
          DAT_006d4588 = (AnmManager *)0x0;
          if (DAT_006c6d20 != (IDirect3DDevice8 *)0x0) {
            (*DAT_006c6d20->lpVtbl->Release)(DAT_006c6d20);
            DAT_006c6d20 = (IDirect3DDevice8 *)0x0;
          }
          ShowWindow(DAT_006c6bd4,0);
          MoveWindow(DAT_006c6bd4,0,0,0,0,0);
          DestroyWindow(DAT_006c6bd4);
          if (renderRet != 2) {
            WriteConfigToFile("東方紅魔郷.cfg",&DAT_006c6e2c,0x38);
            SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,DAT_006c6be8,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,DAT_006c6bec,(PVOID)0x0,2);
            SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,DAT_006c6bf0,(PVOID)0x0,2);
            if (DAT_006c6d1c != (int *)0x0) {
              (**(code **)(*DAT_006c6d1c + 8))(DAT_006c6d1c);
              DAT_006c6d1c = (int *)0x0;
            }
            ShowCursor(1);
            GameErrorContext::Flush((GameErrorContext *)&DAT_0069d998);
            return 0;
          }
          DAT_0069e198 = &DAT_0069d998;
          DAT_0069d998 = 0;
          GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                              "再起動を要するオプションが変更されたので再起動します\n"
                             );
          if (DAT_006c6e4a == '\0') {
            ShowCursor(1);
          }
        }
        GameErrorContext::Flush((GameErrorContext *)&DAT_0069d998);
        retCode = 1;
      }
      else {
        GameErrorContext::Flush((GameErrorContext *)&DAT_0069d998);
        retCode = 1;
      }
    }
    else {
      GameErrorContext::Flush((GameErrorContext *)&DAT_0069d998);
      retCode = -1;
    }
  }
  else {
    GameErrorContext::Flush((GameErrorContext *)&DAT_0069d998);
    retCode = 1;
  }
  return retCode;
}

