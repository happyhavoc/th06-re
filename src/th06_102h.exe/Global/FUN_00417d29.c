
undefined4 __fastcall FUN_00417d29(uint *param_1)

{
  uint uVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  AnmVm *vm;
  int iVar4;
  undefined4 *puVar5;
  short local_14;
  int local_8;
  
  pAVar2 = g_AnmManager;
  if (g_Supervisor.curState == 3) {
    uVar1 = param_1[1];
    *(undefined2 *)(uVar1 + 0x24d8) = 0x619;
    AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x2424),pAVar2->scripts[0x619]);
    *(undefined2 *)(param_1[1] + 0x24ae) = 1;
  }
  else {
    puVar5 = (undefined4 *)param_1[1];
    for (iVar4 = 0xb11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0xd,"data/front.anm",0x600);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0xe,"data/loading.anm",0x619);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    *(undefined2 *)(param_1[1] + 0x24d4) = 0xffff;
    if (g_GameManager.character == 0) {
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face00a.anm",0x4a0);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face00b.anm",0x4a2);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face00c.anm",0x4a4);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
    }
    else if (g_GameManager.character == 1) {
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0xf,"data/face01a.anm",0x4a0);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x10,"data/face01b.anm",0x4a2);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
      ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x11,"data/face01c.anm",0x4a4);
      if (ZVar3 != ZUN_SUCCESS) {
        return 0xffffffff;
      }
    }
  }
  if (g_GameManager.current_stage == 1) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face03a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face03b.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg1.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.current_stage == 2) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face05a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg2.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.current_stage == 3) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face06a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face06b.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg3.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.current_stage == 4) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face08b.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg4.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.current_stage == 5) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face09b.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg5.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.current_stage == 6) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face09b.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face10a.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face10b.anm",0x4ab);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg6.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x12,"data/face08a.anm",0x4a8);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x13,"data/face12a.anm",0x4aa);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,0x14,"data/face12b.anm",0x4ab);
    if (ZVar3 != ZUN_SUCCESS) {
      return 0xffffffff;
    }
    iVar4 = FUN_00418665((int)param_1,"data/msg7.dat");
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  if (g_Supervisor.curState != 3) {
    for (local_8 = 0; pAVar2 = g_AnmManager, local_8 < 0x1a; local_8 = local_8 + 1) {
      local_14 = (short)local_8 + 0x600;
      vm = (AnmVm *)(local_8 * 0x110 + param_1[1]);
      vm->anmFileIndex = local_14;
      AnmManager::SetAndExecuteScript(pAVar2,vm,pAVar2->scripts[local_8 + 0x600]);
    }
  }
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)(param_1[1] + 0x1ba0) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x1e78) = 0x4a1;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x1dc4),pAVar2->scripts[0x4a1]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x1f88) = 0x4a3;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x1ed4),pAVar2->scripts[0x4a3]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x2098) = 0x706;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x1fe4),pAVar2->scripts[0x706]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x21a8) = 0x707;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x20f4),pAVar2->scripts[0x707]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x22b8) = 0x617;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x2204),pAVar2->scripts[0x617]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x23c8) = 0x618;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x2314),pAVar2->scripts[0x618]);
  *(undefined4 *)(param_1[1] + 0x1e80) = 0;
  *(undefined4 *)(param_1[1] + 0x20a0) = 0;
  *(undefined4 *)(param_1[1] + 0x1f90) = 0;
  *(undefined4 *)(param_1[1] + 0x21b0) = 0;
  *(uint *)(param_1[1] + 0x1e44) = *(uint *)(param_1[1] + 0x1e44) & 0xfffffffe;
  *(uint *)(param_1[1] + 0x2064) = *(uint *)(param_1[1] + 0x2064) & 0xfffffffe;
  *(uint *)(param_1[1] + 0x1f54) = *(uint *)(param_1[1] + 0x1f54) & 0xfffffffe;
  *(uint *)(param_1[1] + 0x2174) = *(uint *)(param_1[1] + 0x2174) & 0xfffffffe;
  *(undefined *)(param_1[1] + 0x20f0) = 0xf;
  *(undefined *)(param_1[1] + 0x20f1) = 0xf;
  *(undefined *)(param_1[1] + 0x2200) = 0xf;
  *(undefined *)(param_1[1] + 0x2201) = 0xf;
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x1c58) = 0x700;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x1ba4),pAVar2->scripts[0x700]);
  pAVar2 = g_AnmManager;
  uVar1 = param_1[1];
  *(undefined2 *)(uVar1 + 0x1d68) = 0x701;
  AnmManager::SetAndExecuteScript(pAVar2,(AnmVm *)(uVar1 + 0x1cb4),pAVar2->scripts[0x701]);
  FUN_00434e20(g_AnmManager,param_1[1] + 0x1ba4,0xe0ffff,0,g_Stage.stdData + 0x10);
  *(undefined *)(param_1[1] + 0x1dc0) = 0x10;
  *(undefined *)(param_1[1] + 0x1dc1) = 0x10;
  FUN_00434c40(g_AnmManager,param_1[1] + 0x1cb4,0xe0ffff,0,&DAT_0046a98c,g_Stage.stdData + 0x90);
  *(undefined4 *)(param_1[1] + 0x253c) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0x2bdc) = 0;
  *(undefined4 *)(param_1[1] + 0x2bf4) = 0;
  *(undefined4 *)(param_1[1] + 0x2c14) = 0;
  *(undefined4 *)(param_1[1] + 0x2c34) = 0;
  *param_1 = *param_1 & 0xfffffffc | 2;
  *param_1 = *param_1 & 0xfffffff3 | 8;
  *param_1 = *param_1 & 0xffffff3f | 0x80;
  *param_1 = *param_1 & 0xfffffcff | 0x200;
  *param_1 = *param_1 & 0xffffffcf | 0x20;
  return 0;
}

