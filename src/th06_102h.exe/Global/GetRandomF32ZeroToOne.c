
float __fastcall GetRandomF32ZeroToOne(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = GetRandomU32(param_1);
  return (float)(ulonglong)uVar1 / 4.294967e+09;
}

