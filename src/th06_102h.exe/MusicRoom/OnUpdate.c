
ChainCallbackResult __cdecl th06::MusicRoom::OnUpdate(MusicRoom *musicRoom)

{
  int iVar1;
  ZunResult ZVar2;
  uint shouldDraw;
  
  iVar1 = musicRoom->drawMusicList;
  do {
    if (musicRoom->drawMusicList != 0) {
      if ((musicRoom->drawMusicList == 1) &&
         (shouldDraw = DrawMusicList(musicRoom), shouldDraw != 0)) {
        return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
      }
      break;
    }
    ZVar2 = FUN_00424e8f(musicRoom);
  } while (ZVar2 != ZUN_SUCCESS);
  if (iVar1 == musicRoom->drawMusicList) {
    musicRoom->field2_0x8 = musicRoom->field2_0x8 + 1;
  }
  else {
    musicRoom->field2_0x8 = 0;
  }
  AnmManager::ExecuteScript(g_AnmManager,musicRoom->mainVM);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

