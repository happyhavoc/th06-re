
undefined4 MainMenu::DeletedCallback(int param_1)

{
  AnmManager *pAVar1;
  int local_c;
  int local_8;
  
  (*(g_Supervisor.d3dDevice)->lpVtbl->ResourceManagerDiscardBytes)(g_Supervisor.d3dDevice,0);
  FUN_0043a70a();
  for (local_8 = 0x1b; local_8 < 0x25; local_8 = local_8 + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,local_8);
  }
  AnmManager::ReleaseSurface(g_AnmManager,0);
  pAVar1 = g_AnmManager;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  Chain::Cut(&g_Chain,*(ChainElem **)(param_1 + 0x8238));
  *(undefined4 *)(param_1 + 0x8238) = 0;
  _free(*(void **)(param_1 + 0x10edc));
  return 0;
}
