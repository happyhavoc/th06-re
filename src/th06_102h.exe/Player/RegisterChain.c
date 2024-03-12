
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ZunResult Player::RegisterChain(byte param_1)

{
  ZunResult ZVar1;
  int iVar2;
  Player *pPVar3;
  
  pPVar3 = &g_Player;
  for (iVar2 = 0x263c; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pPVar3->vm0).rotation.x = 0.0;
    pPVar3 = (Player *)&(pPVar3->vm0).rotation.y;
  }
  g_Player.field35_0x75b4.current = 0;
  g_Player.field35_0x75b4.subFrame = 0.0;
  g_Player.field35_0x75b4.previous = -999;
  g_Player.field22_0x9e1 = param_1;
  g_Player.onTick = Chain::CreateElem(&g_Chain,OnUpdate);
  g_Player.onDraw1 = Chain::CreateElem(&g_Chain,OnDrawHighPrio);
  g_Player.onDraw2 = Chain::CreateElem(&g_Chain,OnDrawLowPrio);
  (g_Player.onTick)->arg = &g_Player;
  (g_Player.onDraw1)->arg = &g_Player;
  (g_Player.onDraw2)->arg = &g_Player;
  (g_Player.onTick)->addedCallback = AddedCallback;
  (g_Player.onTick)->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,g_Player.onTick,7);
  if (iVar2 == 0) {
    Chain::AddToDrawChain(&g_Chain,g_Player.onDraw1,5);
    Chain::AddToDrawChain(&g_Chain,g_Player.onDraw2,7);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

