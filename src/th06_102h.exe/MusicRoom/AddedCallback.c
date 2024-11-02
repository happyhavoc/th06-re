
ZunResult __cdecl th06::MusicRoom::AddedCallback(MusicRoom *musicRoom)

{
  ZunResult ZVar4;
  ZunResult return;
  char *pcVar5;
  int iVar6;
  int iVar1;
  undefined4 *puVar7;
  MusicRoom *pMVar1;
  undefined4 *puVar8;
  char *local_98;
  MusicRoom *musicRoomObj;
  MusicRoom *local_78;
  int local_70;
  char local_5c;
  uint local_1c;
  byte *firstChar;
  MusicRoom *local_14;
  char *currChar;
  int local_c;
  int offset;
  AnmManager *anmMgr;
  char cVar2;
  AnmVm *curSprite;
  uint unaff_retaddr;
  
  local_1c = __security_cookie ^ unaff_retaddr;
  ZVar4 = AnmManager::LoadSurface(g_AnmManager,0,"data/result/music.jpg");
  if (ZVar4 == ZUN_SUCCESS) {
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x29,"data/music00.anm",0x100);
    if (ZVar4 == ZUN_SUCCESS) {
      ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x2a,"data/music01.anm",0x101);
      if (ZVar4 == ZUN_SUCCESS) {
        ZVar4 = AnmManager::LoadAnm(g_AnmManager,0x2b,"data/music02.anm",0x111);
        anmMgr = g_AnmManager;
        if (ZVar4 == ZUN_SUCCESS) {
          (musicRoom->mainVM).anmFileIndex = 0x100;
          AnmManager::SetAndExecuteScript(anmMgr,&musicRoom->mainVM,anmMgr->scripts[0x100]);
          musicRoom->field2_0x8 = 0;
          firstChar = FileSystem::OpenPath("data/musiccmt.txt",0);
          currChar = (char *)firstChar;
                    /* If we couldn't read the file (OpenPath returning NULL)
                        */
          if (firstChar == (byte *)0x0) {
            return = ZUN_ERROR;
          }
          else {
            musicRoomObj = (MusicRoom *)operator_new(0x4e40);
            if (musicRoomObj == (MusicRoom *)0x0) {
              musicRoomObj = (MusicRoom *)0x0;
            }
            else {
              local_70 = 0x20;
              local_78 = musicRoomObj;
              while (local_70 = local_70 + -1, -1 < local_70) {
                pMVar1 = local_78;
                for (iVar6 = 0x9c; iVar6 != 0; iVar6 = iVar6 + -1) {
                  pMVar1->calc_chain = (ChainElem *)0x0;
                  pMVar1 = (MusicRoom *)&pMVar1->draw_chain;
                }
                *(undefined2 *)&pMVar1->calc_chain = 0;
                local_78 = (MusicRoom *)((int)&local_78->anmArray[1].uvScrollPos.y + 2);
              }
            }
            musicRoom->musicRoomPtr = musicRoomObj;
            offset = -1;
            iVar6 = offset;
            while (offset = iVar6, iVar6 = offset, (int)currChar - (int)firstChar < g_LastFileSize)
            {
              if (*currChar == '@') {
                currChar = currChar + 1;
                iVar6 = offset + 1;
                local_14 = (MusicRoom *)0x0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  *(char *)((int)local_14->anmArray +
                           (int)musicRoom->musicRoomPtr->anmArray + offset * 0x272 + 10) = *currChar
                  ;
                  currChar = currChar + 1;
                  local_14 = (MusicRoom *)((int)&local_14->calc_chain + 1);
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                while ((*currChar == '\n' || (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                local_14 = (MusicRoom *)0x0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  *(char *)((int)local_14->anmArray +
                           (int)musicRoom->musicRoomPtr->anmArray + offset * 0x272 + 0x4a) =
                       *currChar;
                  currChar = currChar + 1;
                  local_14 = (MusicRoom *)((int)&local_14->calc_chain + 1);
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                while ((*currChar == '\n' && (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto breakWhile;
                }
                local_c = 0;
                while ((local_c < 8 && (*currChar != '@'))) {
                  puVar7 = (undefined4 *)
                           ((int)musicRoom->musicRoomPtr->anmArray +
                           local_c * 0x42 + offset * 0x272 + 0x1a0);
                  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  *(undefined2 *)puVar7 = 0;
                  local_14 = (MusicRoom *)0x0;
                  while ((*currChar != '\n' && (*currChar != '\r'))) {
                    *(char *)((int)local_14->anmArray +
                             (int)musicRoom->musicRoomPtr->anmArray +
                             local_c * 0x42 + offset * 0x272 + 0x6c) = *currChar;
                    currChar = currChar + 1;
                    local_14 = (MusicRoom *)((int)&local_14->calc_chain + 1);
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
            offset = iVar6;
            musicRoom->currOffset = offset + 1;
            for (offset = 0; anmMgr = g_AnmManager, offset < musicRoom->currOffset;
                offset = offset + 1) {
              curSprite = musicRoom->anmArray + offset;
              AnmVm::Initialize(curSprite);
              AnmManager::SetActiveSprite(anmMgr,curSprite,offset + 0x101);
              AnmManager::DrawVmTextFmt
                        (g_AnmManager,musicRoom->anmArray + offset,(ZunColor)0xc0e0ff,
                         (ZunColor)0x302080,
                         (char *)((int)&musicRoom->musicRoomPtr->mainVM + offset * 0x272 + 0x1c));
              musicRoom->anmArray[offset].pos.x = 93.0;
              musicRoom->anmArray[offset].pos.y = ((float)((offset + 1) * 0x12) + 104.0) - 20.0;
              musicRoom->anmArray[offset].pos.z = 0.0;
              musicRoom->anmArray[offset].flags =
                   musicRoom->anmArray[offset].flags | (AnmVmFlags_8|AnmVmFlags_9);
            }
            for (offset = 0; anmMgr = g_AnmManager, offset < 0x10; offset = offset + 1) {
              curSprite = musicRoom->anmArray2 + offset;
              AnmVm::Initialize(curSprite);
              AnmManager::SetActiveSprite(anmMgr,curSprite,offset + 0x708);
              puVar7 = (undefined4 *)&local_5c;
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              if (offset % 2 == 0) {
LAB_00425c09:
                puVar7 = (undefined4 *)
                         ((int)&(musicRoom->musicRoomPtr->mainVM).matrix +
                         (offset % 2) * 0x20 + (offset / 2) * 0x42 + 2);
                puVar8 = (undefined4 *)&local_5c;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
              }
              else {
                local_98 = (char *)((int)&musicRoom->musicRoomPtr->mainVM +
                                   (offset / 2) * 0x42 + musicRoom->musicPtr * 0x272 + 0x3e);
                pcVar5 = local_98 + 1;
                do {
                  cVar2 = *local_98;
                  local_98 = local_98 + 1;
                } while (cVar2 != '\0');
                if (0x20 < (uint)((int)local_98 - (int)pcVar5)) goto LAB_00425c09;
              }
              if (local_5c == '\0') {
                musicRoom->anmArray2[offset].flags = musicRoom->anmArray2[offset].flags & 0xfffffffd
                ;
              }
              else {
                musicRoom->anmArray2[offset].flags = musicRoom->anmArray2[offset].flags | 2;
                AnmManager::DrawVmTextFmt
                          (g_AnmManager,musicRoom->anmArray2 + offset,(ZunColor)0xffe0c0,
                           (ZunColor)0x300000,&local_5c);
              }
              musicRoom->anmArray2[offset].pos.x = (float)(offset % 2) * 248.0 + 96.0;
              musicRoom->anmArray2[offset].pos.y = (float)(offset / 2 << 4) + 320.0;
              musicRoom->anmArray2[offset].pos.z = 0.0;
              musicRoom->anmArray2[offset].flags =
                   musicRoom->anmArray2[offset].flags | (AnmVmFlags_8|AnmVmFlags_9);
            }
            _free(firstChar);
            return = ZUN_SUCCESS;
          }
        }
        else {
          return = ZUN_ERROR;
        }
      }
      else {
        return = ZUN_ERROR;
      }
    }
    else {
      return = ZUN_ERROR;
    }
  }
  else {
    return = ZUN_ERROR;
  }
  __security_check_cookie(local_1c ^ unaff_retaddr);
  return return;
}

