
void FUN_0042d0a4(int param_1,int param_2)

{
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (DAT_0069d90c != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
    }
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (DAT_0069d90c != 0)))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (param_2 <= *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
    }
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  return;
}

