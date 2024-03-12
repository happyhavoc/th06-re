
void GameWindow::Present(void)

{
  HRESULT HVar1;
  
  HVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->Present)
                    (g_Supervisor.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    AnmManager::ReleaseSurfaces(g_AnmManager);
    (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
              (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
    InitD3dDevice();
    g_Supervisor.unk198 = 2;
  }
  AnmManager::TakeScrenshotIfRequested(g_AnmManager);
  if (g_Supervisor.unk198 != 0) {
    g_Supervisor.unk198 = g_Supervisor.unk198 + -1;
  }
  return;
}

