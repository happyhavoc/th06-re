
int BulletManager::RegisterChain(char *etama_anm_path)

{
  int iVar1;
  
  if ((g_Supervisor.cfg.opts & 1) == 0) {
    PTR_DAT_00476438 = &DAT_00476358;
  }
  else {
    PTR_DAT_00476438 = &DAT_004763c8;
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
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

