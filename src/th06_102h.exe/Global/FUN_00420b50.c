
void FUN_00420b50(void)

{
  HRESULT HVar1;
  
  HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->Present)
                    (g_GameContext.d3d_device,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    FUN_004219d0(VERY_BIG_STRUCT);
    (*(g_GameContext.d3d_device)->lpVtbl->Reset)
              (g_GameContext.d3d_device,(D3DPRESENT_PARAMETERS *)0x6c6df8);
    InitD3dDevice();
    g_GameContext._408_4_ = 2;
  }
  FUN_00421a40();
  if (g_GameContext._408_4_ != 0) {
    g_GameContext._408_4_ = g_GameContext._408_4_ + -1;
  }
  return;
}

