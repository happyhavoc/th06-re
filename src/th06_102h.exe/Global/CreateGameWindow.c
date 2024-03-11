
void CreateGameWindow(HINSTANCE instance)

{
  int iVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA base_class;
  int local_c;
  int local_8;
  
  pWVar3 = &base_class;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pWVar3->style = 0;
    pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
  }
  base_class.hbrBackground = (HBRUSH)GetStockObject(0);
  base_class.hCursor = (HCURSOR)LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  base_class.hInstance = instance;
  base_class.lpfnWndProc = WindowProc;
  g_GameWindow.lastActiveAppValue = 0;
  g_GameWindow.isAppActive = 0;
  base_class.lpszClassName = "BASE";
  RegisterClassA(&base_class);
  if (g_Supervisor.cfg.windowed == false) {
    local_c = 0x280;
    local_8 = 0x1e0;
    g_GameWindow.window =
         (HWND)CreateWindowExA(0,"BASE","東方紅魔郷\x3000〜 the Embodiment of Scarlet Devil",
                               0xcf0000,0,0,0x280,0x1e0,(HWND)0x0,(HMENU)0x0,(HINSTANCE)instance,
                               (LPVOID)0x0);
  }
  else {
    iVar2 = GetSystemMetrics(SM_CXFIXEDFRAME);
    local_c = iVar2 * 2 + 0x280;
    iVar2 = GetSystemMetrics(SM_CYFIXEDFRAME);
    iVar1 = GetSystemMetrics(SM_CYCAPTION);
    local_8 = iVar1 + 0x1e0 + iVar2 * 2;
    g_GameWindow.window =
         (HWND)CreateWindowExA(0,"BASE","東方紅魔郷\x3000〜 the Embodiment of Scarlet Devil",
                               0x100a0000,-0x80000000,-0x80000000,local_c,local_8,(HWND)0x0,
                               (HMENU)0x0,(HINSTANCE)instance,(LPVOID)0x0);
  }
  g_Supervisor.hwndGameWindow = (HWND)g_GameWindow.window;
  return;
}

