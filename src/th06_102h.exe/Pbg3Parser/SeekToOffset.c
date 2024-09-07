
undefined4 __thiscall th06::Pbg3Parser::SeekToOffset(Pbg3Parser *this,uint fileOffset)

{
  int iVar1;
  
  if (fileOffset < (this->base).fileSize) {
    iVar1 = (*(code *)((this->base).vtbl)->SeekToNextByte)();
    if (iVar1 != 0) {
      iVar1 = FileAbstraction::Seek(&(this->fileAbstraction).base,fileOffset,0);
      if (iVar1 != 0) {
        (this->base).offsetInFile = fileOffset;
        (this->base).someKindOfCrc = 0;
        return 1;
      }
    }
  }
  return 0;
}

