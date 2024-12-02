
void __thiscall th06::CMyFont::Print(CMyFont *this,char *str,int x,int y,D3DCOLOR color)

{
  RECT local_14;
  
  local_14.left = x;
  local_14.right = 0x280;
  local_14.top = y;
  local_14.bottom = 0x1e0;
  (*(this[1].m_lpFont)->lpVtbl->DrawTextA)
            ((IDirect3DVolume8 *)this[1].m_lpFont,str,-1,(LPRECT)&local_14,0x40,color);
  return;
}

