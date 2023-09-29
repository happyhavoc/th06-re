
void __thiscall GameContext::RemovePbg3File(GameContext *this,int idx)

{
  Pbg3Archive *_Memory;
  
  if (this->pbg3File[idx] != (Pbg3Archive *)0x0) {
    Pbg3Archive::dtor(this->pbg3File[idx]);
    _Memory = this->pbg3File[idx];
    if (_Memory != (Pbg3Archive *)0x0) {
      func_0x0043ca80();
      _free(_Memory);
    }
    this->pbg3File[idx] = (Pbg3Archive *)0x0;
  }
  return;
}

