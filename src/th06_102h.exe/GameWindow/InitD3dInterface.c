
BOOL th06::GameWindow::InitD3dInterface(void)

{
  bool bVar1;
  
  g_Supervisor.d3dIface = Direct3DCreate8(0x78);
  bVar1 = g_Supervisor.d3dIface == (IDirect3D8 *)0x0;
  if (bVar1) {
    GameErrorContext::Fatal
              (&g_GameErrorContext,
               "Direct3D オブジェクトは何故か作成出来なかった\n");
  }
  return (uint)bVar1;
}

