
void Clear(D3DCOLOR param_1)

{
  HRESULT HVar1;
  
  (*DAT_006c6d20->lpVtbl->Clear)(DAT_006c6d20,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*DAT_006c6d20->lpVtbl->Present)
                    (DAT_006c6d20,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*DAT_006c6d20->lpVtbl->Reset)(DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
  }
  (*DAT_006c6d20->lpVtbl->Clear)(DAT_006c6d20,0,(D3DRECT *)0x0,3,param_1,1.0,0);
  HVar1 = (*DAT_006c6d20->lpVtbl->Present)
                    (DAT_006c6d20,(RECT *)0x0,(RECT *)0x0,(HWND)0x0,(RGNDATA *)0x0);
  if (HVar1 < 0) {
    (*DAT_006c6d20->lpVtbl->Reset)(DAT_006c6d20,(D3DPRESENT_PARAMETERS *)&DAT_006c6df8);
  }
  return;
}

