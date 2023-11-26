
undefined4 GameManager::RegisterChain(void)

{
  int iVar1;
  undefined4 uVar2;
  
  g_GameManagerCalcChain.callback = Callback;
  g_GameManagerCalcChain.addedCallback = FUN_0041bb02;
  g_GameManagerCalcChain.deletedCallback = FUN_0041c1f7;
  g_GameManagerCalcChain.arg = &g_GameManager;
  g_GameManager.unk_1a30 = 0;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_GameManagerCalcChain,4);
  if (iVar1 == 0) {
    g_GameManagerDrawChain.callback = FUN_0041ba4a;
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

