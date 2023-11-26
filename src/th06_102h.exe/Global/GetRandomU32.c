
undefined4 __fastcall GetRandomU32(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = GetRandomU16(param_1);
  uVar2 = GetRandomU16(param_1);
  return CONCAT22(uVar1,uVar2);
}

