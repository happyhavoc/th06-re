
uint __thiscall th06::TextHelper::FUN_0041e992(TextHelper *this)

{
  uint uVar1;
  
  if (this->hdc == (HDC)0x0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
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
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}

