
ZunResult th06::BulletManager::RegisterChain(char *etama_anm_path)

{
  int iVar1;
  ZunResult ZVar2;
  
  if ((g_Supervisor.cfg.opts & 1) == 0) {
    g_BulletColor = g_BulletColorWithTextureBlending;
  }
  else {
    g_BulletColor = g_BulletColorWithoutTextureBlending;
  }
  InitializeToZero(&g_BulletManager);
  g_BulletManager.etama_anm_filename = etama_anm_path;
  g_BulletManagerCalcChain.callback = OnUpdate;
  g_BulletManagerCalcChain.addedCallback = AddedCallback;
  g_BulletManagerCalcChain.deletedCallback = DeletedCallback;
  g_BulletManagerCalcChain.arg = &g_BulletManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_BulletManagerCalcChain,0xb);
  if (iVar1 == 0) {
    g_BulletManagerDrawChain.callback = OnDraw;
    g_BulletManagerDrawChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_BulletManagerDrawChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_BulletManagerDrawChain.arg = &g_BulletManager;
    Chain::AddToDrawChain(&g_Chain,&g_BulletManagerDrawChain,9);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

