
void __thiscall GameContext::RemovePbg3File(GameContext *this,int idx)

{
  Pbg3File *this_00;
  
  if (this->pbg3File[idx] != (Pbg3File *)0x0) {
    Pbg3File_conflict1::SomeKindOfDelete((Pbg3File_conflict1 *)this->pbg3File[idx]);
    this_00 = this->pbg3File[idx];
    if (this_00 != (Pbg3File *)0x0) {
      Pbg3File_conflict1::SomeKindOfDelete((Pbg3File_conflict1 *)this_00);
      _free(this_00);
    }
    this->pbg3File[idx] = (Pbg3File *)0x0;
  }
  return;
}

