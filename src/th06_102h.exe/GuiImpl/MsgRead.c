
void __thiscall GuiImpl::MsgRead(GuiImpl *param_1_00,int msgIdx)

{
  MsgRawHeader *pMVar1;
  int iVar2;
  GuiMsgVm *pGVar3;
  
  if (msgIdx < ((param_1_00->msg).msg_file)->num_entries) {
    pMVar1 = (param_1_00->msg).msg_file;
    pGVar3 = &param_1_00->msg;
    for (iVar2 = 0x1aa; iVar2 != 0; iVar2 = iVar2 + -1) {
      pGVar3->msg_file = (MsgRawHeader *)0x0;
      pGVar3 = (GuiMsgVm *)&pGVar3->current_instr;
    }
    (param_1_00->msg).current_msg_idx = msgIdx;
    (param_1_00->msg).msg_file = pMVar1;
    (param_1_00->msg).current_instr = ((param_1_00->msg).msg_file)->entries[msgIdx];
    (param_1_00->msg).dialogue_lines[0].anmFileIndex = -1;
    (param_1_00->msg).dialogue_lines[1].anmFileIndex = -1;
    (param_1_00->msg).font_size = 0xf;
    (param_1_00->msg).text_colors_A[0] = 0xe8f0ff;
    (param_1_00->msg).text_colors_A[1] = 0xffe8f0;
    (param_1_00->msg).text_colors_B[0] = 0;
    (param_1_00->msg).text_colors_B[1] = 0;
    (param_1_00->msg).dialogue_skippable = 1;
    if ((g_GameManager.current_stage == 6) && ((msgIdx == 0 || (msgIdx == 10)))) {
      AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff06.anm",0x2b3);
    }
    else if ((g_GameManager.current_stage == 7) && ((msgIdx == 0 || (msgIdx == 10)))) {
      AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff07.anm",0x2b3);
      AnmManager::LoadAnm(g_AnmManager,0x12,"data/face12c.anm",0x4a8);
    }
  }
  return;
}

