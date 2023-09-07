
uint __thiscall Pbg3FileStuff::Unk2(Pbg3FileStuff *this,char param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  int iVar2;
  
  uVar4 = 1 << (param_1 - 1U & 0x1f);
  uVar3 = 0;
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return 0;
  }
  do {
    if (uVar4 == 0) {
      return uVar3;
    }
    if (*(char *)&this->field7_0x10 == -0x80) {
      bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
      iVar2 = CONCAT31(extraout_var,bVar1);
      this->field6_0xc = iVar2;
      if (iVar2 == -1) {
        return 0;
      }
      this->field4_0x4 = this->field4_0x4 + 1;
      this->field8_0x14 = this->field8_0x14 + iVar2;
    }
    if ((*(byte *)&this->field7_0x10 & *(byte *)&this->field6_0xc) != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 >> 1;
    bVar1 = *(byte *)&this->field7_0x10 >> 1;
    *(byte *)&this->field7_0x10 = bVar1;
    if (bVar1 == 0) {
      *(undefined *)&this->field7_0x10 = 0x80;
    }
  } while( true );
}

