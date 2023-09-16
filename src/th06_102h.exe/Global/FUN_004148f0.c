
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  _DAT_0069bc14 = FUN_004149d0;
  _DAT_0069bc18 = FUN_00416d60;
  _DAT_0069bc1c = FUN_00417270;
  _DAT_0069bc2c = &DAT_005a5ff8;
  iVar1 = Chain::AddToCalcChain(&Chain_0069d918,(ChainElem *)&DAT_0069bc10,0xb);
  if (iVar1 == 0) {
    _DAT_005a5fdc = FUN_00416500;
    _DAT_005a5fe0 = 0;
    _DAT_005a5fe4 = 0;
    _DAT_005a5ff4 = &DAT_005a5ff8;
    Chain::AddToDrawChain(&Chain_0069d918,(ChainElem *)&DAT_005a5fd8,9);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

