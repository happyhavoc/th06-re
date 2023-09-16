
int AsciiManager::RegisterChain(void)

{
  int iVar1;
  
  ChainElem_00487aac.callback = FUN_00401140;
  ChainElem_00487aac.addedCallback = AddedCallback;
  ChainElem_00487aac.deletedCallback = DeletedCallback;
  ChainElem_00487aac.arg = &g_AsciiManager;
  iVar1 = Chain::AddToCalcChain(&Chain_0069d918,&ChainElem_00487aac,1);
  if (iVar1 == 0) {
    ChainElem_0047b8e0.callback = FUN_00401250;
    ChainElem_0047b8e0.addedCallback = 0;
    ChainElem_0047b8e0.deletedCallback = 0;
    ChainElem_0047b8e0.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&Chain_0069d918,&ChainElem_0047b8e0,0xf);
    ChainElem_00487acc.callback = FUN_00401290;
    ChainElem_00487acc.addedCallback = 0;
    ChainElem_00487acc.deletedCallback = 0;
    ChainElem_00487acc.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&Chain_0069d918,&ChainElem_00487acc,10);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

