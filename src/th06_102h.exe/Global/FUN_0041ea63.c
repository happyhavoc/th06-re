
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char FUN_0041ea63(UINT width,UINT height,D3DFORMAT format)

{
  char cVar1;
  HGDIOBJ pvVar2;
  D3DFORMAT *in_ECX;
  void *local_90;
  HBITMAP local_8c;
  D3DFORMAT local_88;
  BITMAPINFO local_84;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  HDC local_c;
  D3DFORMAT local_8;
  
  FUN_0041e992(in_ECX);
  _memset(&local_84,0,0x6c);
  local_88 = FUN_0041ec22(format);
  if (local_88 == D3DFMT_UNKNOWN) {
    cVar1 = '\0';
  }
  else {
    local_8 = (((int)(width * *(int *)(local_88 + 4)) / 8 + 3) / 4) * 4;
    local_84.bmiHeader.biSize = 0x6c;
    local_84.bmiHeader.biWidth = width;
    local_84.bmiHeader.biHeight = -(height + 1);
    local_84.bmiHeader.biPlanes = 1;
    local_84.bmiHeader.biBitCount = *(WORD *)(local_88 + 4);
    local_84.bmiHeader.biSizeImage = height * local_8;
    if ((format != D3DFMT_X1R5G5B5) && (format != D3DFMT_X8R8G8B8)) {
      local_84.bmiHeader.biCompression = 3;
      local_84.bmiColors[0] = *(RGBQUAD *)(local_88 + 0xc);
      local_58 = *(undefined4 *)(local_88 + 0x10);
      local_54 = *(undefined4 *)(local_88 + D3DFMT_R8G8B8);
      local_50 = *(undefined4 *)(local_88 + 8);
    }
    local_8c = CreateDIBSection((HDC)0x0,&local_84,0,&local_90,(HANDLE)0x0,0);
    if (local_8c == (HBITMAP)0x0) {
      cVar1 = '\0';
    }
    else {
      _memset(local_90,0,local_84.bmiHeader.biSizeImage);
      local_c = CreateCompatibleDC((HDC)0x0);
      pvVar2 = SelectObject(local_c,local_8c);
      in_ECX[5] = (D3DFORMAT)local_c;
      in_ECX[7] = (D3DFORMAT)local_8c;
      in_ECX[8] = (D3DFORMAT)local_90;
      in_ECX[3] = local_84.bmiHeader.biSizeImage;
      in_ECX[6] = (D3DFORMAT)pvVar2;
      in_ECX[1] = width;
      in_ECX[2] = height;
      *in_ECX = format;
      in_ECX[4] = local_8;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

