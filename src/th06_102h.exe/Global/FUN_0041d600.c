
ushort FUN_0041d600(ushort *param_1,short param_2,ushort param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar1 = param_3;
    if ((param_4 & uVar2) == 0) {
      uVar1 = 0;
    }
    *param_1 = *param_1 | uVar1;
    if ((param_4 & uVar2) == 0) {
      param_3 = 0;
    }
  }
  return param_3;
}

