
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ZunResult th06::Player::RegisterChain(byte param_1)

{
  ZunResult ZVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)&g_Player;
  for (iVar2 = 0x263c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _DAT_006d1be4 = 0;
  _DAT_006d1be0 = 0;
  _DAT_006d1bdc = 0xfffffc19;
  DAT_006cb009 = param_1;
  _DAT_006d3f0c = Chain::CreateElem(&g_Chain,OnUpdate);
  _DAT_006d3f10 = Chain::CreateElem(&g_Chain,OnDrawHighPrio);
  _DAT_006d3f14 = Chain::CreateElem(&g_Chain,OnDrawLowPrio);
  _DAT_006d3f0c->arg = &g_Player;
  _DAT_006d3f10->arg = &g_Player;
  _DAT_006d3f14->arg = &g_Player;
  _DAT_006d3f0c->addedCallback = AddedCallback;
  _DAT_006d3f0c->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,_DAT_006d3f0c,7);
  if (iVar2 == 0) {
    Chain::AddToDrawChain(&g_Chain,_DAT_006d3f10,5);
    Chain::AddToDrawChain(&g_Chain,_DAT_006d3f14,7);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

