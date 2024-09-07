
void th06::ReplayManager::StopRecording(void)

{
  ReplayManager *rpy_manager;
  
  rpy_manager = g_ReplayManager;
  if (g_ReplayManager != (ReplayManager *)0x0) {
    g_ReplayManager->replay_inputs = g_ReplayManager->replay_inputs + 1;
    rpy_manager->replay_inputs->frame_num = rpy_manager->frame_id;
    rpy_manager->replay_inputs->input_key = 0;
    rpy_manager->replay_inputs = rpy_manager->replay_inputs + 1;
    rpy_manager->replay_inputs->frame_num = 9999999;
    rpy_manager->replay_inputs->input_key = 0;
    rpy_manager->replayInputAddresses[g_GameManager.current_stage + -1] =
         rpy_manager->replay_inputs + 1;
  }
  return;
}

