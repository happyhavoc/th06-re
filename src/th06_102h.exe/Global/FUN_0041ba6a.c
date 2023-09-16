
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041ba6a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_0069d724 = FUN_0041b663;
  _DAT_0069d728 = FUN_0041bb02;
  _DAT_0069d72c = FUN_0041c1f7;
  _DAT_0069d73c = &DAT_0069bca0;
  DAT_0069d6d0 = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,(ChainElem *)&DAT_0069d720,4);
  if (iVar1 == 0) {
    _DAT_0069d744 = FUN_0041ba4a;
    _DAT_0069d748 = 0;
    _DAT_0069d74c = 0;
    _DAT_0069d75c = &DAT_0069bca0;
    Chain::AddToDrawChain(&g_Chain,(ChainElem *)&DAT_0069d740,2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

