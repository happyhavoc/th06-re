
void __fastcall FUN_0043c6d0(FileAbstractionToPbg3Parser param_1)

{
  uint uVar1;
  
  uVar1 = ADJ(param_1).base.offsetInFile;
  if (uVar1 < ADJ(param_1).base.fileSize) {
    ADJ(param_1).base.offsetInFile = uVar1 + 1;
  }
  FileAbstraction::ReadByte(&param_1->base);
  return;
}

