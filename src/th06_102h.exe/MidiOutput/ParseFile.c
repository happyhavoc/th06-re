
/* WARNING: Inlined function: Ntohs */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ZunResult __thiscall th06::MidiOutput::ParseFile(MidiOutput *this,int fileIdx)

{
  DWORD_PTR cookie;
  ZunResult result;
  MidiTrack *pMVar1;
  void *trackData;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort uStackY_58;
  undefined local_3c;
  undefined uStack_3b;
  undefined uStack_3a;
  undefined uStack_39;
  size_t trackLength;
  int hdrLenLe;
  undefined local_20;
  undefined uStack_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined *endOfHeader;
  int trackIdx;
  byte *file_data;
  undefined2 format;
  undefined4 hdrLenBe;
  
  cookie = __security_cookie;
  ClearTracks(this);
  file_data = this->midiFileData[fileIdx];
  if (file_data == (byte *)0x0) {
    utils::DebugPrint2(
                      "error : まだMIDIが読み込まれていないのに再生しようとしている\n"
                      );
    result = ZUN_ERROR;
  }
  else {
                    /* Read midi header chunk
                       
                       First, read the header len */
    hdrLenBe = *(undefined4 *)(file_data + 4);
    uStack_1d = (undefined)((uint)hdrLenBe >> 0x18);
    uStack_1e = (undefined)((uint)hdrLenBe >> 0x10);
    uStack_1f = (undefined)((uint)hdrLenBe >> 8);
    local_20 = (undefined)hdrLenBe;
    hdrLenLe = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
                    /* Get a pointer to the end of the header chunk */
    endOfHeader = (undefined *)((int)(file_data + 8) + hdrLenLe);
                    /* Read the format. Only three values of format are specified:
                       0: the file contains a single multi-channel track
                       1: the file contains one or more simultaneous tracks (or MIDI outputs) of a
                       sequence
                       2: the file contains one or more sequentially independent single-track
                       patterns */
    format = *(undefined2 *)(file_data + 8);
    uStackY_58 = CONCAT11((char)format,(char)((ushort)format >> 8));
    this->format = (uint)uStackY_58;
                    /* Read the number of tracks in this midi file.  */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(file_data + 0xc),
                          (char)((ushort)*(undefined2 *)(file_data + 0xc) >> 8));
    this->divisons = (uint)uStackY_58;
                    /* Read the divisions in this track. Note that this doesn't appear to support
                       "negative SMPTE format", which happens when the MSB is set. */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(file_data + 10),
                          (char)((ushort)*(undefined2 *)(file_data + 10) >> 8));
    this->num_tracks = (uint)uStackY_58;
                    /* Allocate this->divisions * 32 bytes. */
    pMVar1 = (MidiTrack *)_malloc(this->num_tracks << 5);
    this->tracks = pMVar1;
                    /* memset(this->tracks, 0, this->num_tracks * sizeof(MidiTrack)); */
    pMVar1 = this->tracks;
    for (uVar2 = (uint)(this->num_tracks << 5) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pMVar1->trackPlaying = 0;
      pMVar1 = (MidiTrack *)&pMVar1->trackLengthOther;
    }
                    /* memset again??? */
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined *)&pMVar1->trackPlaying = 0;
      pMVar1 = (MidiTrack *)((int)&pMVar1->trackPlaying + 1);
    }
    for (trackIdx = 0; trackIdx < this->num_tracks; trackIdx = trackIdx + 1) {
                    /* Read a track (MTrk) chunk.
                       
                       First, read the length of the chunk
                        */
      hdrLenBe = *(undefined4 *)(endOfHeader + 4);
      uStack_39 = (undefined)((uint)hdrLenBe >> 0x18);
      uStack_3a = (undefined)((uint)hdrLenBe >> 0x10);
      uStack_3b = (undefined)((uint)hdrLenBe >> 8);
      trackLength._0_3_ = CONCAT12(uStack_3b,CONCAT11(uStack_3a,uStack_39));
      local_3c = (undefined)hdrLenBe;
      trackLength = CONCAT13(local_3c,(uint3)trackLength);
      this->tracks[trackIdx].track_length = trackLength;
      trackData = _malloc(trackLength);
      this->tracks[trackIdx].trackData = trackData;
      this->tracks[trackIdx].trackPlaying = 1;
      puVar4 = (undefined4 *)(endOfHeader + 8);
      puVar5 = (undefined4 *)this->tracks[trackIdx].trackData;
                    /* memcpy(this->tracks[trackIdx].trackData, endOfHeader + 8,
                       this->tracks[curDivision].trackLength); */
      for (uVar2 = trackLength >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = (uint3)trackLength & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)puVar5 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      endOfHeader = (undefined *)((int)(endOfHeader + 8) + trackLength);
    }
    this->unk120 = 1000000;
    result = ZUN_SUCCESS;
  }
  __security_check_cookie(cookie);
  return result;
}

