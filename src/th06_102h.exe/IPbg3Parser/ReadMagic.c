
int __thiscall IPbg3Parser::ReadMagic(IPbg3Parser *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)this->vtbl->ReadInt)(8);
  iVar2 = (*(code *)this->vtbl->ReadInt)(8);
  iVar3 = (*(code *)this->vtbl->ReadInt)(8);
  iVar4 = (*(code *)this->vtbl->ReadInt)(8);
  return iVar4 * 0x1000000 + iVar3 * 0x10000 + iVar2 * 0x100 + iVar1;
}

