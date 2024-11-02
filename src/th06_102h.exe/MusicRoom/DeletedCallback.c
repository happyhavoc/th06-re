
ZunResult __cdecl th06::MusicRoom::DeletedCallback(MusicRoom *musicRoom)

{
                    /* Considering the fact that this uses operator_delete, this definitely is not a
                       char* */
  operator_delete(musicRoom->musicRoomPtr);
  musicRoom->musicRoomPtr = (MusicRoom *)0x0;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  AnmManager::ReleaseAnm(g_AnmManager,0x29);
  AnmManager::ReleaseAnm(g_AnmManager,0x2a);
  AnmManager::ReleaseAnm(g_AnmManager,0x2b);
  Chain::Cut(&g_Chain,musicRoom->draw_chain);
  musicRoom->draw_chain = (ChainElem *)0x0;
  return ZUN_SUCCESS;
}

