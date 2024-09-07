
ZunResult th06::ScreenEffect::DeletedCallback(ScreenEffect *screen_effect)

{
  screen_effect->calcChainElement->deletedCallback = (ChainLifecycleCallback *)0x0;
  Chain::Cut(&g_Chain,screen_effect->drawChainElement);
  screen_effect->drawChainElement = (ChainElem *)0x0;
  operator_delete(screen_effect);
  return ZUN_SUCCESS;
}

