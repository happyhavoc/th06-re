
undefined4 __thiscall Pbg3File::dtor(Pbg3File *this)

{
  this->fileTableOffset = 0;
  this->numOfEntries = 0;
  if (this->inner != (Pbg3FileStuff *)0x0) {
    (*(code *)this->inner->vtbl->dtor)(1);
    this->inner = (Pbg3FileStuff *)0x0;
  }
  if (this->entries != (Pbg3Entry *)0x0) {
    _free(this->entries);
    this->entries = (Pbg3Entry *)0x0;
  }
  _free((void *)this->field1_0x4);
  return 1;
}

