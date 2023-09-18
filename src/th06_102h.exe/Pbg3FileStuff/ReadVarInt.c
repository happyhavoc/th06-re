
uint __thiscall Pbg3FileStuff::ReadVarInt(Pbg3FileStuff *this)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  bVar1 = (*this->vtbl->ReadBit)(this);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar3 = 2;
  }
  bVar1 = (*this->vtbl->ReadBit)(this);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    uVar3 = uVar3 | 1;
  }
  switch(uVar3) {
  case 0:
    uVar3 = 0x80;
    break;
  case 1:
    uVar3 = 0x8000;
    break;
  case 2:
    uVar3 = 0x800000;
    break;
  case 3:
    uVar3 = 0x80000000;
    break;
  default:
    goto switchD_0043c338_caseD_4;
  }
  do {
    bVar1 = (*this->vtbl->ReadBit)(this);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      uVar2 = uVar2 | uVar3;
    }
    uVar3 = uVar3 >> 1;
  } while (uVar3 != 0);
switchD_0043c338_caseD_4:
  return uVar2;
}

