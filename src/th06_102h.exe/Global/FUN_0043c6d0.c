
void __fastcall FUN_0043c6d0(FileAbstractionToPbg3Parser param_1)

{
  if (ADJ(param_1)->offsetInFile < ADJ(param_1)->fileSize) {
    ADJ(param_1)->offsetInFile = ADJ(param_1)->offsetInFile + 1;
  }
  FileAbstraction::ReadByte(&param_1->base);
  return;
}

