
ushort __fastcall FUN_0041e780(ushort *param_1)

{
  ushort uVar1;
  uint local_8;
  
  uVar1 = (*param_1 ^ 0x9630) + 0x9aad;
  local_8 = (uint)uVar1;
  *param_1 = (short)((int)(local_8 & 0xc000) >> 0xe) + uVar1 * 4;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return *param_1;
}

