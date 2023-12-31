
undefined4 __thiscall Pbg3Parser::OpenArchive(Pbg3Parser *this,char *path)

{
  int iVar1;
  DWORD DVar2;
  
  (*((this->fileAbstraction).base.vtbl)->Close)(&(this->fileAbstraction).base);
  IPbg3Parser::Reset(&this->base);
  iVar1 = FileAbstraction::Open(&(this->fileAbstraction).base,path,"r");
  if (iVar1 == 0) {
    return 0;
  }
  DVar2 = GetFileSize((this->fileAbstraction).base.handle,(LPDWORD)0x0);
  (this->base).fileSize = DVar2;
  return 1;
}

