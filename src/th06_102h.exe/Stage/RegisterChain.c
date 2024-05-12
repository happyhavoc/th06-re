
ZunResult Stage::RegisterChain(uint stage)

{
  ZunResult ZVar1;
  int iVar2;
  Stage *pSVar3;
  
  pSVar3 = &g_Stage;
  for (iVar2 = 0xbd; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar3->quadVms = (AnmVm *)0x0;
    pSVar3 = (Stage *)&pSVar3->stdData;
  }
  g_Stage.stdData = (RawStdHeader *)0x0;
  g_Stage.timer.current = 0;
  g_Stage.timer.subFrame = 0.0;
  g_Stage.timer.previous = -999;
  g_Stage.stage = stage;
  g_StageCalcChain.callback = OnUpdate;
  g_StageCalcChain.addedCallback = AddedCallback;
  g_StageCalcChain.deletedCallback = DeletedCallback;
  g_StageCalcChain.arg = &g_Stage;
  iVar2 = Chain::AddToCalcChain(&g_Chain,&g_StageCalcChain,6);
  if (iVar2 == 0) {
    g_StageOnDrawHighPrioChain.callback = OnDrawHighPrio;
    g_StageOnDrawHighPrioChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_StageOnDrawHighPrioChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_StageOnDrawHighPrioChain.arg = &g_Stage;
    Chain::AddToDrawChain(&g_Chain,&g_StageOnDrawHighPrioChain,3);
    g_StageOnDrawLowPrioChain.callback = OnDrawLowPrio;
    g_StageOnDrawLowPrioChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_StageOnDrawLowPrioChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_StageOnDrawLowPrioChain.arg = &g_Stage;
    Chain::AddToDrawChain(&g_Chain,&g_StageOnDrawLowPrioChain,4);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

