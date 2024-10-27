
void __thiscall th06::MidiOutput::ProcessMsg(MidiOutput *this,MidiTrack *param_1)

{
  char cVar1;
  LPMIDIHDR pmh;
  MIDIHDR *pMVar2;
  LPSTR pCVar3;
  BOOL BVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  LPMIDIHDR pmVar9;
  undefined8 uVar10;
  MidiTrack *local_30;
  MidiTrack *local_2c;
  byte arg1;
  byte opcode;
  byte bStack_14;
  undefined4 arg2;
  undefined uStack_9;
  
                    /* WARNING: Load size is inaccurate */
  opcode = *param_1->curTrackDataCursor;
  if (opcode < 0x80) {
    opcode = param_1->opcode;
  }
  else {
    param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
  }
  switch(opcode & 0xf0) {
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb0:
  case 0xe0:
                    /* WARNING: Load size is inaccurate */
    arg1 = *param_1->curTrackDataCursor;
    param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
                    /* WARNING: Load size is inaccurate */
    arg2 = (uint)*param_1->curTrackDataCursor;
    param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
    break;
  case 0xc0:
  case 0xd0:
                    /* WARNING: Load size is inaccurate */
    arg1 = *param_1->curTrackDataCursor;
    param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
    arg2 = 0;
    break;
  case 0xf0:
    if (opcode == 0xf0) {
      if (this->midiHeaders[this->midiHeadersCursor] != (MIDIHDR *)0x0) {
        UnprepareHeader(this,this->midiHeaders[this->midiHeadersCursor]);
      }
      pMVar2 = (MIDIHDR *)_malloc(0x40);
      this->midiHeaders[this->midiHeadersCursor] = pMVar2;
      pmh = this->midiHeaders[this->midiHeadersCursor];
      iVar7 = FUN_00421d90(&param_1->curTrackDataCursor);
      pmVar9 = pmh;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        pmVar9->lpData = (LPSTR)0x0;
        pmVar9 = (LPMIDIHDR)&pmVar9->dwBufferLength;
      }
      pCVar3 = (LPSTR)_malloc(iVar7 + 1);
      pmh->lpData = pCVar3;
      *pmh->lpData = -0x10;
      pmh->dwFlags = 0;
      pmh->dwBufferLength = iVar7 + 1;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < iVar7) {
                    /* WARNING: Load size is inaccurate */
        pmh->lpData[CONCAT13(uStack_9,arg2._1_3_) + 1] = *param_1->curTrackDataCursor;
        param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
        iVar8 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar8;
        uStack_9 = (undefined)((uint)iVar8 >> 0x18);
      }
      BVar4 = MidiDevice::SendLongMsg(&this->midiOutDev,pmh);
      if (BVar4 != 0) {
        _free(pmh->lpData);
        _free(pmh);
        this->midiHeaders[this->midiHeadersCursor] = (MIDIHDR *)0x0;
      }
      this->midiHeadersCursor = this->midiHeadersCursor + 1;
      uVar5 = this->midiHeadersCursor & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      this->midiHeadersCursor = uVar5;
    }
    else if (opcode == 0xff) {
                    /* WARNING: Load size is inaccurate */
      cVar1 = *param_1->curTrackDataCursor;
      param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
      iVar7 = FUN_00421d90(&param_1->curTrackDataCursor);
      if (cVar1 == '/') {
        param_1->track_playing = 0;
        return;
      }
      if (cVar1 == 'Q') {
        uVar10 = __allmul(this->unk128,this->unk12c,this->divisons,this->divisons >> 0x1f);
        uVar10 = __allmul(uVar10,1000,0);
        uVar10 = __aulldiv(uVar10,this->unk120,this->unk120 >> 0x1f);
        uVar5 = this->unk130;
        this->unk130 = uVar5 + (uint)uVar10;
        this->unk134 = this->unk134 + (int)((ulonglong)uVar10 >> 0x20) +
                       (uint)CARRY4(uVar5,(uint)uVar10);
        this->unk128 = 0;
        this->unk12c = 0;
        this->unk120 = 0;
        arg2 = arg2 & 0xff;
        uStack_9 = 0;
        while (CONCAT13(uStack_9,arg2._1_3_) < iVar7) {
                    /* WARNING: Load size is inaccurate */
          this->unk120 = this->unk120 * 0x100 + (uint)*param_1->curTrackDataCursor + this->unk120;
          param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
          iVar8 = CONCAT13(uStack_9,arg2._1_3_) + 1;
          arg2._1_3_ = (undefined3)iVar8;
          uStack_9 = (undefined)((uint)iVar8 >> 0x18);
        }
      }
      else {
        param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + iVar7);
      }
    }
  }
  switch(opcode & 0xf0) {
  case 0x90:
    if ((arg2 & 0xff) != 0) {
      arg1 = arg1 + this->unk2c4;
      this->channels[opcode & 0xffff0f].keyPressedFlags
      [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
           this->channels[opcode & 0xffff0f].keyPressedFlags
           [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] | (byte)(1 << (arg1 & 7));
      break;
    }
  case 0x80:
    arg1 = arg1 + this->unk2c4;
    this->channels[opcode & 0xffff0f].keyPressedFlags
    [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
         this->channels[opcode & 0xffff0f].keyPressedFlags
         [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] & ~(byte)(1 << (arg1 & 7));
    break;
  case 0xb0:
    switch(arg1) {
    case 0:
      this->channels[opcode & 0xffff0f].instrumentBank = (byte)arg2;
      break;
    case 2:
      local_2c = this->tracks;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < this->num_tracks) {
        local_2c->unk18 = local_2c->curTrackDataCursor;
        local_2c->unk1c = local_2c->unk4;
        iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar7;
        local_2c = local_2c + 1;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      this->unk2ec = this->unk120;
      this->unk2f0 = this->unk128;
      this->unk2f4 = this->unk12c;
      this->unk2f8 = this->unk130;
      this->unk2fc = this->unk134;
      break;
    case 4:
      local_30 = this->tracks;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < this->num_tracks) {
        local_30->curTrackDataCursor = local_30->unk18;
        local_30->unk4 = local_30->unk1c;
        iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar7;
        local_30 = local_30 + 1;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      this->unk120 = this->unk2ec;
      this->unk128 = this->unk2f0;
      this->unk12c = this->unk2f4;
      this->unk130 = this->unk2f8;
      this->unk134 = this->unk2fc;
      break;
    case 7:
      this->channels[opcode & 0xffff0f].channelVolume = (byte)arg2;
      lVar6 = __ftol2((float)(arg2 & 0xff) * this->fadeOutVolumeMultiplier);
      bStack_14 = (byte)lVar6;
      if (lVar6 < 0) {
        bStack_14 = 0;
      }
      else if (0x7f < lVar6) {
        bStack_14 = 0x7f;
      }
      this->channels[(CONCAT11(bStack_14,opcode) & 0xffff0f) & 0xff].modifiedVolume = bStack_14;
      arg2 = (uint)bStack_14;
      break;
    case 10:
      this->channels[opcode & 0xffff0f].pan = (byte)arg2;
      break;
    case 0x5b:
      this->channels[opcode & 0xffff0f].effectOneDepth = (byte)arg2;
      break;
    case 0x5d:
      this->channels[opcode & 0xffff0f].effectThreeDepth = (byte)arg2;
    }
    break;
  case 0xc0:
    this->channels[opcode & 0xffff0f].instrument = arg1;
  }
  if (opcode < 0xf0) {
    MidiDevice::SendShortMsg(&this->midiOutDev,opcode,arg1,(byte)arg2);
  }
  param_1->opcode = opcode;
  iVar7 = FUN_00421d90(&param_1->curTrackDataCursor);
  param_1->unk4 = param_1->unk4 + iVar7;
  return;
}

