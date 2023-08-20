
undefined4 FUN_0041ea04(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0041ea63(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if ((param_3 == 0x19) || (param_3 == 0x1a)) {
      uVar2 = FUN_0041ea63(param_1,param_2,0x15);
    }
    else if (param_3 == 0x17) {
      uVar2 = FUN_0041ea63(param_1,param_2,0x16);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

