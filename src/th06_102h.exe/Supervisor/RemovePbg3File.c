
void __thiscall Supervisor::RemovePbg3File(Supervisor *this,int idx)

{
  Pbg3Archive *this_00;
  
  if (this->pbg3Archives[idx] != (Pbg3Archive *)0x0) {
    Pbg3Archive::~Pbg3Archive(this->pbg3Archives[idx]);
    this_00 = this->pbg3Archives[idx];
    if (this_00 != (Pbg3Archive *)0x0) {
      Pbg3Archive::~Pbg3Archive(this_00);
      _free(this_00);
    }
    this->pbg3Archives[idx] = (Pbg3Archive *)0x0;
  }
  return;
}

