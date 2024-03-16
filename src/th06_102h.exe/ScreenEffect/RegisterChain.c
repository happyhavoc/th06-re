
ScreenEffect *
ScreenEffect::RegisterChain(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ScreenEffect *pSVar2;
  ScreenEffect *calcChainArgument;
  ChainElem *drawChainElement;
  ChainElem *calcChainElement;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046926b;
  local_10 = ExceptionList;
  calcChainElement = (ChainElem *)0x0;
  drawChainElement = (ChainElem *)0x0;
  ExceptionList = &local_10;
  calcChainArgument = (ScreenEffect *)operator_new(0x30);
  local_8 = 0;
  if (calcChainArgument == (ScreenEffect *)0x0) {
    calcChainArgument = (ScreenEffect *)0x0;
  }
  else {
    ZunTimer::Initialize(&calcChainArgument->timer);
  }
  local_8 = 0xffffffff;
  if (calcChainArgument == (ScreenEffect *)0x0) {
    calcChainArgument = (ScreenEffect *)0x0;
  }
  else {
    pSVar2 = calcChainArgument;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->field0_0x0 = 0;
      pSVar2 = (ScreenEffect *)&pSVar2->calcChainElement;
    }
    if (param_1 == 0) {
      calcChainElement = Chain::CreateElem(&g_Chain,calcChainElementCallback);
      drawChainElement = Chain::CreateElem(&g_Chain,drawChainCallback);
    }
    else if (param_1 == 1) {
      calcChainElement = Chain::CreateElem(&g_Chain,calcChainElementCallback_2);
    }
    else if (param_1 == 2) {
      calcChainElement = Chain::CreateElem(&g_Chain,calcChainElementCallback_3);
      drawChainElement = Chain::CreateElem(&g_Chain,drawChainCallback_2);
    }
    calcChainElement->addedCallback = screenEffectAddCallback;
    calcChainElement->deletedCallback = screenEffectDeletedCallback;
    calcChainElement->arg = calcChainArgument;
    calcChainArgument->field0_0x0 = param_1;
    calcChainArgument->field5_0x14 = param_2;
    calcChainArgument->field6_0x18 = param_3;
    calcChainArgument->field7_0x1c = param_4;
    calcChainArgument->field8_0x20 = param_5;
    iVar1 = Chain::AddToCalcChain(&g_Chain,calcChainElement,0xe);
    if (iVar1 == 0) {
      if (drawChainElement != (ChainElem *)0x0) {
        drawChainElement->arg = calcChainArgument;
        Chain::AddToDrawChain(&g_Chain,drawChainElement,0x10);
      }
      calcChainArgument->calcChainElement = calcChainElement;
      calcChainArgument->drawChainElement = drawChainElement;
    }
    else {
      calcChainArgument = (ScreenEffect *)0x0;
    }
  }
  ExceptionList = local_10;
  return calcChainArgument;
}

