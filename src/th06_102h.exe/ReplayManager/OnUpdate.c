
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 ReplayManager::OnUpdate(ReplayManager *param_1)

{
  ushort uVar1;
  
  if (g_GameManager.is_in_menu != 0) {
    uVar1 = g_CurFrameInput & 0x1f7;
    if (uVar1 != param_1->replay_inputs->input_key) {
      param_1->replay_inputs = param_1->replay_inputs + 1;
      param_1->replayInputAddresses[g_GameManager.current_stage + -1] = param_1->replay_inputs + 1;
      param_1->replay_inputs->frame_num = param_1->frame_id;
      param_1->replay_inputs->input_key = uVar1;
    }
    param_1->frame_id = param_1->frame_id + 1;
  }
  return 1;
}

