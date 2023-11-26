
void Clear(D3DCOLOR param_1)

{
  HRESULT HVar1;
  
  (*(g_Supervisor.d3dDevice)->lpVtbl->Clear)
            (g_Supervisor.d3dDevice,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->Present)
                    (g_Supervisor.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
              (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->Clear)
            (g_Supervisor.d3dDevice,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->Present)
                    (g_Supervisor.d3dDevice,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->Reset)
              (g_Supervisor.d3dDevice,&g_Supervisor.presentParameters);
  }
  return;
}

