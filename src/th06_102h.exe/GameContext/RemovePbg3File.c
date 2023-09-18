
void __thiscall GameContext::RemovePbg3File(GameContext *this,int idx)

{
  Pbg3File *_Memory;
  
  if (this->pbg3File[idx] != (Pbg3File *)0x0) {
    Pbg3File::dtor(this->pbg3File[idx]);
    _Memory = this->pbg3File[idx];
    if (_Memory != (Pbg3File *)0x0) {
      func_0x0043ca80();
      _free(_Memory);
    }
    this->pbg3File[idx] = (Pbg3File *)0x0;
  }
  return;
}

