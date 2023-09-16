
void FUN_00420b50(void)

{
  HRESULT HVar1;
  
  HVar1 = (*(g_GameContext.d3dDevice)->lpVtbl->Present)
                    (g_GameContext.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    AnmManager::ReleaseSurfaces(g_AnmManager);
    (*(g_GameContext.d3dDevice)->lpVtbl->Reset)
              (g_GameContext.d3dDevice,&g_GameContext.presentParameters);
    InitD3dDevice();
    g_GameContext.field77_0x198 = 2;
  }
  FUN_00421a40(g_AnmManager);
  if (g_GameContext.field77_0x198 != 0) {
    g_GameContext.field77_0x198 = g_GameContext.field77_0x198 + -1;
  }
  return;
}

