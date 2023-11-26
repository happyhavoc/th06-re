
undefined4 EffectManager::FUN_0040e5b0(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    fVar2 = GetRandomF32ZeroToOne(&g_RandomSeed);
    *(float *)(param_1 + 0x11c) = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    fVar2 = GetRandomF32ZeroToOne(&g_RandomSeed);
    *(float *)(param_1 + 0x120) = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(float *)(param_1 + 0x128) = -*(float *)(param_1 + 0x11c) * 0.05;
    *(float *)(param_1 + 300) = -*(float *)(param_1 + 0x120) * 0.05;
    *(float *)(param_1 + 0x130) = -*(float *)(param_1 + 0x124) * 0.05;
  }
  fVar2 = g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x124);
  fVar1 = g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x110) =
       g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x114) = fVar1 + *(float *)(param_1 + 0x114);
  *(float *)(param_1 + 0x118) = fVar2 + *(float *)(param_1 + 0x118);
  fVar2 = g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x130);
  fVar1 = g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 300);
  *(float *)(param_1 + 0x11c) =
       g_Supervisor.field81_0x1a8 * *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x11c);
  *(float *)(param_1 + 0x120) = fVar1 + *(float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x124) = fVar2 + *(float *)(param_1 + 0x124);
  return 1;
}

