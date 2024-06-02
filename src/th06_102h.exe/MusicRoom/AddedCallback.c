
ZunResult MusicRoom::AddedCallback(MusicRoom *param_1)

{
  ZunResult ZVar4;
  ZunResult iVar5;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  MusicRoom *pMVar1;
  undefined4 *puVar8;
  char *local_98;
  MusicRoom *local_8c;
  MusicRoom *local_78;
  int local_70;
  char local_5c;
  uint local_1c;
  char *firstChar;
  int local_14;
  char *currChar;
  int local_c;
  int local_8;
  char cVar2;
  AnmVm *pAVar1;
  AnmManager *pAVar3;
  uint unaff_retaddr;
  
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
          (param_1->field12_0x24).anmFileIndex = 0x100;
          AnmManager::SetAndExecuteScript(pAVar3,&param_1->field12_0x24,pAVar3->scripts[0x100]);
          param_1->field5_0x8 = 0;
          firstChar = (char *)FileSystem::OpenPath("data/musiccmt.txt",0);
          currChar = firstChar;
          if ((byte *)firstChar == (byte *)0x0) {
            iVar5 = ZUN_ERROR;
          }
          else {
            local_8c = (MusicRoom *)operator_new(0x4e40);
            if (local_8c == (MusicRoom *)0x0) {
              local_8c = (MusicRoom *)0x0;
            }
            else {
              local_70 = 0x20;
              local_78 = local_8c;
              while (local_70 = local_70 + -1, -1 < local_70) {
                pMVar1 = local_78;
                for (iVar6 = 0x9c; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)pMVar1 = 0;
                  pMVar1 = (MusicRoom *)&pMVar1->calc_chain;
                }
                *(undefined2 *)pMVar1 = 0;
                local_78 = (MusicRoom *)((int)&local_78->field13_0x134[1].uvScrollPos.y + 2);
              }
            }
            param_1->field11_0x20 = (char *)local_8c;
            local_8 = -1;
            while ((int)currChar - (int)firstChar < g_LastFileSize) {
              if (*currChar == '@') {
                currChar = currChar + 1;
                local_8 = local_8 + 1;
                local_14 = 0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  param_1->field11_0x20[local_14 + local_8 * 0x272] = *currChar;
                  currChar = currChar + 1;
                  local_14 = local_14 + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                while ((*currChar == '\n' || (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                local_14 = 0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  param_1->field11_0x20[local_14 + local_8 * 0x272 + 0x40] = *currChar;
                  currChar = currChar + 1;
                  local_14 = local_14 + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                while ((*currChar == '\n' && (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                local_c = 0;
                while ((local_c < 8 && (*currChar != '@'))) {
                  puVar7 = (undefined4 *)
                           (param_1->field11_0x20 + local_c * 0x42 + local_8 * 0x272 + 0x62);
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  *(undefined2 *)puVar7 = 0;
                  local_14 = 0;
                  while ((*currChar != '\n' && (*currChar != '\r'))) {
                    param_1->field11_0x20[local_c * 0x42 + 0x62 + local_14 + local_8 * 0x272] =
                         *currChar;
                    currChar = currChar + 1;
                    local_14 = local_14 + 1;
                    if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                  }
                  while ((*currChar == '\n' || (*currChar == '\r'))) {
                    currChar = currChar + 1;
                    if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                  }
                  local_c = local_c + 1;
                }
              }
              else {
                currChar = currChar + 1;
              }
            }
breakWhile:
            param_1->field10_0x1c = local_8 + 1;
            for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < param_1->field10_0x1c;
                local_8 = local_8 + 1) {
              pAVar1 = param_1->field13_0x134 + local_8;
              AnmVm::Initialize(pAVar1);
              AnmManager::SetActiveSprite(pAVar3,pAVar1,local_8 + 0x101);
              AnmManager::DrawVmTextFmt
                        (g_AnmManager,param_1->field13_0x134 + local_8,0xc0e0ff,0x302080,
                         param_1->field11_0x20 + local_8 * 0x272 + 0x40);
              param_1->field13_0x134[local_8].pos.x = 93.0;
              param_1->field13_0x134[local_8].pos.y = ((float)((local_8 + 1) * 0x12) + 104.0) - 20.0
              ;
              param_1->field13_0x134[local_8].pos.z = 0.0;
              param_1->field13_0x134[local_8].flags =
                   param_1->field13_0x134[local_8].flags | (AnmVmFlags_8|AnmVmFlags_9);
            }
            for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < 0x10; local_8 = local_8 + 1) {
              pAVar1 = param_1->field4366_0x2334 + local_8;
              AnmVm::Initialize(pAVar1);
              AnmManager::SetActiveSprite(pAVar3,pAVar1,local_8 + 0x708);
              puVar7 = (undefined4 *)&local_5c;
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              if (local_8 % 2 == 0) {
LAB_00425c09:
                puVar7 = (undefined4 *)
                         (param_1->field11_0x20 + (local_8 % 2) * 0x20 + (local_8 / 2) * 0x42 + 0x62
                         );
                puVar8 = (undefined4 *)&local_5c;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
              }
              else {
                local_98 = param_1->field11_0x20 +
                           (local_8 / 2) * 0x42 + param_1->musicPtr * 0x272 + 0x62;
                pcVar5 = local_98 + 1;
                do {
                  cVar2 = *local_98;
                  local_98 = local_98 + 1;
                } while (cVar2 != '\0');
                if (0x20 < (uint)((int)local_98 - (int)pcVar5)) goto LAB_00425c09;
              }
              if (local_5c == '\0') {
                param_1->field4366_0x2334[local_8].flags =
                     param_1->field4366_0x2334[local_8].flags & 0xfffffffd;
              }
              else {
                param_1->field4366_0x2334[local_8].flags =
                     param_1->field4366_0x2334[local_8].flags | 2;
                AnmManager::DrawVmTextFmt
                          (g_AnmManager,param_1->field4366_0x2334 + local_8,0xffe0c0,0x300000,
                           &local_5c);
              }
              param_1->field4366_0x2334[local_8].pos.x = (float)(local_8 % 2) * 248.0 + 96.0;
              param_1->field4366_0x2334[local_8].pos.y = (float)(local_8 / 2 << 4) + 320.0;
              param_1->field4366_0x2334[local_8].pos.z = 0.0;
              param_1->field4366_0x2334[local_8].flags =
                   param_1->field4366_0x2334[local_8].flags | (AnmVmFlags_8|AnmVmFlags_9);
            }
            _free(firstChar);
            iVar5 = ZUN_SUCCESS;
          }
        }
        else {
          iVar5 = ZUN_ERROR;
        }
      }
      else {
        iVar5 = ZUN_ERROR;
      }
    }
    else {
      iVar5 = ZUN_ERROR;
    }
  }
  else {
    iVar5 = ZUN_ERROR;
  }
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return iVar5;
}

