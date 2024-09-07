
float __thiscall th06::Rng::GetRandomF32ZeroToOne(Rng *this)

{
  uint uVar1;
  
  uVar1 = GetRandomU32(this);
  return (float)(ulonglong)uVar1 / 4.294967e+09;
}

