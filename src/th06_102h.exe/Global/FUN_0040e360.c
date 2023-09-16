
undefined4 FUN_0040e360(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    fVar3 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0x11c) = (float)((fVar3 * (float10)256.0 - (float10)128.0) / (float10)12.0)
    ;
    fVar3 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0x120) = (float)((fVar3 * (float10)256.0 - (float10)128.0) / (float10)12.0)
    ;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(float *)(param_1 + 0x128) = -*(float *)(param_1 + 0x11c) * 0.05263158;
    *(float *)(param_1 + 300) = -*(float *)(param_1 + 0x120) * 0.05263158;
    *(float *)(param_1 + 0x130) = -*(float *)(param_1 + 0x124) * 0.05263158;
  }
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

