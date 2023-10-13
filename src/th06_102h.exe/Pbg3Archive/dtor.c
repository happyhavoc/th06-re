
undefined4 __thiscall Pbg3Archive::dtor(Pbg3Archive *this)

{
  this->fileTableOffset = 0;
  this->numOfEntries = 0;
  if (this->inner != (Pbg3Parser *)0x0) {
    (*(code *)this->inner->vtbl->Close)(1);
    this->inner = (Pbg3Parser *)0x0;
  }
  if (this->entries != (Pbg3Entry *)0x0) {
    _free(this->entries);
    this->entries = (Pbg3Entry *)0x0;
  }
  _free((void *)this->field1_0x4);
  return 1;
}

