
void FUN_0042564c(int param_1)

{
  AnmVm *pAVar1;
  char cVar2;
  AnmManager *pAVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
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
  iVar4 = AnmManager::LoadSurface(g_AnmManager,0,"data/result/music.jpg");
  if ((((iVar4 == 0) &&
       (iVar4 = AnmManager::LoadAnm(g_AnmManager,0x29,"data/music00.anm",0x100), iVar4 == 0)) &&
      (iVar4 = AnmManager::LoadAnm(g_AnmManager,0x2a,"data/music01.anm",0x101), iVar4 == 0)) &&
     (iVar4 = AnmManager::LoadAnm(g_AnmManager,0x2b,"data/music02.anm",0x111), pAVar3 = g_AnmManager
     , iVar4 == 0)) {
    *(undefined2 *)(param_1 + 0xd8) = 0x100;
    AnmManager::SetBeginingOfScript(pAVar3,(AnmVm *)(param_1 + 0x24),pAVar3->scripts[0x100]);
    *(undefined4 *)(param_1 + 8) = 0;
    local_18 = OpenPath("data/musiccmt.txt",0);
    local_10 = local_18;
    if (local_18 != (byte *)0x0) {
      local_8c = (undefined4 *)operator_new(0x4e40);
      if (local_8c == (undefined4 *)0x0) {
        local_8c = (undefined4 *)0x0;
      }
      else {
        local_70 = 0x20;
        local_78 = local_8c;
        while (local_70 = local_70 + -1, -1 < local_70) {
          puVar6 = local_78;
          for (iVar4 = 0x9c; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          *(undefined2 *)puVar6 = 0;
          local_78 = (undefined4 *)((int)local_78 + 0x272);
        }
      }
      *(undefined4 **)(param_1 + 0x20) = local_8c;
      local_8 = -1;
      while ((int)local_10 - (int)local_18 < g_LastFileSize) {
        if (*local_10 == 0x40) {
          local_10 = local_10 + 1;
          local_8 = local_8 + 1;
          local_14 = 0;
          while ((*local_10 != 10 && (*local_10 != 0xd))) {
            *(byte *)(local_8 * 0x272 + *(int *)(param_1 + 0x20) + local_14) = *local_10;
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
            *(byte *)(local_8 * 0x272 + *(int *)(param_1 + 0x20) + 0x40 + local_14) = *local_10;
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
            puVar6 = (undefined4 *)
                     (*(int *)(param_1 + 0x20) + local_8 * 0x272 + 0x62 + local_c * 0x42);
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
            local_14 = 0;
            while ((*local_10 != 10 && (*local_10 != 0xd))) {
              *(byte *)(local_c * 0x42 + 0x62 +
                       local_14 + *(int *)(param_1 + 0x20) + local_8 * 0x272) = *local_10;
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
      *(int *)(param_1 + 0x1c) = local_8 + 1;
      for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < *(int *)(param_1 + 0x1c);
          local_8 = local_8 + 1) {
        pAVar1 = (AnmVm *)(param_1 + 0x134 + local_8 * 0x110);
        AnmVm::Initialize(pAVar1);
        AnmManager::FUN_004323a0(pAVar3,pAVar1,local_8 + 0x101);
        FUN_00434b60(g_AnmManager,param_1 + 0x134 + local_8 * 0x110,0xc0e0ff,0x302080,
                     *(int *)(param_1 + 0x20) + 0x40 + local_8 * 0x272);
        *(undefined4 *)(param_1 + 0x1c4 + local_8 * 0x110) = 0x42ba0000;
        *(float *)(param_1 + 0x1c8 + local_8 * 0x110) =
             ((float)((local_8 + 1) * 0x12) + 104.0) - 20.0;
        *(undefined4 *)(param_1 + 0x1cc + local_8 * 0x110) = 0;
        *(uint *)(param_1 + 0x1b4 + local_8 * 0x110) =
             *(uint *)(param_1 + 0x1b4 + local_8 * 0x110) | 0x300;
      }
      for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < 0x10; local_8 = local_8 + 1) {
        pAVar1 = (AnmVm *)(param_1 + 0x2334 + local_8 * 0x110);
        AnmVm::Initialize(pAVar1);
        AnmManager::FUN_004323a0(pAVar3,pAVar1,local_8 + 0x708);
        puVar6 = local_5c;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        if (local_8 % 2 == 0) {
LAB_00425c09:
          puVar6 = (undefined4 *)
                   (*(int *)(param_1 + 0x20) + 0x62 + (local_8 / 2) * 0x42 + (local_8 % 2) * 0x20);
          puVar7 = local_5c;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          local_98 = (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x14) * 0x272 + 0x62 +
                             (local_8 / 2) * 0x42);
          pcVar5 = local_98 + 1;
          do {
            cVar2 = *local_98;
            local_98 = local_98 + 1;
          } while (cVar2 != '\0');
          if (0x20 < (uint)((int)local_98 - (int)pcVar5)) goto LAB_00425c09;
        }
        if ((char)local_5c[0] == '\0') {
          *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
               *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) & 0xfffffffd;
        }
        else {
          *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
               *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) | 2;
          FUN_00434b60(g_AnmManager,param_1 + 0x2334 + local_8 * 0x110,0xffe0c0,0x300000,local_5c);
        }
        *(float *)(param_1 + 0x23c4 + local_8 * 0x110) = (float)(local_8 % 2) * 248.0 + 96.0;
        *(float *)(param_1 + 0x23c8 + local_8 * 0x110) = (float)(local_8 / 2 << 4) + 320.0;
        *(undefined4 *)(param_1 + 0x23cc + local_8 * 0x110) = 0;
        *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) =
             *(uint *)(param_1 + 0x23b4 + local_8 * 0x110) | 0x300;
      }
      _free(local_18);
    }
  }
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return;
}

