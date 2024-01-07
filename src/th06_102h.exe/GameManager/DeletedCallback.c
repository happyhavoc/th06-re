
ZunResult GameManager::DeletedCallback(GameManager *param_1)

{
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  if (g_GameManager.demo_mode == 0) {
    Supervisor::FUN_00424d38(&g_Supervisor);
  }
  Stage::CutChain();
  FUN_004172b0();
  Player::CutChain();
  EnemyManager::CutChain();
  COleDispParams::~COleDispParams((COleDispParams *)&DAT_00487e50);
  FUN_0040f4a0();
  FUN_0041b58c();
  FUN_0042aab0();
  param_1->field28_0x1821 = 0;
  AsciiManager::InitializeVms(&g_AsciiManager);
  return ZUN_SUCCESS;
}

