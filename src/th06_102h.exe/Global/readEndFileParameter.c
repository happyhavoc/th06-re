
long __fastcall readEndFileParameter(Ending *end)

{
  long lVar1;
  
  lVar1 = _atol((char *)end->endFileDataPtr);
  while (*(char *)end->endFileDataPtr != '\0') {
    end->endFileDataPtr = (int *)((int)end->endFileDataPtr + 1);
  }
  while (*(char *)end->endFileDataPtr == '\0') {
    end->endFileDataPtr = (int *)((int)end->endFileDataPtr + 1);
  }
  return lVar1;
}

