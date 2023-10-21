
undefined4 FUN_00416d60(int param_1)

{
  float fVar1;
  AnmManager *pAVar2;
  int iVar3;
  long lVar4;
  AnmVm *pAVar5;
  undefined4 *puVar6;
  short local_3c;
  short local_30;
  short local_24;
  short local_18;
  short local_c;
  uint local_8;
  
  if (g_GameContext.unkInput2 != 3) {
    iVar3 = AnmManager::LoadAnm(g_AnmManager,6,"data/etama3.anm",0x200);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar3 = AnmManager::LoadAnm(g_AnmManager,7,"data/etama4.anm",0x29a);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  for (local_8 = 0; pAVar2 = g_AnmManager, local_8 < 10; local_8 = local_8 + 1) {
    iVar3 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
    pAVar5 = (AnmVm *)(param_1 + local_8 * 0x560);
    local_c = (short)iVar3;
    pAVar5->anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar5,pAVar2->scripts[iVar3]);
    pAVar2 = g_AnmManager;
    iVar3 = *(int *)(&DAT_0046a6ec + local_8 * 0x14);
    pAVar5 = (AnmVm *)(param_1 + 0x110 + local_8 * 0x560);
    local_18 = (short)iVar3;
    pAVar5->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar5,pAVar2->scripts[iVar3]);
    pAVar2 = g_AnmManager;
    iVar3 = *(int *)(&DAT_0046a6f0 + local_8 * 0x14);
    pAVar5 = (AnmVm *)(param_1 + 0x220 + local_8 * 0x560);
    local_24 = (short)iVar3;
    pAVar5->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar5,pAVar2->scripts[iVar3]);
    pAVar2 = g_AnmManager;
    iVar3 = *(int *)(&DAT_0046a6f4 + local_8 * 0x14);
    pAVar5 = (AnmVm *)(param_1 + 0x330 + local_8 * 0x560);
    local_30 = (short)iVar3;
    pAVar5->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar5,pAVar2->scripts[iVar3]);
    pAVar2 = g_AnmManager;
    iVar3 = *(int *)(&DAT_0046a6f8 + local_8 * 0x14);
    pAVar5 = (AnmVm *)(param_1 + 0x440 + local_8 * 0x560);
    local_3c = (short)iVar3;
    pAVar5->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar5,pAVar2->scripts[iVar3]);
    *(undefined2 *)(param_1 + 0xb2 + local_8 * 0x560) =
         *(undefined2 *)(param_1 + 0xb0 + local_8 * 0x560);
    lVar4 = __ftol2((double)*(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c));
    *(char *)(param_1 + 0x55d + local_8 * 0x560) = (char)lVar4;
    fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
    if (fVar1 < 8.0 == (fVar1 == 8.0)) {
      fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
      if (fVar1 < 16.0 == (fVar1 == 16.0)) {
        fVar1 = *(float *)(*(int *)(param_1 + 0xc0 + local_8 * 0x560) + 0x2c);
        if (fVar1 < 32.0 == (fVar1 == 32.0)) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x42000000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x42000000;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x207) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41300000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41300000;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x208) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41100000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41100000;
        }
        else {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x41800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x41800000;
        }
      }
      else {
        iVar3 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
        if (iVar3 == 0x202) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
        }
        else if (iVar3 == 0x204) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40a00000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40a00000;
        }
        else if (iVar3 == 0x205) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
        }
        else {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40c00000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40c00000;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
      *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
    }
  }
  puVar6 = null_ARRAY_0069e268;
  for (iVar3 = 0xa253; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  return 0;
}

