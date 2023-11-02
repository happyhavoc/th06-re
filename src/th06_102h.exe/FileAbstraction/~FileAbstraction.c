
void __thiscall FileAbstraction::~FileAbstraction(FileAbstraction *this)

{
  this->vtbl = &FileAbstractionVtable_0046cbe8;
  if (this->handle != (HANDLE)0xffffffff) {
    CloseHandle(this->handle);
    this->handle = (HANDLE)0xffffffff;
    this->access = 0;
  }
  return;
}

