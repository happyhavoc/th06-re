
int __thiscall MusicRoom::FUN_0042564c(MusicRoom *this,ChainElem *param_1)

{
  AnmVm *pAVar1;
  char cVar2;
  AnmManager *pAVar3;
  ZunResult ZVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 *puVar8;
  uint unaff_retaddr;
  char *local_98;
  undefined4 *local_8c;
  undefined4 *local_78;
  int local_70;
  undefined4 local_5c [16];
  uint local_1c;
  byte *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  local_1c = __security_cookie ^ unaff_retaddr;
  ZVar4 = AnmManager::LoadSurface(g_AnmManager,0,"data/result/music.jpg");
  if (ZVar4 == ZUN_SUCCESS) {
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x29,"data/music00.anm",0x100);
    if (ZVar4 == ZUN_SUCCESS) {
      ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x2a,"data/music01.anm",0x101);
      if (ZVar4 == ZUN_SUCCESS) {
        ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x2b,"data/music02.anm",0x111);
        pAVar3 = g_AnmManager;
        if (ZVar4 == ZUN_SUCCESS) {
          *(undefined2 *)&param_1[6].unkPtr = 0x100;
          AnmManager::SetAndExecuteScript
                    (pAVar3,(AnmVm *)&param_1[1].callback,pAVar3->scripts[0x100]);
          param_1->addedCallback = (ChainLifecycleCallback *)0x0;
          local_18 = FileSystem::OpenPath("data/musiccmt.txt",0);
          local_10 = local_18;
          if (local_18 == (byte *)0x0) {
            iVar5 = -1;
          }
          else {
            local_8c = (undefined4 *)operator_new(0x4e40);
            if (local_8c == (undefined4 *)0x0) {
              local_8c = (undefined4 *)0x0;
            }
            else {
              local_70 = 0x20;
              local_78 = local_8c;
              while (local_70 = local_70 + -1, -1 < local_70) {
                puVar7 = local_78;
                for (iVar5 = 0x9c; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
                *(undefined2 *)puVar7 = 0;
                local_78 = (undefined4 *)((int)local_78 + 0x272);
              }
            }
            *(undefined4 **)(param_1 + 1) = local_8c;
            local_8 = -1;
            while ((int)local_10 - (int)local_18 < g_LastFileSize) {
              if (*local_10 == 0x40) {
                local_10 = local_10 + 1;
                local_8 = local_8 + 1;
                local_14 = 0;
                while ((*local_10 != 10 && (*local_10 != 0xd))) {
                  *(byte *)(local_8 * 0x272 + *(int *)(param_1 + 1) + local_14) = *local_10;
                  local_10 = local_10 + 1;
                  local_14 = local_14 + 1;
                  if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                }
                while ((*local_10 == 10 || (*local_10 == 0xd))) {
                  local_10 = local_10 + 1;
                  if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                }
                local_14 = 0;
                while ((*local_10 != 10 && (*local_10 != 0xd))) {
                  *(byte *)(local_8 * 0x272 + *(int *)(param_1 + 1) + 0x40 + local_14) = *local_10;
                  local_10 = local_10 + 1;
                  local_14 = local_14 + 1;
                  if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                }
                while ((*local_10 == 10 && (*local_10 == 0xd))) {
                  local_10 = local_10 + 1;
                  if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                }
                local_c = 0;
                while ((local_c < 8 && (*local_10 != 0x40))) {
                  puVar7 = (undefined4 *)
                           (*(int *)(param_1 + 1) + local_8 * 0x272 + 0x62 + local_c * 0x42);
                  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  *(undefined2 *)puVar7 = 0;
                  local_14 = 0;
                  while ((*local_10 != 10 && (*local_10 != 0xd))) {
                    *(byte *)(local_c * 0x42 + 0x62 +
                             local_14 + *(int *)(param_1 + 1) + local_8 * 0x272) = *local_10;
                    local_10 = local_10 + 1;
                    local_14 = local_14 + 1;
                    if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                  }
                  while ((*local_10 == 10 || (*local_10 == 0xd))) {
                    local_10 = local_10 + 1;
                    if (g_LastFileSize <= (int)local_10 - (int)local_18) goto LAB_004259f3;
                  }
                  local_c = local_c + 1;
                }
              }
              else {
                local_10 = local_10 + 1;
              }
            }
LAB_004259f3:
            param_1->arg = (void *)(local_8 + 1);
            for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < (int)param_1->arg;
                local_8 = local_8 + 1) {
              pAVar1 = (AnmVm *)((int)param_1 + local_8 * 0x110 + 0x134);
              AnmVm::Initialize(pAVar1);
              AnmManager::SetActiveSprite(pAVar3,pAVar1,local_8 + 0x101);
              AnmManager::FUN_00434b60
                        (g_AnmManager,(AnmVm *)((int)param_1 + local_8 * 0x110 + 0x134),0xc0e0ff,
                         0x302080,(char *)(*(int *)(param_1 + 1) + 0x40 + local_8 * 0x272),unaff_EDI
                        );
              *(undefined4 *)((int)param_1 + local_8 * 0x110 + 0x1c4) = 0x42ba0000;
              *(float *)((int)param_1 + local_8 * 0x110 + 0x1c8) =
                   ((float)((local_8 + 1) * 0x12) + 104.0) - 20.0;
              *(undefined4 *)((int)param_1 + local_8 * 0x110 + 0x1cc) = 0;
              *(uint *)((int)param_1 + local_8 * 0x110 + 0x1b4) =
                   *(uint *)((int)param_1 + local_8 * 0x110 + 0x1b4) | 0x300;
            }
            for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < 0x10; local_8 = local_8 + 1) {
              pAVar1 = (AnmVm *)((int)param_1 + local_8 * 0x110 + 0x2334);
              AnmVm::Initialize(pAVar1);
              AnmManager::SetActiveSprite(pAVar3,pAVar1,local_8 + 0x708);
              puVar7 = local_5c;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              if (local_8 % 2 == 0) {
LAB_00425c09:
                puVar7 = (undefined4 *)
                         (*(int *)(param_1 + 1) + 0x62 + (local_8 / 2) * 0x42 + (local_8 % 2) * 0x20
                         );
                puVar8 = local_5c;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
              }
              else {
                local_98 = (char *)(*(int *)(param_1 + 1) + (int)param_1->next * 0x272 + 0x62 +
                                   (local_8 / 2) * 0x42);
                pcVar6 = local_98 + 1;
                do {
                  cVar2 = *local_98;
                  local_98 = local_98 + 1;
                } while (cVar2 != '\0');
                if (0x20 < (uint)((int)local_98 - (int)pcVar6)) goto LAB_00425c09;
              }
              if ((char)local_5c[0] == '\0') {
                *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) =
                     *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) & 0xfffffffd;
              }
              else {
                *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) =
                     *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) | 2;
                AnmManager::FUN_00434b60
                          (g_AnmManager,(AnmVm *)((int)param_1 + local_8 * 0x110 + 0x2334),0xffe0c0,
                           0x300000,(char *)local_5c,unaff_EDI);
              }
              *(float *)((int)param_1 + local_8 * 0x110 + 0x23c4) =
                   (float)(local_8 % 2) * 248.0 + 96.0;
              *(float *)((int)param_1 + local_8 * 0x110 + 0x23c8) =
                   (float)(local_8 / 2 << 4) + 320.0;
              *(undefined4 *)((int)param_1 + local_8 * 0x110 + 0x23cc) = 0;
              *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) =
                   *(uint *)((int)param_1 + local_8 * 0x110 + 0x23b4) | 0x300;
            }
            _free(local_18);
            iVar5 = 0;
          }
        }
        else {
          iVar5 = -1;
        }
      }
      else {
        iVar5 = -1;
      }
    }
    else {
      iVar5 = -1;
    }
  }
  else {
    iVar5 = -1;
  }
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return iVar5;
}

