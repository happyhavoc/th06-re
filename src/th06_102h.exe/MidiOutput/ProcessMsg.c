
void __thiscall th06::MidiOutput::ProcessMsg(MidiOutput *this,MidiTrack *param_1)

{
  LPMIDIHDR pmh;
  MIDIHDR *pMVar1;
  LPSTR pCVar2;
  BOOL BVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  LPMIDIHDR pmVar8;
  undefined8 uVar9;
  MidiTrack *local_30;
  MidiTrack *local_2c;
  byte arg1;
  byte opcode;
  byte bStack_14;
  undefined4 arg2;
  undefined uStack_9;
  byte cVar1;
  
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
      pMVar1 = (MIDIHDR *)_malloc(0x40);
      this->midiHeaders[this->midiHeadersCursor] = pMVar1;
      pmh = this->midiHeaders[this->midiHeadersCursor];
      iVar6 = SkipLongMsgAndGetSize(&param_1->curTrackDataCursor);
      pmVar8 = pmh;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        pmVar8->lpData = (LPSTR)0x0;
        pmVar8 = (LPMIDIHDR)&pmVar8->dwBufferLength;
      }
      pCVar2 = (LPSTR)_malloc(iVar6 + 1);
      pmh->lpData = pCVar2;
      *pmh->lpData = -0x10;
      pmh->dwFlags = 0;
      pmh->dwBufferLength = iVar6 + 1;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < iVar6) {
                    /* WARNING: Load size is inaccurate */
        pmh->lpData[CONCAT13(uStack_9,arg2._1_3_) + 1] = *param_1->curTrackDataCursor;
        param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
        iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar7;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      BVar3 = MidiDevice::SendLongMsg(&this->midiOutDev,pmh);
      if (BVar3 != 0) {
        _free(pmh->lpData);
        _free(pmh);
        this->midiHeaders[this->midiHeadersCursor] = (MIDIHDR *)0x0;
      }
      this->midiHeadersCursor = this->midiHeadersCursor + 1;
      uVar4 = this->midiHeadersCursor & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      this->midiHeadersCursor = uVar4;
    }
    else {
                    /* Meta-Event  */
      if (opcode == 0xff) {
                    /* WARNING: Load size is inaccurate */
        cVar1 = *param_1->curTrackDataCursor;
        param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
        iVar6 = SkipLongMsgAndGetSize(&param_1->curTrackDataCursor);
                    /* End of Track */
        if (cVar1 == 0x2f) {
          param_1->trackPlaying = 0;
          return;
        }
                    /* Set Tempo */
        if (cVar1 == 0x51) {
          uVar9 = __allmul(this->unk128,this->unk12c,this->divisons,this->divisons >> 0x1f);
          uVar9 = __allmul(uVar9,1000,0);
          uVar9 = __aulldiv(uVar9,this->unk120,this->unk120 >> 0x1f);
          uVar4 = this->unk130;
          this->unk130 = uVar4 + (uint)uVar9;
          this->unk134 = this->unk134 + (int)((ulonglong)uVar9 >> 0x20) +
                         (uint)CARRY4(uVar4,(uint)uVar9);
          this->unk128 = 0;
          this->unk12c = 0;
          this->unk120 = 0;
          arg2 = arg2 & 0xff;
          uStack_9 = 0;
          while (CONCAT13(uStack_9,arg2._1_3_) < iVar6) {
                    /* WARNING: Load size is inaccurate */
            this->unk120 = this->unk120 * 0x100 + (uint)*param_1->curTrackDataCursor + this->unk120;
            param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + 1);
            iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
            arg2._1_3_ = (undefined3)iVar7;
            uStack_9 = (undefined)((uint)iVar7 >> 0x18);
          }
        }
        else {
          param_1->curTrackDataCursor = (void *)((int)param_1->curTrackDataCursor + iVar6);
        }
      }
    }
  }
  switch(opcode & 0xf0) {
  case 0x90:
                    /* Note On event */
    if ((arg2 & 0xff) != 0) {
      arg1 = arg1 + this->unk2c4;
      this->channels[opcode & 0xffff0f].keyPressedFlags
      [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
           this->channels[opcode & 0xffff0f].keyPressedFlags
           [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] | (byte)(1 << (arg1 & 7));
      break;
    }
  case 0x80:
                    /* Note Off event */
    arg1 = arg1 + this->unk2c4;
    this->channels[opcode & 0xffff0f].keyPressedFlags
    [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
         this->channels[opcode & 0xffff0f].keyPressedFlags
         [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] & ~(byte)(1 << (arg1 & 7));
    break;
  case 0xb0:
                    /* Control Change */
    switch(arg1) {
    case 0:
                    /* Bank Select */
      this->channels[opcode & 0xffff0f].instrumentBank = (byte)arg2;
      break;
    case 2:
                    /* Breath control  */
      local_2c = this->tracks;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < this->num_tracks) {
        local_2c->startTrackDataMaybe = local_2c->curTrackDataCursor;
        local_2c->unk1c = local_2c->trackLengthMaybe;
        iVar6 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar6;
        local_2c = local_2c + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      this->unk2ec = this->unk120;
      this->unk2f0 = this->unk128;
      this->unk2f4 = this->unk12c;
      this->unk2f8 = this->unk130;
      this->unk2fc = this->unk134;
      break;
    case 4:
                    /* Foot controller */
      local_30 = this->tracks;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < this->num_tracks) {
        local_30->curTrackDataCursor = local_30->startTrackDataMaybe;
        local_30->trackLengthMaybe = local_30->unk1c;
        iVar6 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar6;
        local_30 = local_30 + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      this->unk120 = this->unk2ec;
      this->unk128 = this->unk2f0;
      this->unk12c = this->unk2f4;
      this->unk130 = this->unk2f8;
      this->unk134 = this->unk2fc;
      break;
    case 7:
                    /* Channel Volume */
      this->channels[opcode & 0xffff0f].channelVolume = (byte)arg2;
      lVar5 = __ftol2((float)(arg2 & 0xff) * this->fadeOutVolumeMultiplier);
      bStack_14 = (byte)lVar5;
      if (lVar5 < 0) {
        bStack_14 = 0;
      }
      else if (0x7f < lVar5) {
        bStack_14 = 0x7f;
      }
      this->channels[(CONCAT11(bStack_14,opcode) & 0xffff0f) & 0xff].modifiedVolume = bStack_14;
      arg2 = (uint)bStack_14;
      break;
    case 10:
                    /* Pan */
      this->channels[opcode & 0xffff0f].pan = (byte)arg2;
      break;
    case 0x5b:
                    /* Effects 1 Depth */
      this->channels[opcode & 0xffff0f].effectOneDepth = (byte)arg2;
      break;
    case 0x5d:
                    /* Effects 3 Depth */
      this->channels[opcode & 0xffff0f].effectThreeDepth = (byte)arg2;
    }
    break;
  case 0xc0:
                    /* Program Change */
    this->channels[opcode & 0xffff0f].instrument = arg1;
  }
  if (opcode < 0xf0) {
    MidiDevice::SendShortMsg(&this->midiOutDev,opcode,arg1,(byte)arg2);
  }
  param_1->opcode = opcode;
  iVar6 = SkipLongMsgAndGetSize(&param_1->curTrackDataCursor);
  param_1->trackLengthMaybe = param_1->trackLengthMaybe + iVar6;
  return;
}

