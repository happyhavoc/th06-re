
ChainCallbackResult th06::Ending::OnUpdate(Ending *ending)

{
  ZunResult ZVar1;
  int i;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    ZVar1 = ParseEndFile(ending);
    if (ZVar1 != ZUN_SUCCESS) {
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    for (i = 0; i < 16; i = i + 1) {
      if (ending->sprites[i].anmFileIndex != 0) {
        AnmManager::ExecuteScript(g_AnmManager,ending->sprites + i);
      }
    }
    if (((ending->hasSeenEnding == 0) || ((g_CurFrameInput & 0x100) == 0)) || (3 < local_8)) break;
    local_8 = local_8 + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

