
/* Library Function - Single Match
    public: void __thiscall CDocObjectServer::ReleaseDocSite(void)
   
   Library: Visual Studio 2003 Debug */

void __thiscall th06::CMyFont::Clean(CMyFont *this)

{
  if (this[1].m_lpFont != (LPD3DXFONT)NULL) {
    (*(this[1].m_lpFont)->lpVtbl->Release)((IDirect3DVolume8 *)this[1].m_lpFont);
    this[1].m_lpFont = (LPD3DXFONT)NULL;
  }
  return;
}

