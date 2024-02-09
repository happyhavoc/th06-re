
undefined4 Ending::OnUpdate(Ending *ending)

{
  int in_EAX;
  int i;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    parseEndFile(ending);
    if (in_EAX != 0) {
      return 0;
    }
    for (i = 0; i < 16; i = i + 1) {
      if (ending->AnmVm[i].anmFileIndex != 0) {
        AnmManager::ExecuteScript(g_AnmManager,ending->AnmVm + i);
      }
    }
    if (((*(int *)&ending->field_0x1118 == 0) || ((g_CurFrameInput & 0x100) == 0)) || (3 < local_8))
    break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

