
undefined4 Ending::OnUpdate(Ending *ending)

{
  int in_EAX;
  Ending *in_stack_fffffff4;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    parseEndFile(ending,in_stack_fffffff4);
    if (in_EAX != 0) {
      return 0;
    }
    for (in_stack_fffffff4 = (Ending *)0x0; (int)in_stack_fffffff4 < 16;
        in_stack_fffffff4 = (Ending *)&in_stack_fffffff4->field_0x1) {
      if (ending->AnmVm[(int)in_stack_fffffff4].anmFileIndex != 0) {
        AnmManager::ExecuteScript(g_AnmManager,ending->AnmVm + (int)in_stack_fffffff4);
      }
    }
    if (((*(int *)&ending->field_0x1118 == 0) || ((g_CurFrameInput & 0x100) == 0)) || (3 < local_8))
    break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

