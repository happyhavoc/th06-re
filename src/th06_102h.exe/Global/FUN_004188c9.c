
undefined4 FUN_004188c9(void)

{
  AnmVm *pAVar1;
  short sVar2;
  AnmManager *pAVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int in_ECX;
  short local_34;
  short local_20;
  short local_14;
  
                    /* This is the MSG VM execute function
                        */
  if (*(int *)(in_ECX + 0x253c) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(in_ECX + 0x2bd4) != 0) {
      *(int *)(in_ECX + 0x2bd4) = *(int *)(in_ECX + 0x2bd4) + -1;
    }
    if ((*(char *)(in_ECX + 0x2bd8) != '\0') && ((g_CurFrameInput & 0x100) != 0)) {
      *(uint *)(in_ECX + 0x2548) = (uint)**(ushort **)(in_ECX + 0x2538);
      *(undefined4 *)(in_ECX + 0x2544) = 0;
      *(undefined4 *)(in_ECX + 0x2540) = 0xfffffc19;
    }
    while (pAVar3 = g_AnmManager,
          (int)(uint)**(ushort **)(in_ECX + 0x2538) <= *(int *)(in_ECX + 0x2548)) {
      switch(*(undefined *)(*(int *)(in_ECX + 0x2538) + 2)) {
      case 0:
        *(undefined4 *)(in_ECX + 0x253c) = 0xffffffff;
        return 0xffffffff;
      case 1:
        psVar6 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        uVar5 = -(uint)(*psVar6 != 0) & 2;
        sVar2 = *(short *)(*(int *)(in_ECX + 0x2538) + 6);
        local_14 = sVar2 + (short)uVar5 + 0x4a0;
        pAVar1 = (AnmVm *)(in_ECX + 0x2550 + *psVar6 * 0x110);
        pAVar1->anmFileIndex = local_14;
        AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[uVar5 + sVar2 + 0x4a0]);
        break;
      case 2:
        psVar6 = (short *)(*(int *)(in_ECX + 0x2538) + 4);
        AnmManager::SetActiveSprite
                  (g_AnmManager,(AnmVm *)(in_ECX + 0x2550 + *psVar6 * 0x110),
                   (int)*(short *)(*(int *)(in_ECX + 0x2538) + 6) +
                   (-(uint)(*psVar6 != 0) & 8) + 0x4a0);
        break;
      case 3:
        iVar7 = *(int *)(in_ECX + 0x2538);
        psVar6 = (short *)(iVar7 + 4);
        if ((*(short *)(iVar7 + 6) == 0) && (-1 < *(short *)(in_ECX + 0x2934))) {
          AnmManager::FUN_00434b60
                    (g_AnmManager,in_ECX + 0x2880,*(undefined4 *)(in_ECX + 0x2bb0 + *psVar6 * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *psVar6 * 4)," ");
        }
        pAVar3 = g_AnmManager;
        sVar2 = *(short *)(iVar7 + 6);
        local_20 = sVar2 + 0x702;
        pAVar1 = (AnmVm *)(in_ECX + 0x2770 + *(short *)(iVar7 + 6) * 0x110);
        pAVar1->anmFileIndex = local_20;
        AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[sVar2 + 0x702]);
        *(undefined *)(in_ECX + 0x287d + *(short *)(iVar7 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x2bd0);
        *(undefined *)(in_ECX + 0x287c + *(short *)(iVar7 + 6) * 0x110) =
             *(undefined *)(in_ECX + 0x287d + *(short *)(iVar7 + 6) * 0x110);
        AnmManager::FUN_00434b60
                  (g_AnmManager,in_ECX + 0x2770 + *(short *)(iVar7 + 6) * 0x110,
                   *(undefined4 *)(in_ECX + 0x2bb0 + *psVar6 * 4),
                   *(undefined4 *)(in_ECX + 0x2bc0 + *psVar6 * 4),(char *)(iVar7 + 8));
        *(undefined4 *)(in_ECX + 0x254c) = 0;
        break;
      case 4:
        if ((((*(char *)(in_ECX + 0x2bd8) == '\0') || ((g_CurFrameInput & 0x100) == 0)) &&
            (((g_CurFrameInput & 1) == 0 ||
             (((g_CurFrameInput & 1) == (g_LastFrameInput & 1) || (*(int *)(in_ECX + 0x254c) < 8))))
            )) && (*(int *)(in_ECX + 0x254c) < *(int *)(*(int *)(in_ECX + 0x2538) + 4))) {
          *(int *)(in_ECX + 0x254c) = *(int *)(in_ECX + 0x254c) + 1;
          goto LAB_00418fe0;
        }
        break;
      case 5:
        iVar7 = *(int *)(in_ECX + 0x2538);
        psVar6 = (short *)(iVar7 + 4);
        if (*psVar6 < 2) {
          *(ushort *)(in_ECX + 0x25da + *psVar6 * 0x110) = (ushort)*(byte *)(iVar7 + 6);
        }
        else {
          *(ushort *)(in_ECX + 0x27fa + (*psVar6 + -2) * 0x110) = (ushort)*(byte *)(iVar7 + 6);
        }
        break;
      case 6:
        *(int *)(in_ECX + 0x2bd4) = *(int *)(in_ECX + 0x2bd4) + 1;
        break;
      case 7:
        *(undefined2 *)(in_ECX + 0x1d68) = 0x701;
        AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(in_ECX + 0x1cb4),pAVar3->scripts[0x701]);
        *(undefined *)(in_ECX + 0x1dc0) = 0x10;
        *(undefined *)(in_ECX + 0x1dc1) = 0x10;
        FUN_00434c40(g_AnmManager,in_ECX + 0x1cb4,0xe0ffff,0,&DAT_0046a98c,
                     g_Stage.stdData + *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80 + 0x90);
        iVar7 = FUN_00424ae4(*(undefined4 *)(*(int *)(in_ECX + 0x2538) + 4));
        if (iVar7 != 0) {
          FUN_00424b5d((char *)(g_Stage.stdData +
                               *(int *)(*(int *)(in_ECX + 0x2538) + 4) * 0x80 + 0x290));
        }
        break;
      case 8:
        iVar7 = *(int *)(in_ECX + 0x2538);
        sVar2 = *(short *)(iVar7 + 6);
        local_34 = sVar2 + 0x704;
        pAVar1 = (AnmVm *)(in_ECX + 0x2990 + *(short *)(iVar7 + 6) * 0x110);
        pAVar1->anmFileIndex = local_34;
        AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[sVar2 + 0x704]);
        FUN_00434c40(g_AnmManager,in_ECX + 0x2990 + *(short *)(iVar7 + 6) * 0x110,
                     *(undefined4 *)(in_ECX + 0x2bb0 + *(short *)(iVar7 + 4) * 4),
                     *(undefined4 *)(in_ECX + 0x2bc0 + *(short *)(iVar7 + 4) * 4),iVar7 + 8);
        *(undefined4 *)(in_ECX + 0x254c) = 0;
        break;
      case 9:
        *(undefined4 *)(in_ECX + 0x2bdc) = 1;
        pAVar3 = g_AnmManager;
        if ((int)g_GameManager.current_stage < 6) {
          *(undefined2 *)(in_ECX + 0x24d8) = 0x619;
          AnmManager::SetAndExecuteScript(pAVar3,(AnmVm *)(in_ECX + 0x2424),pAVar3->scripts[0x619]);
        }
        else {
          g_GameManager.field23_0x181c = 0xff;
        }
        break;
      case 10:
        goto LAB_00418fe0;
      case 0xb:
        g_GameManager.field0_0x0 = g_GameManager.score;
        if (g_GameManager.field30_0x1823 == 0) {
          if (((int)g_GameManager.current_stage < 5) ||
             ((g_GameManager.difficulty != 0 && (g_GameManager.current_stage == 5)))) {
            g_Supervisor.curState = 3;
          }
          else if (g_GameManager.field7_0x1c == 0) {
            if (g_GameManager.difficulty == 4) {
              g_GameManager.unk_1822 = 1;
              g_Supervisor.curState = 7;
            }
            else {
              g_Supervisor.curState = 10;
            }
          }
          else {
            g_Supervisor.curState = 8;
          }
        }
        else {
          g_Supervisor.curState = 7;
        }
        goto LAB_00418fe0;
      case 0xc:
        Supervisor::FUN_00424d82(&g_Supervisor,4.0);
        break;
      case 0xd:
        *(undefined *)(in_ECX + 0x2bd8) = *(undefined *)(*(int *)(in_ECX + 0x2538) + 4);
      }
      *(uint *)(in_ECX + 0x2538) =
           *(int *)(in_ECX + 0x2538) + 4 + (uint)*(byte *)(*(int *)(in_ECX + 0x2538) + 3);
    }
    FUN_0041b5af();
LAB_00418fe0:
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2550));
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2660));
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2770));
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2880));
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2990));
    AnmManager::ExecuteScript(g_AnmManager,(AnmVm *)(in_ECX + 0x2aa0));
    if (((*(int *)(in_ECX + 0x2548) < 0x3c) && (*(char *)(in_ECX + 0x2bd8) != '\0')) &&
       ((g_CurFrameInput & 0x100) != 0)) {
      *(undefined4 *)(in_ECX + 0x2548) = 0x3c;
      *(undefined4 *)(in_ECX + 0x2544) = 0;
      *(undefined4 *)(in_ECX + 0x2540) = 0xfffffc19;
    }
    uVar4 = 0;
  }
  return uVar4;
}
