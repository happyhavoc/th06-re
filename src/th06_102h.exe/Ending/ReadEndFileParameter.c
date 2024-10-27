
long __thiscall th06::Ending::ReadEndFileParameter(Ending *this)

{
  long read_result;
  
  read_result = _atol(this->endFileDataPtr);
  while (*this->endFileDataPtr != '\0') {
    this->endFileDataPtr = this->endFileDataPtr + 1;
  }
  while (*this->endFileDataPtr == '\0') {
    this->endFileDataPtr = this->endFileDataPtr + 1;
  }
  return read_result;
}

