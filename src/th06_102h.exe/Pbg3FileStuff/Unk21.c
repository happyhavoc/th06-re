
undefined4 __thiscall Pbg3FileStuff::Unk21(Pbg3FileStuff *this,int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      cVar1 = (*(code *)this->vtbl->ReadInt)(8);
      *(char *)(uVar2 + param_1) = cVar1;
      if (cVar1 == '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 0;
}

