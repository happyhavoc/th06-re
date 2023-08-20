
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_00420d40(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  HCURSOR pHVar1;
  LRESULT LVar2;
  
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      if (g_GameContext.cfg._30_1_ == '\0') {
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
    if (param_2 == 0x10) {
      _DAT_006c6bd8 = 1;
      return 1;
    }
    if (param_2 == 0x1c) {
      _DAT_006c6bdc = param_3;
      _DAT_006c6be0 = (uint)(param_3 == 0);
    }
  }
  else if ((param_2 == 0x3c9) && (DAT_006c6ec8 != 0)) {
    FUN_00422560(param_4);
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}

