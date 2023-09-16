
undefined4 __thiscall Pbg3FileStuff::Unk1(Pbg3FileStuff *this,char *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*((this->fileAbstraction).base.vtbl)->Close)(&(this->fileAbstraction).base);
  Init(this);
  iVar1 = FileAbstraction::Open(&(this->fileAbstraction).base,param_1,"r");
  if (iVar1 == 0) {
    return 0;
  }
  DVar2 = GetFileSize((this->fileAbstraction).base.handle,(LPDWORD)0x0);
  this->fileSize = DVar2;
  return 1;
}

