
ZunResult __cdecl th06::MusicRoom::AddedCallback(MusicRoom *musicRoom)

{
  char *pcVar1;
  ZunResult ZVar4;
  ZunResult return;
  int iVar6;
  char *puVar7;
  TrackDescriptor *item;
  char (*pacVar2) [66];
  undefined4 *puVar8;
  char (*local_98) [66];
  TrackDescriptor *trackDescriptorPtr;
  TrackDescriptor *local_78;
  int numDescriptors;
  char lineCharBuffer;
  uint local_1c;
  u8 *firstChar;
  int charIndex;
  char *currChar;
  int lineIndex;
  int offset;
  AnmManager *anmMgr;
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
          musicRoom->mainVM[0].anmFileIndex = 0x100;
          AnmManager::SetAndExecuteScript(anmMgr,musicRoom->mainVM,anmMgr->scripts[0x100]);
          musicRoom->waitFramesCounter = 0;
          firstChar = FileSystem::OpenPath("data/musiccmt.txt",0);
          currChar = (char *)firstChar;
                    /* If we couldn't read the file (OpenPath returning NULL)
                        */
          if (firstChar == (byte *)0x0) {
            return = ZUN_ERROR;
          }
          else {
            trackDescriptorPtr = (TrackDescriptor *)operator_new(0x4e40);
            if (trackDescriptorPtr == (TrackDescriptor *)0x0) {
              trackDescriptorPtr = (TrackDescriptor *)0x0;
            }
            else {
                    /* Implicit zeroing via new keyword? */
              numDescriptors = 0x20;
              local_78 = trackDescriptorPtr;
              while (numDescriptors = numDescriptors + -1, -1 < numDescriptors) {
                item = local_78;
                for (iVar6 = 0x9c; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)item->path = 0;
                  item = (TrackDescriptor *)(item->path + 4);
                }
                *(undefined2 *)item->path = 0;
                local_78 = local_78 + 1;
              }
            }
            musicRoom->trackDescriptors = trackDescriptorPtr;
            offset = -1;
            while ((int)currChar - (int)firstChar < g_LastFileSize) {
              if (*currChar == '@') {
                currChar = currChar + 1;
                offset = offset + 1;
                charIndex = 0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  musicRoom->trackDescriptors[offset].path[charIndex] = *currChar;
                  currChar = currChar + 1;
                  charIndex = charIndex + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                }
                while ((*currChar == '\n' || (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                }
                charIndex = 0;
                while ((*currChar != '\n' && (*currChar != '\r'))) {
                  musicRoom->trackDescriptors[offset].title[charIndex] = *currChar;
                  currChar = currChar + 1;
                  charIndex = charIndex + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                }
                while ((*currChar == '\n' && (*currChar == '\r'))) {
                  currChar = currChar + 1;
                  if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                }
                lineIndex = 0;
                while ((lineIndex < 8 && (*currChar != '@'))) {
                  pacVar2 = musicRoom->trackDescriptors[offset].description + lineIndex;
                    /* memset(trackDescriptors[offset], 0, sizeof(trackDescriptors[offset])
                       Yes, we already zeroed this out earlier */
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined4 *)*pacVar2 = 0;
                    pacVar2 = (char (*) [66])(*pacVar2 + 4);
                  }
                  *(undefined2 *)*pacVar2 = 0;
                  charIndex = 0;
                  while ((*currChar != '\n' && (*currChar != '\r'))) {
                    musicRoom->trackDescriptors[offset].description[lineIndex][charIndex] =
                         *currChar;
                    currChar = currChar + 1;
                    charIndex = charIndex + 1;
                    if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                  }
                  while ((*currChar == '\n' || (*currChar == '\r'))) {
                    currChar = currChar + 1;
                    if (g_LastFileSize <= (int)currChar - (int)firstChar) goto finishMusiccmtRead;
                  }
                  lineIndex = lineIndex + 1;
                }
              }
              else {
                currChar = currChar + 1;
              }
            }
finishMusiccmtRead:
            musicRoom->numDescriptors = offset + 1;
                    /* Prepare sprites and title text for each track in the list */
            for (offset = 0; anmMgr = g_AnmManager, offset < musicRoom->numDescriptors;
                offset = offset + 1) {
              curSprite = musicRoom->titleSprites + offset;
              AnmVm::Initialize(curSprite);
              AnmManager::SetActiveSprite(anmMgr,curSprite,offset + 0x101);
              AnmManager::DrawVmTextFmt
                        (g_AnmManager,musicRoom->titleSprites + offset,(ZunColor)0xc0e0ff,
                         (ZunColor)0x302080,musicRoom->trackDescriptors[offset].title);
              musicRoom->titleSprites[offset].pos.x = 93.0;
              musicRoom->titleSprites[offset].pos.y = ((float)((offset + 1) * 0x12) + 104.0) - 20.0;
              musicRoom->titleSprites[offset].pos.z = 0.0;
              musicRoom->titleSprites[offset].flags =
                   musicRoom->titleSprites[offset].flags | (AnmVmFlags_8|AnmVmFlags_9);
            }
                    /* Each line of the description actually has 2 sprites, with the split coming at
                       the 32nd byte */
            for (offset = 0; anmMgr = g_AnmManager, offset < 0x10; offset = offset + 1) {
              curSprite = musicRoom->descriptionSprites + offset;
              AnmVm::Initialize(curSprite);
              AnmManager::SetActiveSprite(anmMgr,curSprite,offset + 0x708);
              puVar8 = (undefined4 *)&lineCharBuffer;
              for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
                    /* This is a mess, but we're basically just isolating what text appears in the
                       current sprite */
              if (offset % 2 == 0) {
LAB_00425c09:
                puVar7 = musicRoom->trackDescriptors->description[offset / 2] + (offset % 2) * 0x20;
                puVar8 = (undefined4 *)&lineCharBuffer;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar8 = *(undefined4 *)puVar7;
                  puVar7 = puVar7 + 4;
                  puVar8 = puVar8 + 1;
                }
              }
              else {
                local_98 = musicRoom->trackDescriptors[musicRoom->selectedSongIndex].description +
                           offset / 2;
                puVar7 = *local_98;
                do {
                  pcVar1 = *local_98;
                  local_98 = (char (*) [66])(*local_98 + 1);
                } while (*pcVar1 != '\0');
                if (0x20 < (uint)((int)local_98 - (int)(puVar7 + 1))) goto LAB_00425c09;
              }
              if (lineCharBuffer == '\0') {
                musicRoom->descriptionSprites[offset].flags =
                     musicRoom->descriptionSprites[offset].flags & 0xfffffffd;
              }
              else {
                musicRoom->descriptionSprites[offset].flags =
                     musicRoom->descriptionSprites[offset].flags | 2;
                AnmManager::DrawVmTextFmt
                          (g_AnmManager,musicRoom->descriptionSprites + offset,(ZunColor)0xffe0c0,
                           (ZunColor)0x300000,&lineCharBuffer);
              }
              musicRoom->descriptionSprites[offset].pos.x = (float)(offset % 2) * 248.0 + 96.0;
              musicRoom->descriptionSprites[offset].pos.y = (float)(offset / 2 << 4) + 320.0;
              musicRoom->descriptionSprites[offset].pos.z = 0.0;
              musicRoom->descriptionSprites[offset].flags =
                   musicRoom->descriptionSprites[offset].flags | (AnmVmFlags_8|AnmVmFlags_9);
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

