
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ZunResult MainMenu::RegisterChain(int param_1)

{
  UINT UVar1;
  int iVar2;
  ZunResult ZVar3;
  
  _memset(&g_MainMenu,0,0x10f34);
  g_GameManager.is_in_game_menu = 0;
  UVar1 = (*(g_Supervisor.d3dDevice)->lpVtbl->GetAvailableTextureMem)(g_Supervisor.d3dDevice);
  DebugPrint("Debug : title 開始 VRAM = %d\n",UVar1);
  g_MainMenu.gameState = -(uint)(param_1 != 0) & STATE_REPLAY_LOAD;
  g_Supervisor.framerateMultiplier = 0.0;
  g_MainMenu.chain_calc = Chain::CreateElem(&g_Chain,OnUpdate);
  (g_MainMenu.chain_calc)->arg = &g_MainMenu;
  (g_MainMenu.chain_calc)->addedCallback = AddedCallback;
  (g_MainMenu.chain_calc)->deletedCallback = DeletedCallback;
  g_MainMenu.stateTimer = 0;
  iVar2 = Chain::AddToCalcChain(&g_Chain,g_MainMenu.chain_calc,2);
  if (iVar2 == 0) {
    g_MainMenu.chain_draw = Chain::CreateElem(&g_Chain,OnDraw);
    (g_MainMenu.chain_draw)->arg = &g_MainMenu;
    Chain::AddToDrawChain(&g_Chain,g_MainMenu.chain_draw,0);
    g_MainMenu.time_related = 0;
    g_MainMenu.stateTimer = 0x3c;
    g_MainMenu.unk_10f2c = 0;
    ZVar3 = ZUN_SUCCESS;
  }
  else {
    ZVar3 = ZUN_ERROR;
  }
  return ZVar3;
}

