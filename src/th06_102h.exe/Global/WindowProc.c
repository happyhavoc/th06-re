
LRESULT WindowProc(HWND hWnd,uint uMsg,WPARAM wParam,LPMIDIHDR lParam)

{
  HCURSOR pHVar1;
  LRESULT LVar2;
  
  if (uMsg < 0x21) {
    if (uMsg == WM_SETCURSOR) {
      if (g_GameContext.cfg.field14_0x1e == 0) {
        if (IS_APP_ACTIVE == 0) {
          ShowCursor(0);
          SetCursor((HCURSOR)0x0);
        }
        else {
          pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
          SetCursor(pHVar1);
          ShowCursor(1);
        }
      }
      else {
        pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar1);
        ShowCursor(1);
      }
      return 1;
    }
    if (uMsg == WM_CLOSE) {
      IS_APP_CLOSING = 1;
      return 1;
    }
    if (uMsg == WM_ACTIVATEAPP) {
      ACTIVATEAPP_PARAM = wParam;
      IS_APP_ACTIVE = (int)(wParam == 0);
    }
  }
  else if ((uMsg == 0x3c9) && (DAT_006c6ec8 != 0)) {
    FUN_00422560(DAT_006c6ec8,lParam);
  }
  LVar2 = DefWindowProcA(hWnd,uMsg,wParam,(LPARAM)lParam);
  return LVar2;
}

