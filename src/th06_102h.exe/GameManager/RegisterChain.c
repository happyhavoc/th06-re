
ZunResult GameManager::RegisterChain(void)

{
  int iVar1;
  ZunResult ZVar2;
  
  g_GameManagerCalcChain.callback = OnUpdate;
  g_GameManagerCalcChain.addedCallback = AddedCallback;
  g_GameManagerCalcChain.deletedCallback = DeletedCallback;
  g_GameManagerCalcChain.arg = &g_GameManager;
  g_GameManager.game_frames = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_GameManagerCalcChain,4);
  if (iVar1 == 0) {
    g_GameManagerDrawChain.callback = OnDraw;
    g_GameManagerDrawChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_GameManagerDrawChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_GameManagerDrawChain.arg = &g_GameManager;
    Chain::AddToDrawChain(&g_Chain,&g_GameManagerDrawChain,2);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

