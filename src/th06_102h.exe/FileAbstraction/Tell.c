
DWORD __thiscall th06::FileAbstraction::Tell(FileAbstraction *this)

{
  DWORD DVar1;
  
  if (this->handle == (HANDLE)0xffffffff) {
    return 0;
  }
  DVar1 = SetFilePointer(this->handle,0,(PLONG)0x0,1);
  return DVar1;
}

