
void FUN_0042aab0(void)

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
    rpy_manager->replay_input_offsets[g_GameManager.current_stage - 1] =
         (int)(rpy_manager->replay_inputs + 1);
  }
  return;
}

