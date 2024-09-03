
ZunResult MusicRoom::DeletedCallback(MusicRoom *param_1)

{
  operator_delete(param_1->field11_0x20);
  param_1->field11_0x20 = (char *)0x0;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  AnmManager::ReleaseAnm(g_AnmManager,0x29);
  AnmManager::ReleaseAnm(g_AnmManager,0x2a);
  AnmManager::ReleaseAnm(g_AnmManager,0x2b);
  Chain::Cut(&g_Chain,param_1->calc_chain);
  param_1->calc_chain = (ChainElem *)0x0;
  return ZUN_SUCCESS;
}

