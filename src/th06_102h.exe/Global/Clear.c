
void Clear(D3DCOLOR param_1)

{
  HRESULT HVar1;
  
  (*(g_GameContext.d3d_device)->lpVtbl->Clear)
            (g_GameContext.d3d_device,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->Present)
                    (g_GameContext.d3d_device,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->Reset)
              (g_GameContext.d3d_device,&g_GameContext.present_parameters);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->Clear)
            (g_GameContext.d3d_device,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*(g_GameContext.d3d_device)->lpVtbl->Present)
                    (g_GameContext.d3d_device,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->Reset)
              (g_GameContext.d3d_device,&g_GameContext.present_parameters);
  }
  return;
}

