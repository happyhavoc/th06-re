
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d930(AnmVm *param_1,undefined4 param_2)

{
  AnmManager *pAVar1;
  
  if (0 < (int)param_1[0xc].scaleInterpFinalX) {
    FUN_0040caf0(param_1,param_2);
    pAVar1 = g_AnmManager;
    if (_DAT_006d1bf0 == 0) {
      if ((0 < (int)param_1[0xd].color) &&
         (FUN_004241e5(1), pAVar1 = g_AnmManager, param_1[0xd].color == 0)) {
        if (param_1[0xd].pendingInterrupt < 0) {
          param_1->anmFileIndex = 0x1a0;
          AnmManager::SetBeginingOfScript(pAVar1,param_1,pAVar1->scripts[0x1a0]);
          param_1[0xd].pendingInterrupt = 0xa1;
        }
        *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) | 1;
      }
    }
    else {
      if (-1 < param_1[0xd].pendingInterrupt) {
        param_1->anmFileIndex = 0x1a5;
        AnmManager::SetBeginingOfScript(pAVar1,param_1,pAVar1->scripts[0x1a5]);
        param_1[0xd].pendingInterrupt = -1;
      }
      *(byte *)((int)&param_1[0xd].flags + 1) = *(byte *)((int)&param_1[0xd].flags + 1) & 0xfe;
      param_1[0xd].color = 0x3c;
      param_1[0xd].matrix.field0_0x0.field0._44 = 0.0;
      param_1[0xd].matrix.field0_0x0.field0._43 = -NAN;
    }
  }
  return;
}

