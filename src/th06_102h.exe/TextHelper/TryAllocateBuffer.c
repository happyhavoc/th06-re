
bool __thiscall
th06::TextHelper::TryAllocateBuffer(TextHelper *this,UINT width,UINT height,D3DFORMAT format)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  ushort *local_90;
  HBITMAP local_8c;
  FormatInfo *local_88;
  BITMAPINFO local_84;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  HDC local_c;
  FormatInfo *local_8;
  
  ReleaseBuffer(this);
  _memset(&local_84,0,0x6c);
  local_88 = GetFormatInfo(this,format);
  if (local_88 == (FormatInfo *)0x0) {
    bVar1 = false;
  }
  else {
    local_8 = (FormatInfo *)((((int)(width * local_88->bitCount) / 8 + 3) / 4) * 4);
    local_84.bmiHeader.biSize = 0x6c;
    local_84.bmiHeader.biWidth = width;
    local_84.bmiHeader.biHeight = -(height + 1);
    local_84.bmiHeader.biPlanes = 1;
    local_84.bmiHeader.biBitCount = *(WORD *)&local_88->bitCount;
    local_84.bmiHeader.biSizeImage = height * (int)local_8;
    if ((format != D3DFMT_X1R5G5B5) && (format != D3DFMT_X8R8G8B8)) {
      local_84.bmiHeader.biCompression = 3;
      local_84.bmiColors[0] = (RGBQUAD)local_88->red_mask;
      local_58 = local_88->green_mask;
      local_54 = local_88->blue_mask;
      local_50 = local_88->alpha_mask;
    }
    local_8c = CreateDIBSection((HDC)0x0,&local_84,0,&local_90,(HANDLE)0x0,0);
    if (local_8c == (HBITMAP)0x0) {
      bVar1 = false;
    }
    else {
      _memset(local_90,0,local_84.bmiHeader.biSizeImage);
      local_c = CreateCompatibleDC((HDC)0x0);
      pvVar2 = SelectObject(local_c,local_8c);
      this->hdc = local_c;
      this->gdiobj2 = local_8c;
      this->buffer = local_90;
      this->imageSizeInBytes = local_84.bmiHeader.biSizeImage;
      this->gdiobj = pvVar2;
      this->width = width;
      this->height = height;
      this->format = format;
      this->formatInfo = local_8;
      bVar1 = true;
    }
  }
  return bVar1;
}

