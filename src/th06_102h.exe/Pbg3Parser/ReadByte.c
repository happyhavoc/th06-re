
void __thiscall th06::Pbg3Parser::ReadByte(FileAbstractionToPbg3Parser this)

{
  uint uVar1;
  
  uVar1 = ADJ(this).base.offsetInFile;
  if (uVar1 < ADJ(this).base.fileSize) {
    ADJ(this).base.offsetInFile = uVar1 + 1;
  }
  FileAbstraction::ReadByte(&this->base);
  return;
}

