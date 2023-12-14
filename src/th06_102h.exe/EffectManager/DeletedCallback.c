
undefined4 EffectManager::DeletedCallback(void)

{
  AnmManager::ReleaseAnm(g_AnmManager,0xb);
  return 0;
}

