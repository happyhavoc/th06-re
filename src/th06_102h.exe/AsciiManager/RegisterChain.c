
int AsciiManager::RegisterChain(void)

{
  int iVar1;
  
  ChainElem_00487aac.callback = FUN_00401140;
  ChainElem_00487aac.added_callback = AddedCallback;
  ChainElem_00487aac.deleted_callback = DeletedCallback;
  ChainElem_00487aac.arg = &g_AsciiManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_00487aac,1);
  if (iVar1 == 0) {
    ChainElem_0047b8e0.callback = FUN_00401250;
    ChainElem_0047b8e0.added_callback = 0;
    ChainElem_0047b8e0.deleted_callback = 0;
    ChainElem_0047b8e0.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_0047b8e0,0xf);
    ChainElem_00487acc.callback = FUN_00401290;
    ChainElem_00487acc.added_callback = 0;
    ChainElem_00487acc.deleted_callback = 0;
    ChainElem_00487acc.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487acc,10);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

