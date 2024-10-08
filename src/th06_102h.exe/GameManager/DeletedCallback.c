
ZunResult th06::GameManager::DeletedCallback(GameManager *param_1)

{
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  if (g_GameManager.demo_mode == 0) {
    Supervisor::StopAudio(&g_Supervisor);
  }
  Stage::CutChain();
  BulletManager::CutChain();
  Player::CutChain();
  EnemyManager::CutChain();
  EclManager::Unload(&g_EclManager);
  EffectManager::CutChain();
  Gui::CutChain();
  ReplayManager::StopRecording();
  param_1->is_in_menu = 0;
  AsciiManager::InitializeVms(&g_AsciiManager);
  return ZUN_SUCCESS;
}

