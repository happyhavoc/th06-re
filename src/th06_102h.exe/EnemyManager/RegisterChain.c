
ZunResult th06::EnemyManager::RegisterChain(char *stgEnm1,char *stgEnm2)

{
  int iVar1;
  ZunResult ZVar2;
  
  Initialize(&g_EnemyManager);
  g_EnemyManager.stg_enm_anm_filename = stgEnm1;
  g_EnemyManager.stg_enm2_anm_filename = stgEnm2;
  g_EnemyManagerCalcChain.callback = OnUpdate;
  g_EnemyManagerCalcChain.addedCallback = AddedCallback;
  g_EnemyManagerCalcChain.deletedCallback = DeletedCallback;
  g_EnemyManagerCalcChain.arg = &g_EnemyManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_EnemyManagerCalcChain,9);
  if (iVar1 == 0) {
    g_EnemyManagerDrawChain.callback = OnDraw;
    g_EnemyManagerDrawChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_EnemyManagerDrawChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_EnemyManagerDrawChain.arg = &g_EnemyManager;
    iVar1 = Chain::AddToDrawChain(&g_Chain,&g_EnemyManagerDrawChain,6);
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

