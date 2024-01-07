
undefined4 BulletManager::RegisterChain(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((g_Supervisor.cfg.opts & 1) == 0) {
    PTR_DAT_00476438 = &DAT_00476358;
  }
  else {
    PTR_DAT_00476438 = &DAT_004763c8;
  }
  FUN_00413430((undefined4 *)&g_BulletManager);
  DAT_0069bc0c = param_1;
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
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

