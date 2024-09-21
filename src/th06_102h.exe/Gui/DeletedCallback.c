
ZunResult th06::Gui::DeletedCallback(Gui *param_1)

{
  AnmManager::ReleaseAnm(g_AnmManager,0x12);
  AnmManager::ReleaseAnm(g_AnmManager,0x13);
  AnmManager::ReleaseAnm(g_AnmManager,0x14);
  FreeMsgFile(param_1);
  if (g_Supervisor.curState != 3) {
    AnmManager::ReleaseAnm(g_AnmManager,0xd);
    AnmManager::ReleaseAnm(g_AnmManager,0xe);
    AnmManager::ReleaseAnm(g_AnmManager,0xf);
    AnmManager::ReleaseAnm(g_AnmManager,0x10);
    AnmManager::ReleaseAnm(g_AnmManager,0x11);
    operator_delete(param_1->impl);
    param_1->impl = (GuiImpl *)0x0;
  }
  return ZUN_SUCCESS;
}

