
undefined4 FUN_0040e810(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = g_GameContext.field84_0x1a8 * *(float *)(param_1 + 0x124);
  fVar2 = g_GameContext.field84_0x1a8 * *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x110) =
       g_GameContext.field84_0x1a8 * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x114) = fVar2 + *(float *)(param_1 + 0x114);
  *(float *)(param_1 + 0x118) = fVar1 + *(float *)(param_1 + 0x118);
  fVar1 = g_GameContext.field84_0x1a8 * *(float *)(param_1 + 0x130);
  fVar2 = g_GameContext.field84_0x1a8 * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x11c) =
       g_GameContext.field84_0x1a8 * *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 0x120) = fVar2 + *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x124) = fVar1 + *(float *)(param_1 + 0x124);
  return 1;
}

