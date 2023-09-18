
void * __thiscall Pbg3File::FUN_0043c9c0(Pbg3File *this,int *out_size,int *out_checksum,int entry)

{
  int iVar1;
  void *_Memory;
  size_t *unaff_EBX;
  size_t _Size;
  uint *unaff_EDI;
  
  if (this->inner == (Pbg3FileStuff *)0x0) {
    return (void *)0x0;
  }
  if ((((uint)entry < (uint)this->numOfEntries) && (out_size != (int *)0x0)) &&
     (out_checksum != (int *)0x0)) {
    iVar1 = (*(code *)this->inner->vtbl->SeekToOffset)(this->entries[entry].dataOffset);
    if (iVar1 != 0) {
      if (entry == this->numOfEntries + -1) {
        _Size = this->fileTableOffset - this->entries[entry].dataOffset;
      }
      else {
        _Size = this->entries[entry + 1].dataOffset - this->entries[entry].dataOffset;
      }
      _Memory = _malloc(_Size);
      if (_Memory != (void *)0x0) {
        iVar1 = (*(code *)this->inner->vtbl->ReadByteAlignedData)(_Memory,_Size);
        if (iVar1 != 0) {
          *unaff_EDI = this->entries[entry].checksum;
          *unaff_EBX = _Size;
          return _Memory;
        }
        _free(_Memory);
      }
    }
  }
  return (void *)0x0;
}

