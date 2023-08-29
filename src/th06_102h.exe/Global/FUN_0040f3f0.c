
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040f3f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040e340();
  _DAT_004b7968 = FUN_0040f100;
  _DAT_004b796c = FUN_0040f280;
  _DAT_004b7970 = FUN_0040f3d0;
  _DAT_004b7980 = &DAT_00487fe0;
  iVar1 = Chain::AddToCalcChain(&CHAIN,(ChainElem *)&DAT_004b7964,10);
  if (iVar1 == 0) {
    _DAT_004b7988 = FUN_0040f1f0;
    _DAT_004b798c = 0;
    _DAT_004b7990 = 0;
    _DAT_004b79a0 = &DAT_00487fe0;
    Chain::AddToDrawChain(&CHAIN,(ChainElem *)&DAT_004b7984,8);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

