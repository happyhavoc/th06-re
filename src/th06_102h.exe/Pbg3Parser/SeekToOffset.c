
undefined4 __thiscall Pbg3Parser::SeekToOffset(Pbg3Parser *this,uint fileOffset)

{
  int iVar1;
  
  if (fileOffset < this->fileSize) {
    iVar1 = (*(code *)this->vtbl->SeekToByteAligned)();
    if (iVar1 != 0) {
      iVar1 = FileAbstraction::Seek(&(this->fileAbstraction).base,fileOffset,0);
      if (iVar1 != 0) {
        this->offsetInFile = fileOffset;
        this->someKindOfCrc = 0;
        return 1;
      }
    }
  }
  return 0;
}

