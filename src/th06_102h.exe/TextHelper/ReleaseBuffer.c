
bool __thiscall th06::TextHelper::ReleaseBuffer(TextHelper *this)

{
  bool bVar1;
  
  bVar1 = this->hdc != (HDC)0x0;
  if (bVar1) {
    SelectObject(this->hdc,this->gdiobj);
    DeleteDC(this->hdc);
    DeleteObject(this->gdiobj2);
    this->format = ~D3DFMT_UNKNOWN;
    this->width = 0;
    this->height = 0;
    this->hdc = (HDC)0x0;
    this->gdiobj2 = (HGDIOBJ)0x0;
    this->gdiobj = (HGDIOBJ)0x0;
    this->buffer = (ushort *)0x0;
  }
  return bVar1;
}

