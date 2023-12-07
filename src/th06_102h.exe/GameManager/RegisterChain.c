
undefined4 GameManager::RegisterChain(void)

{
  int iVar1;
  undefined4 uVar2;
  
  g_GameManagerCalcChain.callback = OnUpdate;
  g_GameManagerCalcChain.addedCallback = AddedCallback;
  g_GameManagerCalcChain.deletedCallback = DeletedCallback;
  g_GameManagerCalcChain.arg = &g_GameManager;
  g_GameManager.unk_1a30 = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_GameManagerCalcChain,4);
  if (iVar1 == 0) {
    g_GameManagerDrawChain.callback = OnDraw;
    g_GameManagerDrawChain.addedCallback = 0;
    g_GameManagerDrawChain.deletedCallback = 0;
    g_GameManagerDrawChain.arg = &g_GameManager;
    Chain::AddToDrawChain(&g_Chain,&g_GameManagerDrawChain,2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

