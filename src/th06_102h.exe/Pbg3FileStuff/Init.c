
void __fastcall Pbg3FileStuff::Init(Pbg3FileStuff *param_1)

{
  param_1->bitIdxInCurByte = 0x80;
  param_1->offsetInFile = 0;
  param_1->fileSize = 0;
  *(undefined4 *)&param_1->curByte = 0;
  param_1->someKindOfCrc = 0;
  return;
}

