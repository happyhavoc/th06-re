
/* WARNING: Unable to use type for symbol pmh */

void __thiscall th06::MidiOutput::ProcessMsg(MidiOutput *this,MidiTrack *track)

{
  uint uVar1;
  MIDIHDR *pMVar2;
  LPSTR pCVar3;
  BOOL BVar4;
  int uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  MIDIHDR *pmVar8;
  longlong lVar8;
  ulonglong uVar9;
  MidiTrack *local_30;
  MidiTrack *local_2c;
  byte arg1;
  MidiOpcode opcode;
  byte bStack_14;
  undefined4 arg2;
  undefined uStack_9;
  LPMIDIHDR pmh;
  byte cVar1;
  
  opcode = *track->curTrackDataCursor;
  if (opcode < OPCODE_NOTE_OFF) {
    opcode = track->opcode;
  }
  else {
    track->curTrackDataCursor = track->curTrackDataCursor + 1;
  }
                    /* we AND the opcode to filter out the channel */
  switch(opcode & 0xf0) {
  case OPCODE_NOTE_OFF:
  case OPCODE_NOTE_ON:
  case OPCODE_POLYPHONIC_AFTERTOUCH:
  case OPCODE_MODE_CHANGE:
  case OPCODE_PITCH_BEND_CHANGE:
    arg1 = *track->curTrackDataCursor;
    track->curTrackDataCursor = track->curTrackDataCursor + 1;
    arg2 = (uint)*track->curTrackDataCursor;
    track->curTrackDataCursor = track->curTrackDataCursor + 1;
    break;
  case OPCODE_PROGRAM_CHANGE:
  case OPCODE_CHANNEL_AFTERTOUCH:
    arg1 = *track->curTrackDataCursor;
    track->curTrackDataCursor = track->curTrackDataCursor + 1;
    arg2 = 0;
    break;
  case OPCODE_SYSTEM_EXCLUSIVE:
    if (opcode == OPCODE_SYSTEM_EXCLUSIVE) {
      if (this->midiHeaders[this->midiHeadersCursor] != (MIDIHDR *)0x0) {
        UnprepareHeader(this,this->midiHeaders[this->midiHeadersCursor]);
      }
      pMVar2 = (MIDIHDR *)_malloc(0x40);
      this->midiHeaders[this->midiHeadersCursor] = pMVar2;
      pmh = this->midiHeaders[this->midiHeadersCursor];
      iVar6 = SkipVariableLength(&track->curTrackDataCursor);
                    /* memset(pmh, 0, sizeof(MIDIHDR)) */
      pmVar8 = pmh;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        pmVar8->lpData = (LPSTR)0x0;
        pmVar8 = (MIDIHDR *)&pmVar8->dwBufferLength;
      }
      pCVar3 = (LPSTR)_malloc(iVar6 + 1);
      pmh->lpData = pCVar3;
      *pmh->lpData = -0x10;
      pmh->dwFlags = 0;
      pmh->dwBufferLength = iVar6 + 1;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < iVar6) {
        pmh->lpData[CONCAT13(uStack_9,arg2._1_3_) + 1] = *track->curTrackDataCursor;
        track->curTrackDataCursor = track->curTrackDataCursor + 1;
        iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar7;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      BVar4 = MidiDevice::SendLongMsg(&this->midiOutDev,pmh);
      if (BVar4 != 0) {
        _free(pmh->lpData);
        _free(pmh);
        this->midiHeaders[this->midiHeadersCursor] = (MIDIHDR *)0x0;
      }
      this->midiHeadersCursor = this->midiHeadersCursor + 1;
      uVar4 = this->midiHeadersCursor & 0x8000001f;
      if (uVar4 < 0) {
        uVar4 = (uVar4 - 1U | 0xffffffe0) + 1;
      }
      this->midiHeadersCursor = uVar4;
    }
    else {
                    /* Meta-Event  */
      if (opcode == OPCODE_SYSTEM_RESET) {
        cVar1 = *track->curTrackDataCursor;
        track->curTrackDataCursor = track->curTrackDataCursor + 1;
        iVar6 = SkipVariableLength(&track->curTrackDataCursor);
                    /* End of Track */
        if (cVar1 == 0x2f) {
          track->trackPlaying = 0;
          return;
        }
                    /* Set Tempo */
        if (cVar1 == 0x51) {
          lVar8 = __allmul((longlong)this->volume,(longlong)this->divisons);
          uVar9 = __allmul(lVar8,1000);
          uVar9 = __aulldiv(uVar9,(longlong)this->tempo);
          uVar1 = *(uint *)&this->unk130;
          iVar7 = *(int *)((int)&this->unk130 + 4);
          *(uint *)&this->unk130 = uVar1 + (uint)uVar9;
          *(uint *)((int)&this->unk130 + 4) =
               iVar7 + (int)(uVar9 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar9);
          *(undefined4 *)&this->volume = 0;
          *(undefined4 *)((int)&this->volume + 4) = 0;
          this->tempo = 0;
          arg2 = arg2 & 0xff;
          uStack_9 = 0;
          while (CONCAT13(uStack_9,arg2._1_3_) < iVar6) {
            this->tempo = this->tempo * 0x100 + (uint)*track->curTrackDataCursor + this->tempo;
            track->curTrackDataCursor = track->curTrackDataCursor + 1;
            iVar7 = CONCAT13(uStack_9,arg2._1_3_) + 1;
            arg2._1_3_ = (undefined3)iVar7;
            uStack_9 = (undefined)((uint)iVar7 >> 0x18);
          }
        }
        else {
          track->curTrackDataCursor = track->curTrackDataCursor + iVar6;
        }
      }
    }
  }
  switch(opcode & 0xf0) {
  case OPCODE_NOTE_ON:
    if ((arg2 & 0xff) != 0) {
      arg1 = arg1 + this->unk2c4;
      this->channels[opcode & 0xffff0f].keyPressedFlags
      [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
           this->channels[opcode & 0xffff0f].keyPressedFlags
           [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] | (byte)(1 << (arg1 & 7));
      break;
    }
  case OPCODE_NOTE_OFF:
    arg1 = arg1 + this->unk2c4;
    this->channels[opcode & 0xffff0f].keyPressedFlags
    [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] =
         this->channels[opcode & 0xffff0f].keyPressedFlags
         [(int)(CONCAT12(opcode,CONCAT11(opcode,arg1)) & 0xff) >> 3] & ~(byte)(1 << (arg1 & 7));
    break;
  case OPCODE_MODE_CHANGE:
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
        local_2c->unk1c = local_2c->trackLengthOther;
        iVar6 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar6;
        local_2c = local_2c + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      this->unk2ec = this->tempo;
      this->unk2f0 = *(uint *)&this->volume;
      this->unk2f4 = *(uint *)((int)&this->volume + 4);
      this->unk2f8 = *(uint *)&this->unk130;
      this->unk2fc = *(uint *)((int)&this->unk130 + 4);
      break;
    case 4:
                    /* Foot controller */
      local_30 = this->tracks;
      arg2 = arg2 & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,arg2._1_3_) < this->num_tracks) {
        local_30->curTrackDataCursor = (byte *)local_30->startTrackDataMaybe;
        local_30->trackLengthOther = local_30->unk1c;
        iVar6 = CONCAT13(uStack_9,arg2._1_3_) + 1;
        arg2._1_3_ = (undefined3)iVar6;
        local_30 = local_30 + 1;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      this->tempo = this->unk2ec;
      *(uint *)&this->volume = this->unk2f0;
      *(uint *)((int)&this->volume + 4) = this->unk2f4;
      *(uint *)&this->unk130 = this->unk2f8;
      *(uint *)((int)&this->unk130 + 4) = this->unk2fc;
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
  case OPCODE_PROGRAM_CHANGE:
                    /* Program Change */
    this->channels[opcode & 0xffff0f].instrument = arg1;
  }
  if (opcode < OPCODE_SYSTEM_EXCLUSIVE) {
    MidiDevice::SendShortMsg(&this->midiOutDev,opcode,arg1,(byte)arg2);
  }
  track->opcode = opcode;
  iVar6 = SkipVariableLength(&track->curTrackDataCursor);
  track->trackLengthOther = track->trackLengthOther + iVar6;
  return;
}

