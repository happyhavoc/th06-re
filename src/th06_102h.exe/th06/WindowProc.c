
LRESULT th06::WindowProc(HWND hWnd,uint uMsg,WPARAM wParam,LPMIDIHDR lParam)

{
  HCURSOR pHVar1;
  LRESULT LVar2;
  
  if (uMsg < 0x21) {
    if (uMsg == WM_SETCURSOR) {
      if (g_Supervisor.cfg.windowed) {
        pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar1);
        ShowCursor(1);
      }
      else if (g_GameWindow.isAppActive == 0) {
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
      g_GameWindow.lastActiveAppValue = wParam;
      g_GameWindow.isAppActive = (int)(wParam == 0);
    }
  }
  else if ((uMsg == 0x3c9) && (g_Supervisor.midi_output != (MidiOutput *)0x0)) {
    MidiOutput::UnprepareHeader(g_Supervisor.midi_output,lParam);
  }
  LVar2 = DefWindowProcA(hWnd,uMsg,wParam,(LPARAM)lParam);
  return LVar2;
}

