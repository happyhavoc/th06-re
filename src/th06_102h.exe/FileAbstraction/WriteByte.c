
byte __thiscall FileAbstraction::WriteByte(FileAbstraction *this,byte b)

{
  BOOL BVar1;
  byte bVar2;
  undefined3 in_stack_00000005;
  FileAbstraction *pFStack_4;
  
  bVar2 = b;
  pFStack_4 = this;
  BVar1 = (*this->vtbl->Write)(this,&b,1,(LPDWORD)&pFStack_4);
  if ((BVar1 != 0) && (pFStack_4 != (FileAbstraction *)0x0)) {
    return bVar2;
  }
  return 0xff;
}

