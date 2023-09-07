
bool __thiscall Pbg3FileStuff::Unk1(Pbg3FileStuff *this)

{
  byte bVar1;
  undefined3 extraout_var;
  byte bVar3;
  int iVar2;
  
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return false;
  }
  if (*(char *)&this->field7_0x10 == -0x80) {
    bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
    iVar2 = CONCAT31(extraout_var,bVar1);
    this->field6_0xc = iVar2;
    if (iVar2 == -1) {
      return false;
    }
    this->field4_0x4 = this->field4_0x4 + 1;
    this->field8_0x14 = this->field8_0x14 + iVar2;
  }
  bVar1 = *(byte *)&this->field7_0x10;
  bVar3 = bVar1 >> 1;
  *(byte *)&this->field7_0x10 = bVar3;
  if (bVar3 == 0) {
    *(undefined *)&this->field7_0x10 = 0x80;
  }
  return (this->field6_0xc & (uint)bVar1) != 0;
}

