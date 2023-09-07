
undefined4 FUN_004012c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  ChainElem_00487aac.callback = FUN_00401140;
  ChainElem_00487aac.added_callback = FUN_004013a0;
  ChainElem_00487aac.deleted_callback = FUN_004014d0;
  ChainElem_00487aac.arg = &DAT_0047b900;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_00487aac,1);
  if (iVar1 == 0) {
    ChainElem_0047b8e0.callback = FUN_00401250;
    ChainElem_0047b8e0.added_callback = 0;
    ChainElem_0047b8e0.deleted_callback = 0;
    ChainElem_0047b8e0.arg = &DAT_0047b900;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_0047b8e0,0xf);
    ChainElem_00487acc.callback = FUN_00401290;
    ChainElem_00487acc.added_callback = 0;
    ChainElem_00487acc.deleted_callback = 0;
    ChainElem_00487acc.arg = &DAT_0047b900;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487acc,10);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

