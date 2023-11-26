
void FUN_0042aab0(void)

{
  ReplayManager *pRVar1;
  
  pRVar1 = g_ReplayManager;
  if (g_ReplayManager != (ReplayManager *)0x0) {
    g_ReplayManager->replay_inputs = g_ReplayManager->replay_inputs + 1;
    pRVar1->replay_inputs->frame_num = pRVar1->frame_id;
    pRVar1->replay_inputs->input_key = 0;
    pRVar1->replay_inputs = pRVar1->replay_inputs + 1;
    pRVar1->replay_inputs->frame_num = 9999999;
    pRVar1->replay_inputs->input_key = 0;
    (&pRVar1->replay_inputs)[g_GameManager.current_stage] = pRVar1->replay_inputs + 1;
  }
  return;
}

