
undefined4 FUN_00412320(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00410e30();
  DAT_004b79c8 = param_1;
  DAT_004b79cc = param_2;
  ChainElem_005a5fb4.callback = FUN_004123e0;
  ChainElem_005a5fb4.added_callback = FUN_00413220;
  ChainElem_005a5fb4.deleted_callback = FUN_00413320;
  ChainElem_005a5fb4.arg = &DAT_004b79c8;
  iVar1 = AddToCalcChain(&CHAIN,&ChainElem_005a5fb4,9);
  if (iVar1 == 0) {
    ChainElem_004b79a8.callback = FUN_00412f10;
    ChainElem_004b79a8.added_callback = 0;
    ChainElem_004b79a8.deleted_callback = 0;
    ChainElem_004b79a8.arg = &DAT_004b79c8;
    iVar1 = AddToDrawChain(&CHAIN,&ChainElem_004b79a8,6);
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

