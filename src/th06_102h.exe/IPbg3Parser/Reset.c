
void __fastcall IPbg3Parser::Reset(Pbg3Parser *param_1)

{
  (param_1->base).bitIdxInCurByte = 0x80;
  (param_1->base).offsetInFile = 0;
  (param_1->base).fileSize = 0;
  (param_1->base).curByte = 0;
  (param_1->base).someKindOfCrc = 0;
  return;
}

