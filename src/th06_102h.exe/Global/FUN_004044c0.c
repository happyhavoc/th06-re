
undefined4 FUN_004044c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00487b10;
  for (iVar2 = 0xbd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_00487b14 = 0;
  DAT_00487b44 = 0;
  DAT_00487b40 = 0;
  DAT_00487b3c = 0xfffffc19;
  DAT_00487b48 = param_1;
  ChainElem_00487e24.callback = FUN_00403810;
  ChainElem_00487e24.added_callback = FUN_00404300;
  ChainElem_00487e24.deleted_callback = FUN_004045e0;
  ChainElem_00487e24.arg = &DAT_00487b10;
  iVar2 = Chain::AddToCalcChain(&g_Chain,&ChainElem_00487e24,6);
  if (iVar2 == 0) {
    ChainElem_00487af0.callback = FUN_004040d0;
    ChainElem_00487af0.added_callback = 0;
    ChainElem_00487af0.deleted_callback = 0;
    ChainElem_00487af0.arg = &DAT_00487b10;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487af0,3);
    ChainElem_00487e04.callback = FUN_00404180;
    ChainElem_00487e04.added_callback = 0;
    ChainElem_00487e04.deleted_callback = 0;
    ChainElem_00487e04.arg = &DAT_00487b10;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487e04,4);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

