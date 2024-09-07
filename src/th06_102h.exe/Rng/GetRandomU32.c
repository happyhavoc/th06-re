
undefined4 __thiscall th06::Rng::GetRandomU32(Rng *this)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = GetRandomU16(this);
  uVar2 = GetRandomU16(this);
  return CONCAT22(uVar1,uVar2);
}

