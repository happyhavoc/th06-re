
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420c10(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_34;
  int local_c;
  int local_8;
  
  pWVar3 = &local_34;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pWVar3->style = 0;
    pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
  }
  local_34.hbrBackground = (HBRUSH)GetStockObject(0);
  local_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_34.hInstance = param_1;
  local_34.lpfnWndProc = FUN_00420d40;
  _DAT_006c6bdc = 0;
  _DAT_006c6be0 = 0;
  local_34.lpszClassName = "BASE";
  RegisterClassA(&local_34);
  if (g_GameContext.cfg._30_1_ == '\0') {
    local_c = 0x280;
    local_8 = 0x1e0;
    DAT_006c6bd4 = CreateWindowExA(0,"BASE",
                                   "東方紅魔郷\x3000〜 the Embodiment of Scarlet Devil",
                                   0xcf0000,0,0,0x280,0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0
                                  );
  }
  else {
    iVar2 = GetSystemMetrics(7);
    local_c = iVar2 * 2 + 0x280;
    iVar2 = GetSystemMetrics(8);
    iVar1 = GetSystemMetrics(4);
    local_8 = iVar1 + 0x1e0 + iVar2 * 2;
    DAT_006c6bd4 = CreateWindowExA(0,"BASE",
                                   "東方紅魔郷\x3000〜 the Embodiment of Scarlet Devil",
                                   0x100a0000,-0x80000000,-0x80000000,local_c,local_8,(HWND)0x0,
                                   (HMENU)0x0,param_1,(LPVOID)0x0);
  }
  g_GameContext._68_4_ = DAT_006c6bd4;
  return;
}

