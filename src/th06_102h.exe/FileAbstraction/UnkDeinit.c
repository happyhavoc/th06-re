
void __thiscall FileAbstraction::UnkDeinit(FileAbstraction *this)

{
  this->vtbl = &FileAbstractionVtable_0046cbe8;
  if (this->handle != (HANDLE)0xffffffff) {
    CloseHandle(this->handle);
    this->handle = (HANDLE)0xffffffff;
    this->field2_0x8 = 0;
  }
  return;
}

