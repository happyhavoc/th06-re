
void __thiscall CMyFont::Init(CMyFont *this,LPDIRECT3DDEVICE8 lpD3DDEV,int w,int h)

{
  HDC hTextDC;
  HFONT hFont;
  HGDIOBJ hOldFont;
  HRESULT HVar1;
  
  hTextDC = CreateCompatibleDC((HDC)NULL);
  hFont = CreateFontA(h,w,0,0,FW_REGULAR,0,0,0,SHIFTJIS_CHARSET,OUT_DEFAULT_PRECIS,
                      CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH,"ＭＳ ゴシック");
  if (hFont != (HFONT)NULL) {
    hOldFont = SelectObject(hTextDC,hFont);
    HVar1 = D3DXCreateFont(lpD3DDEV,(HFONT)hFont,&this[1].m_lpFont);
    if (HVar1 < 0) {
      MessageBoxA((HWND)0x0,"D3DXCreateFontIndirect FALSE","ok",MB_OK);
    }
    else {
      SelectObject(hTextDC,hOldFont);
      DeleteObject(hFont);
    }
  }
  return;
}

