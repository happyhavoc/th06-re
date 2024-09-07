
HLOCAL __thiscall th06::FileAbstraction::ReadWholeFile(FileAbstraction *this,uint maxSize)

{
  SIZE_T dataLen;
  char *data;
  DWORD oldLocation;
  int iVar1;
  BOOL BVar2;
  DWORD *outDataLen;
  
  if (this->access != 0x80000000) {
    return (HLOCAL)0x0;
  }
  outDataLen = (DWORD *)this;
  dataLen = (*this->vtbl->GetSize)(this);
  if (dataLen <= maxSize) {
    data = (char *)LocalAlloc(0x40,dataLen);
    if (data != (char *)0x0) {
      oldLocation = (*this->vtbl->Tell)(this);
      iVar1 = (*this->vtbl->Seek)(this,oldLocation,0);
      if (iVar1 != 0) {
        BVar2 = (*this->vtbl->Read)(this,data,dataLen,(LPDWORD)&outDataLen);
        if (BVar2 != 0) {
          (*this->vtbl->Seek)(this,oldLocation,0);
          return data;
        }
        LocalFree(data);
      }
    }
  }
  return (HLOCAL)0x0;
}

