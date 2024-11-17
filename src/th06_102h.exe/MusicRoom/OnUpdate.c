
ChainCallbackResult __cdecl th06::MusicRoom::OnUpdate(MusicRoom *musicRoom)

{
  int iVar1;
  ZunResult ZVar2;
  ZunBool quitMenu;
  
                    /* Input is disabled for the first 8 frames the music room menu appears, and
                       then is enabled */
  iVar1 = musicRoom->enableInput;
  do {
    if (musicRoom->enableInput != 0) {
      if ((musicRoom->enableInput == 1) && (quitMenu = ProcessInput(musicRoom), quitMenu != 0)) {
        return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
      }
      break;
    }
    ZVar2 = CheckInputEnable(musicRoom);
  } while (ZVar2 != ZUN_SUCCESS);
  if (iVar1 == musicRoom->enableInput) {
    musicRoom->waitFramesCounter = musicRoom->waitFramesCounter + 1;
  }
  else {
    musicRoom->waitFramesCounter = 0;
  }
  AnmManager::ExecuteScript(g_AnmManager,musicRoom->mainVM);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

