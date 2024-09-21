
ZunResult __thiscall th06::Gui::LoadMsg(Gui *gui,char *path)

{
  MsgRawHeader *msgHeader;
  ZunResult ZVar1;
  Gui *pGVar2;
  int entry;
  
  pGVar2 = gui;
  FreeMsgFile(gui);
  msgHeader = (MsgRawHeader *)FileSystem::OpenPath(path,0);
  (gui->impl->msg).msg_file = msgHeader;
  if ((gui->impl->msg).msg_file == (MsgRawHeader *)0x0) {
    GameErrorContext::Log
              (&g_GameErrorContext,
               "error : メッセージファイル %s が読み込めませんでした\n",path,gui
               ,pGVar2);
    ZVar1 = ZUN_ERROR;
  }
  else {
    (gui->impl->msg).current_msg_idx = 0xffffffff;
    (gui->impl->msg).current_instr = (MsgRawInstr *)0x0;
    for (entry = 0; entry < ((gui->impl->msg).msg_file)->num_entries; entry = entry + 1) {
      ((gui->impl->msg).msg_file)->entries[entry] =
           (MsgRawInstr *)
           ((int)((gui->impl->msg).msg_file)->entries +
           (int)((int)&((gui->impl->msg).msg_file)->entries[entry][-1].args + 1));
    }
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

