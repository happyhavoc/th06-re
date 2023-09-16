
undefined4 AddInputChain(void)

{
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_006c6ea0 = 0;
  DAT_006c6ea4 = 0xffffffff;
  DAT_006c6e9c = 0;
  pCVar1 = ChainElem::Allocate(InputChainCallback);
  pCVar1->arg = &DAT_006c6d18;
  pCVar1->addedCallback = InputChainAddedCallback;
  pCVar1->deletedCallback = InputChainRemovedCallback;
  iVar2 = Chain::AddToCalcChain((Chain *)&DAT_0069d918,pCVar1,0);
  if (iVar2 == 0) {
    pCVar1 = ChainElem::Allocate(FUN_00423785);
    pCVar1->arg = &DAT_006c6d18;
    Chain::AddToDrawChain((Chain *)&DAT_0069d918,pCVar1,0xe);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

