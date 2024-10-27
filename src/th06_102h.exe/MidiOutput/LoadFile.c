
ZunResult __thiscall th06::MidiOutput::LoadFile(MidiOutput *this,char *midiPath)

{
  ZunResult ZVar1;
  
  ZVar1 = ReadFileData(this,0x1f,midiPath);
  if (ZVar1 == ZUN_SUCCESS) {
    ParseFile(this,0x1f);
    ReleaseFileData(this,0x1f);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

