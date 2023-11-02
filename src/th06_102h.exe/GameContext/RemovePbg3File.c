
void __thiscall GameContext::RemovePbg3File(GameContext *this,int idx)

{
  Pbg3Archive *this_00;
  
  if (this->pbg3File[idx] != (Pbg3Archive *)0x0) {
    Pbg3Archive::~Pbg3Archive(this->pbg3File[idx]);
    this_00 = this->pbg3File[idx];
    if (this_00 != (Pbg3Archive *)0x0) {
      Pbg3Archive::~Pbg3Archive(this_00);
      _free(this_00);
    }
    this->pbg3File[idx] = (Pbg3Archive *)0x0;
  }
  return;
}

