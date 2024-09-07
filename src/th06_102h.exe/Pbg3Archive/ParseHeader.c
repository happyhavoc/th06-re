
BOOL __thiscall th06::Pbg3Archive::ParseHeader(Pbg3Archive *this)

{
  int magic;
  uint val;
  Pbg3Entry *pPVar1;
  uint uVar2;
  BOOL BVar3;
  Pbg3Parser *inner;
  
  magic = IPbg3Parser::ReadMagic(&this->parser->base);
  inner = this->parser;
  if (magic == L'\x33474250') {
    val = IPbg3Parser::ReadVarInt(&inner->base);
    this->numOfEntries = val;
    val = IPbg3Parser::ReadVarInt(&this->parser->base);
    this->fileTableOffset = val;
    magic = (*(code *)((this->parser->base).vtbl)->SeekToOffset)(val);
    if (magic != 0) {
      pPVar1 = (Pbg3Entry *)operator_new(this->numOfEntries * sizeof(Pbg3Entry));
      this->entries = pPVar1;
      if (pPVar1 != (Pbg3Entry *)0x0) {
        val = 0;
        if (this->numOfEntries != 0) {
          magic = 0;
          do {
            uVar2 = IPbg3Parser::ReadVarInt(&this->parser->base);
            *(uint *)(this->entries->filename + magic + -0x10) = uVar2;
            uVar2 = IPbg3Parser::ReadVarInt(&this->parser->base);
            *(uint *)(this->entries->filename + magic + -0x14) = uVar2;
            uVar2 = IPbg3Parser::ReadVarInt(&this->parser->base);
            *(uint *)(this->entries->filename + magic + -4) = uVar2;
            uVar2 = IPbg3Parser::ReadVarInt(&this->parser->base);
            *(uint *)(this->entries->filename + magic + -8) = uVar2;
            uVar2 = IPbg3Parser::ReadVarInt(&this->parser->base);
            *(uint *)(this->entries->filename + magic + -0xc) = uVar2;
            BVar3 = IPbg3Parser::ReadString
                              (&this->parser->base,this->entries->filename + magic,0x100);
            if (BVar3 == 0) {
              if (this->parser != (Pbg3Parser *)0x0) {
                (*(code *)((this->parser->base).vtbl)->operator_delete)(1);
                this->parser = (Pbg3Parser *)0x0;
              }
              if (this->entries != (Pbg3Entry *)0x0) {
                operator_delete(this->entries);
                this->entries = (Pbg3Entry *)0x0;
              }
              return 0;
            }
            val = val + 1;
            magic = magic + 0x114;
          } while (val < (uint)this->numOfEntries);
        }
        return 1;
      }
      if (this->parser == (Pbg3Parser *)0x0) {
        return 0;
      }
      (*(code *)((this->parser->base).vtbl)->operator_delete)(1);
      this->parser = (Pbg3Parser *)0x0;
      return 0;
    }
    inner = this->parser;
  }
  if (inner == (Pbg3Parser *)0x0) {
    return 0;
  }
  (*(code *)((inner->base).vtbl)->operator_delete)(1);
  this->parser = (Pbg3Parser *)0x0;
  return 0;
}

