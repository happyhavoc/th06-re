
LRESULT WindowProc(HWND hWnd,uint uMsg,WPARAM wParam,LPMIDIHDR lParam)

{
  HCURSOR pHVar1;
  LRESULT LVar2;
  
  if (uMsg < 0x21) {
    if (uMsg == WM_SETCURSOR) {
      if (g_GameContext.cfg.windowed) {
        pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar1);
        ShowCursor(1);
      }
      else if (g_GameWindow.is_app_active == 0) {
        ShowCursor(0);
        SetCursor((HCURSOR)0x0);
      }
      else {
        pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar1);
        ShowCursor(1);
      }
      return 1;
    }
    if (uMsg == WM_CLOSE) {
      g_GameWindow.isAppClosing = 1;
      return 1;
    }
    if (uMsg == WM_ACTIVATEAPP) {
      g_GameWindow.activeapp_param = wParam;
      g_GameWindow.is_app_active = (int)(wParam == 0);
    }
  }
  else if ((uMsg == 0x3c9) && (g_GameContext.unknown_1b0 != (void *)0x0)) {
    FUN_00422560((int)g_GameContext.unknown_1b0,lParam);
  }
  LVar2 = DefWindowProcA(hWnd,uMsg,wParam,(LPARAM)lParam);
  return LVar2;
}

