
/* WARNING: Removing unreachable block (ram,0x0042a60a) */

undefined4 FUN_0042a570(ReplayManager *param_1)

{
  if (g_GameManager.field43_0x1821 != 0) {
    while ((int)param_1->replay_inputs[1].frame_num <= (int)param_1->frame_id) {
      param_1->replay_inputs = param_1->replay_inputs + 1;
    }
    g_CurFrameInput = g_CurFrameInput & 0xfe08 | param_1->replay_inputs->input_key;
    DAT_0069d90c = 0;
    if (g_LastFrameInput == g_CurFrameInput) {
      if ((0x1d < g_NumOfFramesInputsWereHeld) &&
         (DAT_0069d90c = (ushort)((g_NumOfFramesInputsWereHeld & 7) == 0),
         0x25 < g_NumOfFramesInputsWereHeld)) {
        g_NumOfFramesInputsWereHeld = 0x1e;
      }
      g_NumOfFramesInputsWereHeld = g_NumOfFramesInputsWereHeld + 1;
    }
    else {
      g_NumOfFramesInputsWereHeld = 0;
    }
    param_1->frame_id = param_1->frame_id + 1;
  }
  return 1;
}

