
ushort __thiscall Rng::GetRandomU16(Rng *this)

{
  ushort uVar1;
  uint local_8;
  
  uVar1 = (this->seed ^ 38448) + 39597;
  local_8 = (uint)uVar1;
  this->seed = (short)((int)(local_8 & 0xc000) >> 0xe) + uVar1 * 4;
  this->unk4 = this->unk4 + 1;
  return this->seed;
}

