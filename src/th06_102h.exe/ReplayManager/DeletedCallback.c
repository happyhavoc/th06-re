
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 ReplayManager::DeletedCallback(ReplayManager *param_1)

{
  Chain::Cut(&g_Chain,param_1->draw_chain);
  param_1->draw_chain = (ChainElem *)0x0;
  if (param_1->demo_calc_chain != (ChainElem *)0x0) {
    Chain::Cut(&g_Chain,param_1->demo_calc_chain);
    param_1->demo_calc_chain = (ChainElem *)0x0;
  }
  _free(g_ReplayManager->data);
  _free(g_ReplayManager);
  g_ReplayManager = (ReplayManager *)0x0;
  return 0;
}

