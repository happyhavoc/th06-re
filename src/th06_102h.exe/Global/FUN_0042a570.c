
/* WARNING: Removing unreachable block (ram,0x0042a60a) */

undefined4 FUN_0042a570(int *param_1)

{
  if (DAT_0069d4c1 != '\0') {
    while (*(int *)(param_1[0x12] + 8) <= *param_1) {
      param_1[0x12] = param_1[0x12] + 8;
    }
    g_CurFrameInput = g_CurFrameInput & 0xfe08 | *(ushort *)(param_1[0x12] + 4);
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
    *param_1 = *param_1 + 1;
  }
  return 1;
}

