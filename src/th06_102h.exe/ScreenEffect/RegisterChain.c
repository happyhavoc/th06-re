
ScreenEffect *
ScreenEffect::RegisterChain(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ScreenEffect *pSVar2;
  ScreenEffect *local_2c;
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
  local_2c = (ScreenEffect *)operator_new(0x30);
  local_8 = 0;
  if (local_2c == (ScreenEffect *)0x0) {
    local_2c = (ScreenEffect *)0x0;
  }
  else {
    ZunTimer::Initialize(&local_2c->timer);
  }
  local_8 = 0xffffffff;
  if (local_2c == (ScreenEffect *)0x0) {
    local_2c = (ScreenEffect *)0x0;
  }
  else {
    pSVar2 = local_2c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->field0_0x0 = 0;
      pSVar2 = (ScreenEffect *)&pSVar2->calcChainElement;
    }
    if (param_1 == 0) {
      calcChainElement = Chain::CreateElem(&g_Chain,FUN_0042f800);
      drawChainElement = Chain::CreateElem(&g_Chain,FUN_0042fee0);
    }
    else if (param_1 == 1) {
      calcChainElement = Chain::CreateElem(&g_Chain,FUN_0042ffc0);
    }
    else if (param_1 == 2) {
      calcChainElement = Chain::CreateElem(&g_Chain,FUN_0042fc80);
      drawChainElement = Chain::CreateElem(&g_Chain,FUN_0042ff70);
    }
    calcChainElement->addedCallback = FUN_004301f0;
    calcChainElement->deletedCallback = FUN_00430220;
    calcChainElement->arg = local_2c;
    local_2c->field0_0x0 = param_1;
    local_2c->field5_0x14 = param_2;
    local_2c->field6_0x18 = param_3;
    local_2c->field7_0x1c = param_4;
    local_2c->field8_0x20 = param_5;
    iVar1 = Chain::AddToCalcChain(&g_Chain,calcChainElement,0xe);
    if (iVar1 == 0) {
      if (drawChainElement != (ChainElem *)0x0) {
        drawChainElement->arg = local_2c;
        Chain::AddToDrawChain(&g_Chain,drawChainElement,0x10);
      }
      local_2c->calcChainElement = calcChainElement;
      local_2c->drawChainElement = drawChainElement;
    }
    else {
      local_2c = (ScreenEffect *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

