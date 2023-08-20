
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00412320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00410e30();
  DAT_004b79c8 = param_1;
  DAT_004b79cc = param_2;
  _DAT_005a5fb8 = FUN_004123e0;
  _DAT_005a5fbc = FUN_00413220;
  _DAT_005a5fc0 = FUN_00413320;
  _DAT_005a5fd0 = &DAT_004b79c8;
  iVar1 = FUN_0041c860(&DAT_005a5fb4,9);
  if (iVar1 == 0) {
    _DAT_004b79ac = FUN_00412f10;
    _DAT_004b79b0 = 0;
    _DAT_004b79b4 = 0;
    _DAT_004b79c4 = &DAT_004b79c8;
    iVar1 = FUN_0041c940(&DAT_004b79a8,6);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

