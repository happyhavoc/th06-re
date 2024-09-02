
ZunResult EnemyManager::RegisterChain(char *stgEnm1,char *stgEnm2)

{
  int iVar1;
  ZunResult ZVar2;
  
  Initialize(&g_EnemyManager);
  g_EnemyManager.stg_enm_anm_filename = stgEnm1;
  g_EnemyManager.stg_enm2_anm_filename = stgEnm2;
  ChainElem_005a5fb4.callback = OnUpdate;
  ChainElem_005a5fb4.addedCallback = AddedCallback;
  ChainElem_005a5fb4.deletedCallback = DeletedCallback;
  ChainElem_005a5fb4.arg = &g_EnemyManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&ChainElem_005a5fb4,9);
  if (iVar1 == 0) {
    ChainElem_004b79a8.callback = OnDraw;
    ChainElem_004b79a8.addedCallback = (ChainLifecycleCallback *)0x0;
    ChainElem_004b79a8.deletedCallback = (ChainLifecycleCallback *)0x0;
    ChainElem_004b79a8.arg = &g_EnemyManager;
    iVar1 = Chain::AddToDrawChain(&g_Chain,&ChainElem_004b79a8,6);
    if (iVar1 == 0) {
      ZVar2 = ZUN_SUCCESS;
    }
    else {
      ZVar2 = ZUN_ERROR;
    }
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

