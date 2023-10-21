
void __fastcall FUN_0043c4f0(FileAbstractionToPbg3Parser param_1)

{
  FileAbstraction::Close(&param_1->base);
  Pbg3Parser::Init(ADJ(param_1));
  return;
}

