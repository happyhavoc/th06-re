
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)

{
  void *pvVar1;
  BOOL BVar2;
  int retCode;
  void *local_58;
  tagMSG local_28;
  int local_c;
  int local_8;
  
  local_8 = 0;
  retCode = CheckForRunningGameInstance();
  if (retCode == 0) {
    g_GameContext.hInstance = hInstance;
    retCode = GameContext::Parse(&g_GameContext,"東方紅魔郷.cfg");
    if (retCode == 0) {
      retCode = FUN_00420bd0();
      if (retCode == 0) {
        SystemParametersInfoA(0x10,0,&DAT_006c6be8,0);
        SystemParametersInfoA(0x53,0,&DAT_006c6bec,0);
        SystemParametersInfoA(0x54,0,&DAT_006c6bf0,0);
        SystemParametersInfoA(0x11,0,(PVOID)0x0,2);
        SystemParametersInfoA(0x55,0,(PVOID)0x0,2);
        SystemParametersInfoA(0x56,0,(PVOID)0x0,2);
        while( true ) {
          FUN_00420c10(hInstance);
          retCode = FUN_00420e60();
          if (retCode != 0) break;
          FUN_00430270(DAT_006c6bd4);
          FUN_0041cf60();
          FUN_0041e0c0();
          pvVar1 = operator_new(0x2112c);
          if (pvVar1 == (void *)0x0) {
            local_58 = (void *)0x0;
          }
          else {
            local_58 = (void *)FUN_00431470();
          }
          DAT_006d4588 = local_58;
          retCode = FUN_0042386b();
          if (retCode == 0) {
            if (g_GameContext.cfg._30_1_ == '\0') {
              ShowCursor(0);
            }
            DAT_006c6be4 = 0;
            do {
              while( true ) {
                while( true ) {
                  if (_DAT_006c6bd8 != 0) goto LAB_0042055a;
                  BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
                  if (BVar2 == 0) break;
                  TranslateMessage(&local_28);
                  DispatchMessageA(&local_28);
                }
                local_c = (**(code **)(*(int *)g_GameContext._8_4_ + 0xc))(g_GameContext._8_4_);
                if (local_c == 0) break;
                if (local_c == -0x7789f797) {
                  FUN_004219d0();
                  retCode = (**(code **)(*(int *)g_GameContext._8_4_ + 0x38))
                                      (g_GameContext._8_4_,0x6c6df8);
                  if (retCode != 0) goto LAB_0042055a;
                  FUN_00421420();
                  DAT_006c6eb0 = 3;
                }
              }
              local_8 = FUN_004206e0();
            } while (local_8 == 0);
          }
LAB_0042055a:
          FUN_0041cd10();
          FUN_00430510();
          pvVar1 = DAT_006d4588;
          if (DAT_006d4588 == (void *)0x0) {
            pvVar1 = (void *)0x0;
          }
          else {
            FUN_00423330();
            _free(pvVar1);
          }
          DAT_006d4588 = (void *)0x0;
          if (g_GameContext._8_4_ != 0) {
            (**(code **)(*(int *)g_GameContext._8_4_ + 8))(g_GameContext._8_4_,pvVar1);
            g_GameContext._8_4_ = 0;
          }
          ShowWindow(DAT_006c6bd4,0);
          MoveWindow(DAT_006c6bd4,0,0,0,0,0);
          DestroyWindow(DAT_006c6bd4);
          if (local_8 != 2) {
            FUN_0041e460("東方紅魔郷.cfg",0x6c6e2c,0x38);
            SystemParametersInfoA(0x11,DAT_006c6be8,(PVOID)0x0,2);
            SystemParametersInfoA(0x55,DAT_006c6bec,(PVOID)0x0,2);
            SystemParametersInfoA(0x56,DAT_006c6bf0,(PVOID)0x0,2);
            if (g_GameContext.field1_0x4 != (int *)0x0) {
              (**(code **)(*g_GameContext.field1_0x4 + 8))(g_GameContext.field1_0x4);
              g_GameContext.field1_0x4 = (int *)0x0;
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
          if (g_GameContext.cfg._30_1_ == '\0') {
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

