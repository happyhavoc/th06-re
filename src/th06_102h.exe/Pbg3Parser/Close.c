
void __thiscall Pbg3Parser::Close(FileAbstractionToPbg3Parser this)

{
  FileAbstraction::Close(&this->base);
  IPbg3Parser::Reset(&ADJ(this).base);
  return;
}

