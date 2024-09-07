
byte * __thiscall
th06::Pbg3Archive::ReadEntryRaw(Pbg3Archive *this,int *out_size,int *out_checksum,int entry)

{
  int iVar1;
  byte *data;
  size_t *unaff_EBX;
  size_t size;
  uint *unaff_EDI;
  
  if (this->parser == (Pbg3Parser *)0x0) {
    return (byte *)0x0;
  }
  if ((((uint)entry < (uint)this->numOfEntries) && (out_size != (int *)0x0)) &&
     (out_checksum != (int *)0x0)) {
    iVar1 = (*(code *)((this->parser->base).vtbl)->SeekToOffset)(this->entries[entry].dataOffset);
    if (iVar1 != 0) {
      if (entry == this->numOfEntries + -1) {
        size = this->fileTableOffset - this->entries[entry].dataOffset;
      }
      else {
        size = this->entries[entry + 1].dataOffset - this->entries[entry].dataOffset;
      }
      data = (byte *)_malloc(size);
      if (data != (byte *)0x0) {
        iVar1 = (*(code *)((this->parser->base).vtbl)->ReadByteAlignedData)(data,size);
        if (iVar1 != 0) {
          *unaff_EDI = this->entries[entry].checksum;
          *unaff_EBX = size;
          return data;
        }
        _free(data);
      }
    }
  }
  return (byte *)0x0;
}

