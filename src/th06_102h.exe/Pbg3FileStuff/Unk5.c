
undefined4 __thiscall Pbg3FileStuff::Unk5(Pbg3FileStuff *this)

{
  char cVar1;
  
  if ((this->fileAbstraction).base.handle != (HANDLE)0x0) {
    cVar1 = *(char *)&this->field7_0x10;
    while (cVar1 != -0x80) {
      (***(code ***)this)();
      cVar1 = *(char *)&this->field7_0x10;
    }
    return 1;
  }
  return 0;
}

