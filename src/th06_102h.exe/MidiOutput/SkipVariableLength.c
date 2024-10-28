
int th06::MidiOutput::SkipVariableLength(u8 **curTrackDataCursor)

{
  uint length;
  uint length_alias;
  byte tmp;
  
  length_alias._0_3_ = 0;
  length_alias._3_1_ = 0;
  do {
    tmp = **curTrackDataCursor;
    *curTrackDataCursor = *curTrackDataCursor + 1;
    length = CONCAT13(length_alias._3_1_,(undefined3)length_alias) * 0x80 + (tmp & 0x7f);
    length_alias._0_3_ = (undefined3)length;
    length_alias._3_1_ = (undefined)(length >> 0x18);
  } while ((tmp & 0x80) != 0);
  return length;
}

