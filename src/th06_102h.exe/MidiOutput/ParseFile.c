
/* WARNING: Inlined function: FUN_00421d70 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall th06::MidiOutput::ParseFile(MidiOutput *this,int fileIdx)

{
  DWORD_PTR cookie;
  MidiTrack *pMVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  byte *file_char;
  undefined2 format;
  undefined4 hdrLenBe;
  
  cookie = __security_cookie;
  ClearTracks(this);
  file_char = this->midiFileData[fileIdx];
  if (file_char == (byte *)0x0) {
    utils::DebugPrint2(
                      "error : まだMIDIが読み込まれていないのに再生しようとしている\n"
                      );
  }
  else {
                    /* Read midi header chunk
                       
                       First, read the header len */
    hdrLenBe = *(undefined4 *)(file_char + 4);
    uStack_1d = (undefined)((uint)hdrLenBe >> 0x18);
    uStack_1e = (undefined)((uint)hdrLenBe >> 0x10);
    uStack_1f = (undefined)((uint)hdrLenBe >> 8);
    local_20 = (undefined)hdrLenBe;
    hdrLenLe = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
                    /* Get a pointer to the end of the header chunk */
    endOfHeader = (undefined *)((int)(file_char + 8) + hdrLenLe);
                    /* Read the format. Only three values of format are specified:
                       0: the file contains a single multi-channel track
                       1: the file contains one or more simultaneous tracks (or MIDI outputs) of a
                       sequence
                       2: the file contains one or more sequentially independent single-track
                       patterns */
    format = *(undefined2 *)(file_char + 8);
    uStackY_58 = CONCAT11((char)format,(char)((ushort)format >> 8));
    this->format = (uint)uStackY_58;
                    /* Read the number of tracks in this midi file.  */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(file_char + 0xc),
                          (char)((ushort)*(undefined2 *)(file_char + 0xc) >> 8));
    this->divisons = (uint)uStackY_58;
                    /* Read the divisions in this track. Note that this doesn't appear to support
                       "negative SMPTE format", which happens when the MSB is set. */
    uStackY_58 = CONCAT11((char)*(undefined2 *)(file_char + 10),
                          (char)((ushort)*(undefined2 *)(file_char + 10) >> 8));
    this->num_tracks = (uint)uStackY_58;
                    /* Allocate this->divisions * 32 bytes. */
    pMVar1 = (MidiTrack *)_malloc(this->num_tracks << 5);
    this->tracks = pMVar1;
                    /* memset(this->samples, 0, this->divisions * sizeof(MidiSample)); */
    pMVar1 = this->tracks;
    for (uVar3 = (uint)(this->num_tracks << 5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pMVar1->track_playing = 0;
      pMVar1 = (MidiTrack *)&pMVar1->unk4;
    }
                    /* memset again??? */
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined *)&pMVar1->track_playing = 0;
      pMVar1 = (MidiTrack *)((int)&pMVar1->track_playing + 1);
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
      pvVar2 = _malloc(local_38);
      this->tracks[curDivision].trackData = pvVar2;
      this->tracks[curDivision].track_playing = 1;
      puVar5 = (undefined4 *)(endOfHeader + 8);
      puVar6 = (undefined4 *)this->tracks[curDivision].trackData;
                    /* memcpy(this->samples[curDivision].trackData, endOfHeader + 8,
                       this->samples[curDivision].track_length); */
      for (uVar3 = local_38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = (uint3)local_38 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar6 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      endOfHeader = (undefined *)((int)(endOfHeader + 8) + local_38);
    }
    this->unk120 = 1000000;
  }
  __security_check_cookie(cookie);
  return;
}

