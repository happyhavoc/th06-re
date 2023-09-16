
void FUN_00420b50(void)

{
  HRESULT HVar1;
  
  HVar1 = (*DAT_006c6d20->lpVtbl->Present)
                    (DAT_006c6d20,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    AnmManager::ReleaseD3dSurfaces(DAT_006d4588);
    (*DAT_006c6d20->lpVtbl->Reset)(DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
    InitD3dDevice();
    DAT_006c6eb0 = 2;
  }
  FUN_00421a40(DAT_006d4588);
  if (DAT_006c6eb0 != 0) {
    DAT_006c6eb0 = DAT_006c6eb0 + -1;
  }
  return;
}

