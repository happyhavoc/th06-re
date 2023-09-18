
undefined4 __thiscall Pbg3FileStuff::ReadString(Pbg3FileStuff *this,char *out,uint maxSize)

{
  char cVar1;
  uint uVar2;
  
  if (out == (char *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (maxSize != 0) {
    do {
      cVar1 = (*(code *)this->vtbl->ReadInt)(8);
      out[uVar2] = cVar1;
      if (cVar1 == '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < maxSize);
  }
  return 0;
}

