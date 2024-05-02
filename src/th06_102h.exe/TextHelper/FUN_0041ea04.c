
bool __thiscall TextHelper::FUN_0041ea04(TextHelper *this,UINT width,UINT height,D3DFORMAT format)

{
  char cVar1;
  
  cVar1 = FUN_0041ea63(this,width,height,format);
  if (cVar1 == '\0') {
    if ((format == D3DFMT_A1R5G5B5) || (format == D3DFMT_A4R4G4B4)) {
      cVar1 = FUN_0041ea63(this,width,height,D3DFMT_A8R8G8B8);
    }
    else if (format == D3DFMT_R5G6B5) {
      cVar1 = FUN_0041ea63(this,width,height,D3DFMT_X8R8G8B8);
    }
    else {
      cVar1 = '\0';
    }
  }
  else {
    cVar1 = '\x01';
  }
  return (bool)cVar1;
}

