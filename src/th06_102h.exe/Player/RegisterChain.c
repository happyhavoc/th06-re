
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Player::RegisterChain(undefined param_1)

{
  undefined4 uVar1;
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
  _DAT_006d3f0c = ChainElem::Allocate(OnUpdate);
  _DAT_006d3f10 = ChainElem::Allocate(OnDrawHighPrio);
  _DAT_006d3f14 = ChainElem::Allocate(OnDrawLowPrio);
  _DAT_006d3f0c->arg = &g_Player;
  _DAT_006d3f10->arg = &g_Player;
  _DAT_006d3f14->arg = &g_Player;
  _DAT_006d3f0c->addedCallback = FUN_00429c50;
  _DAT_006d3f0c->deletedCallback = DeletedCallback;
  iVar2 = Chain::AddToCalcChain(&g_Chain,_DAT_006d3f0c,7);
  if (iVar2 == 0) {
    Chain::AddToDrawChain(&g_Chain,_DAT_006d3f10,5);
    Chain::AddToDrawChain(&g_Chain,_DAT_006d3f14,7);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

