
undefined4 FUN_0040f3f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040e340((undefined4 *)&DAT_00487fe0);
  ChainElem_004b7964.callback = FUN_0040f100;
  ChainElem_004b7964.added_callback = FUN_0040f280;
  ChainElem_004b7964.deleted_callback = FUN_0040f3d0;
  ChainElem_004b7964.arg = &DAT_00487fe0;
  iVar1 = Chain::AddToCalcChain(&CHAIN,&ChainElem_004b7964,10);
  if (iVar1 == 0) {
    ChainElem_004b7984.callback = FUN_0040f1f0;
    ChainElem_004b7984.added_callback = 0;
    ChainElem_004b7984.deleted_callback = 0;
    ChainElem_004b7984.arg = &DAT_00487fe0;
    Chain::AddToDrawChain(&CHAIN,&ChainElem_004b7984,8);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

