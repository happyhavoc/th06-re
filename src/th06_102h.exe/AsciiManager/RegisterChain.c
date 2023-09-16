
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int AsciiManager::RegisterChain(void)

{
  int iVar1;
  
  g_AsciiManagerChain._0_4_ = FUN_00401140;
  g_AsciiManagerChain.callback = AddedCallback;
  g_AsciiManagerChain.addedCallback = DeletedCallback;
  g_AsciiManagerChain.unkPtr = (ChainElem *)&g_AsciiManager;
  iVar1 = Chain::AddToCalcChain((Chain *)&DAT_0069d918,(ChainElem *)&DAT_00487aac,1);
  if (iVar1 == 0) {
    ChainElem_0047b8e0.callback = FUN_00401250;
    ChainElem_0047b8e0.addedCallback = 0;
    ChainElem_0047b8e0.deletedCallback = 0;
    ChainElem_0047b8e0.arg = &g_AsciiManager;
    Chain::AddToDrawChain((Chain *)&DAT_0069d918,&ChainElem_0047b8e0,0xf);
    _DAT_00487ad0 = FUN_00401290;
    _DAT_00487ad4 = 0;
    _DAT_00487ad8 = 0;
    _DAT_00487ae8 = &g_AsciiManager;
    Chain::AddToDrawChain((Chain *)&DAT_0069d918,(ChainElem *)&g_AsciiManagerChain.arg,10);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

