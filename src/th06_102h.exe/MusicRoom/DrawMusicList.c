
uint __thiscall th06::MusicRoom::DrawMusicList(MusicRoom *this)

{
  char *pcVar2;
  uint uVar1;
  int vmIterator2;
  i32 *local_EDI_385;
  i32 *puVar5;
  char *local_5c;
  char buf;
  uint local_10;
  int vmIterator;
  int listingOffset;
  char cVar1;
  uint unaff_retaddr;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  listingOffset = this->listingOffset;
  if (((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) {
    this->cursor = this->cursor + -1;
    if (this->cursor < 0) {
      this->cursor = this->currOffset + -1;
      this->listingOffset = this->currOffset + -10;
    }
    else if (this->cursor < this->listingOffset) {
      this->listingOffset = this->cursor;
    }
  }
  if (((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20))) {
    this->cursor = this->cursor + 1;
    if (this->cursor < this->currOffset) {
      if (this->listingOffset <= this->cursor + -10) {
        this->listingOffset = this->cursor + -9;
      }
    }
    else {
      this->cursor = 0;
      this->listingOffset = 0;
    }
  }
  if (((g_CurFrameInput & 0x1001) != 0) &&
     ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
    this->musicPtr = this->cursor;
    Supervisor::PlayAudio(&g_Supervisor,this->musicRoomInnerDataPtr->item[this->musicPtr].path);
    for (vmIterator = 0; vmIterator < 16; vmIterator = vmIterator + 1) {
      local_EDI_385 = (i32 *)&buf;
      for (vmIterator2 = 16; vmIterator2 != 0; vmIterator2 = vmIterator2 + -1) {
        *local_EDI_385 = 0;
        local_EDI_385 = local_EDI_385 + 1;
      }
      if (vmIterator % 2 == 0) {
LAB_0042508a:
        pcVar2 = this->musicRoomInnerDataPtr->item[this->musicPtr].title +
                 (vmIterator % 2) * 0x20 + (vmIterator / 2) * 0x42 + 0x22;
        puVar5 = (i32 *)&buf;
        for (vmIterator2 = 8; vmIterator2 != 0; vmIterator2 = vmIterator2 + -1) {
          *puVar5 = *(i32 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_5c = this->musicRoomInnerDataPtr->item[this->musicPtr].title +
                   (vmIterator / 2) * 0x42 + 0x22;
        pcVar2 = local_5c + 1;
        do {
          cVar1 = *local_5c;
          local_5c = local_5c + 1;
        } while (cVar1 != '\0');
        if (32 < (uint)((int)local_5c - (int)pcVar2)) goto LAB_0042508a;
      }
      if (buf == '\0') {
        this->anmArray2[vmIterator].flags = this->anmArray2[vmIterator].flags & 0xfffffffd;
      }
      else {
        this->anmArray2[vmIterator].flags = this->anmArray2[vmIterator].flags | 2;
        AnmManager::DrawVmTextFmt
                  (g_AnmManager,this->anmArray2 + vmIterator,(ZunColor)0xffe0c0,(ZunColor)0x300000,
                   &buf);
      }
      this->anmArray2[vmIterator].pos.x = (float)(vmIterator % 2) * 248.0 + 96.0;
      this->anmArray2[vmIterator].pos.y = (float)(vmIterator / 2 << 4) + 320.0;
      this->anmArray2[vmIterator].pos.z = 0.0;
      this->anmArray2[vmIterator].flags =
           this->anmArray2[vmIterator].flags | (AnmVmFlags_8|AnmVmFlags_9);
    }
  }
                    /* Exit Condition? */
  if (((g_CurFrameInput & 10) == 0) || ((g_CurFrameInput & 10) == (g_LastFrameInput & 10))) {
    uVar1 = 0;
  }
  else {
    g_Supervisor.curState = 1;
    uVar1 = 1;
  }
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return uVar1;
}

