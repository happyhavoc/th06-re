
undefined4 __thiscall Pbg3Archive::Release(Pbg3Archive *this)

{
  this->fileTableOffset = 0;
  this->numOfEntries = 0;
  if (this->parser != (Pbg3Parser *)0x0) {
    (*(code *)((this->parser->base).vtbl)->operator_delete)(1);
    this->parser = (Pbg3Parser *)0x0;
  }
  if (this->entries != (Pbg3Entry *)0x0) {
    _free(this->entries);
    this->entries = (Pbg3Entry *)0x0;
  }
  _free((void *)this->unk);
  return 1;
}

