
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool FUN_0041ea04(UINT width,UINT height,D3DFORMAT format)

{
  char cVar1;
  
  cVar1 = FUN_0041ea63(width,height,format);
  if (cVar1 == '\0') {
    if ((format == D3DFMT_A1R5G5B5) || (format == D3DFMT_A4R4G4B4)) {
      cVar1 = FUN_0041ea63(width,height,D3DFMT_A8R8G8B8);
    }
    else if (format == D3DFMT_R5G6B5) {
      cVar1 = FUN_0041ea63(width,height,D3DFMT_X8R8G8B8);
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

