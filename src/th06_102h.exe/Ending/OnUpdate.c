
ChainCallbackResult th06::Ending::OnUpdate(Ending *ending)

{
  i32 iVar1;
  int i;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = ParseEndFile(ending);
    if (iVar1 != 0) {
      return CHAIN_CALLBACK_RESULT_CONTINUE_AND_REMOVE_JOB;
    }
    for (i = 0; i < 16; i = i + 1) {
      if ((&ending->AnmVm)[i].anmFileIndex != 0) {
        AnmManager::ExecuteScript(g_AnmManager,&ending->AnmVm + i);
      }
    }
    if (((*(int *)&ending->unk_dependent_on_clrd == 0) || ((g_CurFrameInput & 0x100) == 0)) ||
       (3 < local_8)) break;
    local_8 = local_8 + 1;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

