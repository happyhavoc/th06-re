
void __thiscall th06::MusicRoom::DrawMusicList(MusicRoom *this)

{
  char *pcVar2;
  int vmIterator2;
  undefined4 *puVar4;
  undefined4 *puVar5;
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
    Supervisor::PlayAudio
              (&g_Supervisor,(char *)((int)&this->musicRoomPtr->calc_chain + this->musicPtr * 0x272)
              );
    for (vmIterator = 0; vmIterator < 16; vmIterator = vmIterator + 1) {
      puVar4 = (undefined4 *)&buf;
      for (vmIterator2 = 16; vmIterator2 != 0; vmIterator2 = vmIterator2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (vmIterator % 2 == 0) {
LAB_0042508a:
        puVar4 = (undefined4 *)
                 ((int)&this->musicRoomPtr->mainVM +
                 (vmIterator % 2) * 0x20 + (vmIterator / 2) * 0x42 + this->musicPtr * 0x272 + 0x3e);
        puVar5 = (undefined4 *)&buf;
        for (vmIterator2 = 8; vmIterator2 != 0; vmIterator2 = vmIterator2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_5c = (char *)((int)&this->musicRoomPtr->mainVM +
                           (vmIterator / 2) * 0x42 + this->musicPtr * 0x272 + 0x3e);
        pcVar2 = local_5c + 1;
        do {
          cVar1 = *local_5c;
          local_5c = local_5c + 1;
        } while (cVar1 != '\0');
        if (32 < (uint)((int)local_5c - (int)pcVar2)) goto LAB_0042508a;
      }
      if (buf == '\0') {
        (&this[1].mainVM)[vmIterator].matrix.m[2][0] =
             (float)((uint)(&this[1].mainVM)[vmIterator].matrix.m[2][0] & 0xfffffffd);
      }
      else {
        (&this[1].mainVM)[vmIterator].matrix.m[2][0] =
             (float)((uint)(&this[1].mainVM)[vmIterator].matrix.m[2][0] | 2);
        AnmManager::DrawVmTextFmt
                  (g_AnmManager,(AnmVm *)(&this[1].calc_chain + vmIterator * 0x44),
                   (ZunColor)0xffe0c0,(ZunColor)0x300000,&buf);
      }
      (&this[1].mainVM)[vmIterator].matrix.m[3][0] = (float)(vmIterator % 2) * 248.0 + 96.0;
      (&this[1].mainVM)[vmIterator].matrix.m[3][1] = (float)(vmIterator / 2 << 4) + 320.0;
      (&this[1].mainVM)[vmIterator].matrix.m[3][2] = 0.0;
      (&this[1].mainVM)[vmIterator].matrix.m[2][0] =
           (float)((uint)(&this[1].mainVM)[vmIterator].matrix.m[2][0] | 0x300);
    }
  }
                    /* Exit Condition? */
  if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
    g_Supervisor.curState = 1;
  }
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}

