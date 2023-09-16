
undefined4 FUN_004148f0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((g_GameContext.cfg.opts & 1) == 0) {
    PTR_DAT_00476438 = &DAT_00476358;
  }
  else {
    PTR_DAT_00476438 = &DAT_004763c8;
  }
  FUN_00413430((undefined4 *)&DAT_005a5ff8);
  DAT_0069bc0c = param_1;
  ChainElem_0069bc10.callback = FUN_004149d0;
  ChainElem_0069bc10.addedCallback = FUN_00416d60;
  ChainElem_0069bc10.deletedCallback = FUN_00417270;
  ChainElem_0069bc10.arg = &DAT_005a5ff8;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_0069bc10,0xb);
  if (iVar1 == 0) {
    ChainElem_005a5fd8.callback = FUN_00416500;
    ChainElem_005a5fd8.addedCallback = 0;
    ChainElem_005a5fd8.deletedCallback = 0;
    ChainElem_005a5fd8.arg = &DAT_005a5ff8;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_005a5fd8,9);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

