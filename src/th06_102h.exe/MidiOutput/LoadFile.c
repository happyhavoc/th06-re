
ZunResult __thiscall th06::MidiOutput::LoadFile(MidiOutput *this,char *midiPath)

{
  ZunResult res;
  
  res = ReadFileData(this,0x1f,midiPath);
  if (res == ZUN_SUCCESS) {
    ParseFile(this,0x1f);
    ReleaseFileData(this,0x1f);
    res = ZUN_SUCCESS;
  }
  else {
    res = ZUN_ERROR;
  }
  return res;
}

