
void __thiscall MusicRoom::drawMusicList(MusicRoom *this)

{
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *local_5c;
  char local_54;
  uint local_10;
  int local_c;
  int local_8;
  char cVar1;
  uint unaff_retaddr;
  
  local_10 = __security_cookie ^ unaff_retaddr;
  local_8 = this->listingOffset;
  if (((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10))) {
    this->cursor = this->cursor + -1;
    if (this->cursor < 0) {
      this->cursor = this->field10_0x1c + -1;
      this->listingOffset = this->field10_0x1c + -10;
    }
    else if (this->cursor < this->listingOffset) {
      this->listingOffset = this->cursor;
    }
  }
  if (((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20))) {
    this->cursor = this->cursor + 1;
    if (this->cursor < this->field10_0x1c) {
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
    Supervisor::PlayAudio(&g_Supervisor,this->field11_0x20 + this->musicPtr * 0x272);
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      puVar4 = (undefined4 *)&local_54;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (local_c % 2 == 0) {
LAB_0042508a:
        puVar4 = (undefined4 *)
                 (this->field11_0x20 +
                 (local_c % 2) * 0x20 + (local_c / 2) * 0x42 + this->musicPtr * 0x272 + 0x62);
        puVar5 = (undefined4 *)&local_54;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_5c = this->field11_0x20 + (local_c / 2) * 0x42 + this->musicPtr * 0x272 + 0x62;
        pcVar2 = local_5c + 1;
        do {
          cVar1 = *local_5c;
          local_5c = local_5c + 1;
        } while (cVar1 != '\0');
        if (0x20 < (uint)((int)local_5c - (int)pcVar2)) goto LAB_0042508a;
      }
      if (local_54 == '\0') {
        *(uint *)&this->field4366_0x2334[local_c].flags =
             *(uint *)&this->field4366_0x2334[local_c].flags & 0xfffffffd;
      }
      else {
        *(uint *)&this->field4366_0x2334[local_c].flags =
             *(uint *)&this->field4366_0x2334[local_c].flags | 2;
        AnmManager::DrawVmTextFmt
                  (g_AnmManager,this->field4366_0x2334 + local_c,0xffe0c0,0x300000,&local_54);
      }
      this->field4366_0x2334[local_c].pos.x = (float)(local_c % 2) * 248.0 + 96.0;
      this->field4366_0x2334[local_c].pos.y = (float)(local_c / 2 << 4) + 320.0;
      this->field4366_0x2334[local_c].pos.z = 0.0;
      *(uint *)&this->field4366_0x2334[local_c].flags =
           *(uint *)&this->field4366_0x2334[local_c].flags | 0x300;
    }
  }
  if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
    g_Supervisor.curState = 1;
  }
  __security_check_cookie(local_10 ^ unaff_retaddr);
  return;
}

