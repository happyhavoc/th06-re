
ushort FUN_0041e780(void)

{
  ushort uVar1;
  ushort *in_ECX;
  uint local_8;
  
  uVar1 = (*in_ECX ^ 0x9630) + 0x9aad;
  local_8 = (uint)uVar1;
  *in_ECX = (short)((int)(local_8 & 0xc000) >> 0xe) + uVar1 * 4;
  *(int *)(in_ECX + 2) = *(int *)(in_ECX + 2) + 1;
  return *in_ECX;
}

