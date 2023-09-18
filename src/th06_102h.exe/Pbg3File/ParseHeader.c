
undefined4 __thiscall Pbg3File::ParseHeader(Pbg3File *this)

{
  int iVar1;
  uint val;
  Pbg3Entry *pPVar2;
  uint uVar3;
  int iVar4;
  Pbg3FileStuff *inner;
  
  iVar1 = Pbg3FileStuff::ReadMagic(this->inner);
  inner = this->inner;
  if (iVar1 == 0x33474250) {
    val = Pbg3FileStuff::ReadVarInt(inner);
    this->numOfEntries = val;
    val = Pbg3FileStuff::ReadVarInt(this->inner);
    this->fileTableOffset = val;
    iVar1 = (*(code *)this->inner->vtbl->SeekToOffset)(val);
    if (iVar1 != 0) {
      pPVar2 = (Pbg3Entry *)operator_new(this->numOfEntries * 0x114);
      this->entries = pPVar2;
      if (pPVar2 != (Pbg3Entry *)0x0) {
        val = 0;
        if (this->numOfEntries != 0) {
          iVar1 = 0;
          do {
            uVar3 = Pbg3FileStuff::ReadVarInt(this->inner);
            *(uint *)(this->entries->filename + iVar1 + -0x10) = uVar3;
            uVar3 = Pbg3FileStuff::ReadVarInt(this->inner);
            *(uint *)(this->entries->filename + iVar1 + -0x14) = uVar3;
            uVar3 = Pbg3FileStuff::ReadVarInt(this->inner);
            *(uint *)(this->entries->filename + iVar1 + -4) = uVar3;
            uVar3 = Pbg3FileStuff::ReadVarInt(this->inner);
            *(uint *)(this->entries->filename + iVar1 + -8) = uVar3;
            uVar3 = Pbg3FileStuff::ReadVarInt(this->inner);
            *(uint *)(this->entries->filename + iVar1 + -0xc) = uVar3;
            iVar4 = Pbg3FileStuff::ReadString(this->inner,this->entries->filename + iVar1,0x100);
            if (iVar4 == 0) {
              if (this->inner != (Pbg3FileStuff *)0x0) {
                (*(code *)this->inner->vtbl->dtor)(1);
                this->inner = (Pbg3FileStuff *)0x0;
              }
              if (this->entries != (Pbg3Entry *)0x0) {
                _free(this->entries);
                this->entries = (Pbg3Entry *)0x0;
              }
              return 0;
            }
            val = val + 1;
            iVar1 = iVar1 + 0x114;
          } while (val < (uint)this->numOfEntries);
        }
        return 1;
      }
      if (this->inner == (Pbg3FileStuff *)0x0) {
        return 0;
      }
      (*(code *)this->inner->vtbl->dtor)(1);
      this->inner = (Pbg3FileStuff *)0x0;
      return 0;
    }
    inner = this->inner;
  }
  if (inner == (Pbg3FileStuff *)0x0) {
    return 0;
  }
  (*(code *)inner->vtbl->dtor)(1);
  this->inner = (Pbg3FileStuff *)0x0;
  return 0;
}

