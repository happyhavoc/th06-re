
undefined4 EnemyManager::RegisterChain(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00410e30(&DAT_004b79c8);
  DAT_004b79c8 = param_1;
  DAT_004b79cc = param_2;
  ChainElem_005a5fb4.callback = FUN_004123e0;
  ChainElem_005a5fb4.addedCallback = FUN_00413220;
  ChainElem_005a5fb4.deletedCallback = FUN_00413320;
  ChainElem_005a5fb4.arg = &DAT_004b79c8;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_005a5fb4,9);
  if (iVar1 == 0) {
    ChainElem_004b79a8.callback = FUN_00412f10;
    ChainElem_004b79a8.addedCallback = 0;
    ChainElem_004b79a8.deletedCallback = 0;
    ChainElem_004b79a8.arg = &DAT_004b79c8;
    iVar1 = Chain::AddToDrawChain(&g_Chain,&ChainElem_004b79a8,6);
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
