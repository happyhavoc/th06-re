
void FUN_0041e150(LPDIRECT3DDEVICE8 param_1,int param_2,int param_3)

{
  HDC hdc;
  HFONT hFont;
  HGDIOBJ h;
  HRESULT HVar1;
  int in_ECX;
  
  hdc = CreateCompatibleDC((HDC)0x0);
  hFont = CreateFontA(param_3,param_2,0,0,400,0,0,0,0x80,0,0,0,0,"ＭＳ ゴシック");
  if (hFont != (HFONT)0x0) {
    h = SelectObject(hdc,hFont);
    HVar1 = D3DXCreateFont(param_1,(HFONT)hFont,(LPD3DXFONT *)(in_ECX + 4));
    if (HVar1 < 0) {
      MessageBoxA((HWND)0x0,"D3DXCreateFontIndirect FALSE","ok",0);
    }
    else {
      SelectObject(hdc,h);
      DeleteObject(hFont);
    }
  }
  return;
}

