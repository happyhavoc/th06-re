
uint FUN_0041e7f0(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = FUN_0041e780();
  uVar2 = FUN_0041e780();
  return uVar2 & 0xffff | (uint)uVar1 << 0x10;
}

