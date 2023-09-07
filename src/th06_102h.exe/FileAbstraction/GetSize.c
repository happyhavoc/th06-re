
DWORD __thiscall FileAbstraction::GetSize(FileAbstraction *this)

{
  DWORD DVar1;
  
  if (this->handle == (HANDLE)0xffffffff) {
    return 0;
  }
  DVar1 = GetFileSize(this->handle,(LPDWORD)0x0);
  return DVar1;
}

