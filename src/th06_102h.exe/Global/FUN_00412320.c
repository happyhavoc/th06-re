
undefined4 FUN_00412320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00410e30();
  DAT_004b79c8 = param_1;
  DAT_004b79cc = param_2;
  ChainElem_005a5fb4.callback = FUN_004123e0;
  ChainElem_005a5fb4.field3_0x8 = FUN_00413220;
  ChainElem_005a5fb4.field4_0xc = FUN_00413320;
  ChainElem_005a5fb4.arg = &DAT_004b79c8;
  iVar1 = AddToCalcChain((short *)&DAT_0069d918,&ChainElem_005a5fb4,9);
  if (iVar1 == 0) {
    ChainElem_004b79a8.callback = FUN_00412f10;
    ChainElem_004b79a8.field3_0x8 = 0;
    ChainElem_004b79a8.field4_0xc = 0;
    ChainElem_004b79a8.arg = &DAT_004b79c8;
    iVar1 = AddToDrawChain(0x69d918,&ChainElem_004b79a8,6);
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

