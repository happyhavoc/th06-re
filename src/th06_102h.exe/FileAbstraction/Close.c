
void __thiscall FileAbstraction::Close(FileAbstraction *this)

{
  if (this->handle != (HANDLE)0xffffffff) {
    CloseHandle(this->handle);
    this->handle = (HANDLE)0xffffffff;
    this->access = 0;
  }
  return;
}

