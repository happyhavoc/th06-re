
/* WARNING: Inlined function: FUN_00421d70 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall MidiOutput::ParseFile(MidiOutput *this,int fileIdx)

{
  byte *pbVar1;
  DWORD_PTR cookie;
  MidiTrack *pMVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ushort uStackY_58;
  undefined local_3c;
  undefined uStack_3b;
  undefined uStack_3a;
  undefined uStack_39;
  size_t local_38;
  int hdrLenLe;
  undefined local_20;
  undefined uStack_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined *endOfHeader;
  int curDivision;
  undefined2 format;
  undefined4 hdrLenBe;
  
  cookie = __security_cookie;
  ClearTracks(this);
  pbVar1 = this->midiFileData[fileIdx];
  if (pbVar1 == (byte *)0x0) {
    DebugPrint2(
               "error : まだMIDIが読み込まれていないのに再生しようとしている\n"
               );
  }
  else {
                    /* Read midi header chunk
                       
                       First, read the header len */
    hdrLenBe = *(undefined4 *)(pbVar1 + 4);
    uStack_1d = (undefined)((uint)hdrLenBe >> 0x18);
    uStack_1e = (undefined)((uint)hdrLenBe >> 0x10);
    uStack_1f = (undefined)((uint)hdrLenBe >> 8);
    local_20 = (undefined)hdrLenBe;
    hdrLenLe = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
                    /* Get a pointer to the end of the header chunk */
    endOfHeader = (undefined *)((int)(pbVar1 + 8) + hdrLenLe);
                    /* Read the format. Only three values of format are specified:
                       0: the file contains a single multi-channel track
                       1: the file contains one or more simultaneous tracks (or MIDI outputs) of a
                       sequence
                       2: the file contains one or more sequentially independent single-track
                       patterns */
    format = *(undefined2 *)(pbVar1 + 8);
    uStackY_58 = CONCAT11((char)format,(char)((ushort)format >> 8));
    this->format = (uint)uStackY_58;
                    /* Read the number of tracks in this midi file.  */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(pbVar1 + 0xc),
                          (char)((ushort)*(undefined2 *)(pbVar1 + 0xc) >> 8));
    this->divisons = (uint)uStackY_58;
                    /* Read the divisions in this track. Note that this doesn't appear to support
                       "negative SMPTE format", which happens when the MSB is set. */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(pbVar1 + 10),
                          (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8));
    this->num_tracks = (uint)uStackY_58;
                    /* Allocate this->divisions * 32 bytes. */
    pMVar2 = (MidiTrack *)_malloc(this->num_tracks << 5);
    this->tracks = pMVar2;
                    /* memset(this->samples, 0, this->divisions * sizeof(MidiSample)); */
    pMVar2 = this->tracks;
    for (uVar4 = (uint)(this->num_tracks << 5) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pMVar2->track_playing = 0;
      pMVar2 = (MidiTrack *)&pMVar2->unk4;
    }
                    /* memset again??? */
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)&pMVar2->track_playing = 0;
      pMVar2 = (MidiTrack *)((int)&pMVar2->track_playing + 1);
    }
    for (curDivision = 0; curDivision < this->num_tracks; curDivision = curDivision + 1) {
                    /* Read a track (MTrk) chunk.
                       
                       First, read the length of the chunk
                        */
      hdrLenBe = *(undefined4 *)(endOfHeader + 4);
      uStack_39 = (undefined)((uint)hdrLenBe >> 0x18);
      uStack_3a = (undefined)((uint)hdrLenBe >> 0x10);
      uStack_3b = (undefined)((uint)hdrLenBe >> 8);
      local_38._0_3_ = CONCAT12(uStack_3b,CONCAT11(uStack_3a,uStack_39));
      local_3c = (undefined)hdrLenBe;
      local_38 = CONCAT13(local_3c,(uint3)local_38);
      this->tracks[curDivision].track_length = local_38;
      pvVar3 = _malloc(local_38);
      this->tracks[curDivision].trackData = pvVar3;
      this->tracks[curDivision].track_playing = 1;
      puVar6 = (undefined4 *)(endOfHeader + 8);
      puVar7 = (undefined4 *)this->tracks[curDivision].trackData;
                    /* memcpy(this->samples[curDivision].trackData, endOfHeader + 8,
                       this->samples[curDivision].track_length); */
      for (uVar4 = local_38 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = (uint3)local_38 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      endOfHeader = (undefined *)((int)(endOfHeader + 8) + local_38);
    }
    this->unk120 = 1000000;
  }
  __security_check_cookie(cookie);
  return;
}

