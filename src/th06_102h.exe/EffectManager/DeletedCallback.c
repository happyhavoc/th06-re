
ZunResult th06::EffectManager::DeletedCallback(EffectManager *p)

{
  AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,0xb);
  return ZUN_SUCCESS;
}

