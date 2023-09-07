
byte __thiscall Pbg3FileStuff::Unk3(Pbg3FileStuff *this)

{
  byte bVar1;
  
  if ((uint)this->field4_0x4 < (uint)this->field5_0x8) {
    this->field4_0x4 = this->field4_0x4 + 1;
  }
  bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
  return bVar1;
}

