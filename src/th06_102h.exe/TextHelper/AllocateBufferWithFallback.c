
bool __thiscall
th06::TextHelper::AllocateBufferWithFallback
          (TextHelper *this,UINT width,UINT height,D3DFORMAT format)

{
  bool bVar1;
  
  bVar1 = TryAllocateBuffer(this,width,height,format);
  if (bVar1) {
    bVar1 = true;
  }
  else if ((format == D3DFMT_A1R5G5B5) || (format == D3DFMT_A4R4G4B4)) {
    bVar1 = TryAllocateBuffer(this,width,height,D3DFMT_A8R8G8B8);
  }
  else if (format == D3DFMT_R5G6B5) {
    bVar1 = TryAllocateBuffer(this,width,height,D3DFMT_X8R8G8B8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

