
TextHelper * __thiscall th06::TextHelper::TextHelper(TextHelper *this)

{
  this->format = ~D3DFMT_UNKNOWN;
  this->width = 0;
  this->height = 0;
  this->hdc = (HDC)0x0;
  this->gdiobj2 = (HGDIOBJ)0x0;
  this->gdiobj = (HGDIOBJ)0x0;
  this->buffer = (ushort *)0x0;
  return this;
}

