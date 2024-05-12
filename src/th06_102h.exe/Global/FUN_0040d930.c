
void FUN_0040d930(Enemy *param_1,AnmRawInstr *param_2)

{
  AnmManager *pAVar1;
  
  if (0 < param_1->life) {
    FUN_0040caf0(param_1,param_2);
    pAVar1 = g_AnmManager;
    if (g_Player.inner.isUsingBomb == 0) {
      if ((0 < (param_1->field44_0xe44).current) &&
         (ZunTimer::Decrement(&param_1->field44_0xe44,1), pAVar1 = g_AnmManager,
         (param_1->field44_0xe44).current == 0)) {
        if (param_1->anm_ex_left < 0) {
          (param_1->primary_vm).anmFileIndex = 0x1a0;
          AnmManager::SetAndExecuteScript(pAVar1,&param_1->primary_vm,pAVar1->scripts[0x1a0]);
          param_1->anm_ex_left = 0xa1;
        }
        param_1->flags2 = param_1->flags2 | 1;
      }
    }
    else {
      if (-1 < param_1->anm_ex_left) {
        (param_1->primary_vm).anmFileIndex = 0x1a5;
        AnmManager::SetAndExecuteScript(pAVar1,&param_1->primary_vm,pAVar1->scripts[0x1a5]);
        param_1->anm_ex_left = -1;
      }
      param_1->flags2 = param_1->flags2 & 0xfe;
      (param_1->field44_0xe44).current = 0x3c;
      (param_1->field44_0xe44).subFrame = 0.0;
      (param_1->field44_0xe44).previous = -999;
    }
  }
  return;
}

