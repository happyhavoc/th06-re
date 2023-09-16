
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT WindowProc(HWND hWnd,uint uMsg,WPARAM wParam,LPMIDIHDR lParam)

{
  HCURSOR pHVar1;
  LRESULT LVar2;
  
  if (uMsg < 0x21) {
    if (uMsg == WM_SETCURSOR) {
      if (DAT_006c6e4a == '\0') {
        if (_DAT_006c6be0 == 0) {
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
      _DAT_006c6bd8 = 1;
      return 1;
    }
    if (uMsg == WM_ACTIVATEAPP) {
      _DAT_006c6bdc = wParam;
      _DAT_006c6be0 = (uint)(wParam == 0);
    }
  }
  else if ((uMsg == 0x3c9) && (DAT_006c6ec8 != (MidiOutput *)0x0)) {
    MidiOutput::UnprepareHeader(DAT_006c6ec8,lParam);
  }
  LVar2 = DefWindowProcA(hWnd,uMsg,wParam,(LPARAM)lParam);
  return LVar2;
}

