
undefined4 BulletManager::AddedCallback(int param_1)

{
  float fVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  long lVar4;
  int iVar5;
  AnmVm *pAVar6;
  undefined4 *puVar7;
  short local_3c;
  short local_30;
  short local_24;
  short local_18;
  short local_c;
  uint local_8;
  
  if (g_Supervisor.curState != 3) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,6,"data/etama3.anm",0x200);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,7,"data/etama4.anm",0x29a);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
  }
  for (local_8 = 0; pAVar2 = g_AnmManager, local_8 < 10; local_8 = local_8 + 1) {
    iVar5 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
    pAVar6 = (AnmVm *)(param_1 + local_8 * 0x560);
    local_c = (short)iVar5;
    pAVar6->anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar6,pAVar2->scripts[iVar5]);
    pAVar2 = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6ec + local_8 * 0x14);
    pAVar6 = (AnmVm *)(param_1 + 0x110 + local_8 * 0x560);
    local_18 = (short)iVar5;
    pAVar6->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar6,pAVar2->scripts[iVar5]);
    pAVar2 = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f0 + local_8 * 0x14);
    pAVar6 = (AnmVm *)(param_1 + 0x220 + local_8 * 0x560);
    local_24 = (short)iVar5;
    pAVar6->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar6,pAVar2->scripts[iVar5]);
    pAVar2 = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f4 + local_8 * 0x14);
    pAVar6 = (AnmVm *)(param_1 + 0x330 + local_8 * 0x560);
    local_30 = (short)iVar5;
    pAVar6->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar6,pAVar2->scripts[iVar5]);
    pAVar2 = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f8 + local_8 * 0x14);
    pAVar6 = (AnmVm *)(param_1 + 0x440 + local_8 * 0x560);
    local_3c = (short)iVar5;
    pAVar6->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript(pAVar2,pAVar6,pAVar2->scripts[iVar5]);
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
        iVar5 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
        if (iVar5 == 0x202) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40800000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40800000;
        }
        else if (iVar5 == 0x204) {
          *(undefined4 *)(param_1 + 0x550 + local_8 * 0x560) = 0x40a00000;
          *(undefined4 *)(param_1 + 0x554 + local_8 * 0x560) = 0x40a00000;
        }
        else if (iVar5 == 0x205) {
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
  puVar7 = g_ItemManager;
  for (iVar5 = 0xa253; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  return 0;
}

