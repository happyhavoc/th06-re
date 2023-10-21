
undefined4 Stage::RegisterChain(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  Stage *pSVar3;
  
  pSVar3 = &g_Stage;
  for (iVar2 = 0xbd; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar3->quadVms = (AnmVm *)0x0;
    pSVar3 = (Stage *)&pSVar3->stdData;
  }
  g_Stage.stdData = (byte *)0x0;
  g_Stage.field9_0x2c.current = 0;
  g_Stage.field9_0x2c.subFrame = 0.0;
  g_Stage.field9_0x2c.previous = -999;
  g_Stage.field10_0x38 = param_1;
  ChainElem_00487e24.callback = FUN_00403810;
  ChainElem_00487e24.addedCallback = AddedCallback;
  ChainElem_00487e24.deletedCallback = DeletedCallback;
  ChainElem_00487e24.arg = &g_Stage;
  iVar2 = Chain::AddToCalcChain(&g_Chain,&ChainElem_00487e24,6);
  if (iVar2 == 0) {
    ChainElem_00487af0.callback = FUN_004040d0;
    ChainElem_00487af0.addedCallback = 0;
    ChainElem_00487af0.deletedCallback = 0;
    ChainElem_00487af0.arg = &g_Stage;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487af0,3);
    ChainElem_00487e04.callback = FUN_00404180;
    ChainElem_00487e04.addedCallback = 0;
    ChainElem_00487e04.deletedCallback = 0;
    ChainElem_00487e04.arg = &g_Stage;
    Chain::AddToDrawChain(&g_Chain,&ChainElem_00487e04,4);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

