
undefined4 FUN_00430220(ScreenEffect *param_1)

{
  param_1->calcChainElement->deletedCallback = (ChainLifecycleCallback *)0x0;
  Chain::Cut(&g_Chain,param_1->drawChainElement);
  param_1->drawChainElement = (ChainElem *)0x0;
  _free(param_1);
  return 0;
}

