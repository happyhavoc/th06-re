
ZunResult EffectManager::DeletedCallback(EffectManager *p)

{
  AnmManager::ReleaseAnm(g_AnmManager,0xb);
  return ZUN_SUCCESS;
}

