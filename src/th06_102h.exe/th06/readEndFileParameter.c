
long __fastcall th06::readEndFileParameter(Ending *end)

{
  long read_result;
  
  read_result = _atol(end->endFileDataPtr);
  while (*end->endFileDataPtr != '\0') {
    end->endFileDataPtr = end->endFileDataPtr + 1;
  }
  while (*end->endFileDataPtr == '\0') {
    end->endFileDataPtr = end->endFileDataPtr + 1;
  }
  return read_result;
}

