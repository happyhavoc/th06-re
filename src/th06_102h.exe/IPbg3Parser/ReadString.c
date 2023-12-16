
BOOL __thiscall IPbg3Parser::ReadString(IPbg3Parser *this,char *out,uint maxSize)

{
  char b;
  uint idx;
  
  if (out == (char *)0x0) {
    return 0;
  }
  idx = 0;
  if (maxSize != 0) {
    do {
      b = (*(code *)this->vtbl->ReadInt)(8);
      out[idx] = b;
      if (b == '\0') {
        return 1;
      }
      idx = idx + 1;
    } while (idx < maxSize);
  }
  return 0;
}

