
int __thiscall FileAbstraction::Seek(FileAbstraction *this,LONG amount,DWORD mode)

{
  if (this->handle == (HANDLE)0xffffffff) {
    return 0;
  }
  SetFilePointer(this->handle,amount,(PLONG)0x0,mode);
  return 1;
}

