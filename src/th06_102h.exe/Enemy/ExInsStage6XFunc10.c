
void th06::Enemy::ExInsStage6XFunc10(Enemy *param_1,EclRawInstr *param_2)

{
  AnmManager *pAVar1;
  
  if (0 < param_1->life) {
    ExInsStage6XFunc6(param_1,param_2);
    pAVar1 = g_AnmManager;
    if (g_Player.bombInfo.isInUse == 0) {
      if ((0 < (param_1->exInsFunc10Timer).current) &&
         (ZunTimer::Decrement(&param_1->exInsFunc10Timer,1), pAVar1 = g_AnmManager,
         (param_1->exInsFunc10Timer).current == 0)) {
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
      (param_1->exInsFunc10Timer).current = 0x3c;
      (param_1->exInsFunc10Timer).subFrame = 0.0;
      (param_1->exInsFunc10Timer).previous = -999;
    }
  }
  return;
}

