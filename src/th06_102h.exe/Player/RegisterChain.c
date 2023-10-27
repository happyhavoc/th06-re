
undefined4 Player::RegisterChain(undefined param_1)

{
  undefined4 uVar1;
  int iVar2;
  Player *pPVar3;
  
  pPVar3 = &g_Player;
  for (iVar2 = 0x263c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pPVar3 = 0;
    pPVar3 = (Player *)&pPVar3->field_0x4;
  }
  g_Player._30140_4_ = 0;
  g_Player._30136_4_ = 0;
  g_Player._30132_4_ = 0xfffffc19;
  g_Player._2529_1_ = param_1;
  g_Player._39140_4_ = ChainElem::Allocate(OnUpdate);
  g_Player._39144_4_ = ChainElem::Allocate(OnDrawHighPrio);
  g_Player._39148_4_ = ChainElem::Allocate(OnDrawLowPrio);
  *(Player **)(g_Player._39140_4_ + 0x1c) = &g_Player;
  *(Player **)(g_Player._39144_4_ + 0x1c) = &g_Player;
  *(Player **)(g_Player._39148_4_ + 0x1c) = &g_Player;
  *(code **)(g_Player._39140_4_ + 8) = FUN_00429c50;
  *(code **)(g_Player._39140_4_ + 0xc) = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,(ChainElem *)g_Player._39140_4_,7);
  if (iVar2 == 0) {
    Chain::AddToDrawChain(&g_Chain,(ChainElem *)g_Player._39144_4_,5);
    Chain::AddToDrawChain(&g_Chain,(ChainElem *)g_Player._39148_4_,7);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

