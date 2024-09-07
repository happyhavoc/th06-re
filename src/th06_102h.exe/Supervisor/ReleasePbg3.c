
void __thiscall th06::Supervisor::ReleasePbg3(Supervisor *this,int idx)

{
  Pbg3Archive *this_00;
  
  if (this->pbg3Archives[idx] != (Pbg3Archive *)0x0) {
    Pbg3Archive::Release(this->pbg3Archives[idx]);
    this_00 = this->pbg3Archives[idx];
    if (this_00 != (Pbg3Archive *)0x0) {
      Pbg3Archive::~Pbg3Archive(this_00);
      operator_delete(this_00);
    }
    this->pbg3Archives[idx] = (Pbg3Archive *)0x0;
  }
  return;
}

