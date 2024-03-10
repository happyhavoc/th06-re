
void FUN_0040d930(AnmVm *param_1,undefined4 param_2)

{
  AnmManager *pAVar1;
  
  if (0 < (int)param_1[0xc].scaleInterpFinalX) {
    FUN_0040caf0(param_1,param_2);
    pAVar1 = g_AnmManager;
    if (g_Player.inner.field0_0x0 == 0) {
      if ((0 < (int)param_1[0xd].color.color) &&
         (ZunTimer::Decrement((ZunTimer *)(param_1[0xd].matrix.m[3] + 2),1), pAVar1 = g_AnmManager,
         param_1[0xd].color.color == 0)) {
        if (param_1[0xd].pendingInterrupt < 0) {
          param_1->anmFileIndex = 0x1a0;
          AnmManager::SetAndExecuteScript(pAVar1,param_1,pAVar1->scripts[0x1a0]);
          param_1[0xd].pendingInterrupt = 0xa1;
        }
        *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) | 1;
      }
    }
    else {
      if (-1 < param_1[0xd].pendingInterrupt) {
        param_1->anmFileIndex = 0x1a5;
        AnmManager::SetAndExecuteScript(pAVar1,param_1,pAVar1->scripts[0x1a5]);
        param_1[0xd].pendingInterrupt = -1;
      }
      *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) & 0xfe;
      param_1[0xd].color.color = 0x3c;
      param_1[0xd].matrix.m[3][3] = 0.0;
      param_1[0xd].matrix.m[3][2] = -NAN;
    }
  }
  return;
}

