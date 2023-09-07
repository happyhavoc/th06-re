
void __thiscall GameContext::RemovePbg3File(GameContext *this,int idx)

{
  Pbg3File *_Memory;
  
  if (this->pbg3File[idx] != (Pbg3File *)0x0) {
    FUN_0043c8d0(this->pbg3File[idx]);
    _Memory = this->pbg3File[idx];
    if (_Memory != (Pbg3File *)0x0) {
      thunk_FUN_0043c8d0(_Memory);
      _free(_Memory);
    }
    this->pbg3File[idx] = (Pbg3File *)0x0;
  }
  return;
}

