
bool InitD3dInterface(void)

{
  bool bVar1;
  
  g_GameContext.d3d_iface = Direct3DCreate8(0x78);
  bVar1 = g_GameContext.d3d_iface == (IDirect3D8 *)0x0;
  if (bVar1) {
    GameErrorContextFatal
              (&g_GameErrorContext,
               "Direct3D オブジェクトは何故か作成出来なかった\n");
  }
  return bVar1;
}

