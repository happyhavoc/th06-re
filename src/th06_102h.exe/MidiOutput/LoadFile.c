
ZunResult __thiscall MidiOutput::LoadFile(MidiOutput *this,char *midiPath)

{
  int iVar1;
  ZunResult ZVar2;
  
  iVar1 = ReadFileData(this,0x1f,midiPath);
  if (iVar1 == 0) {
    ParseFile(this,0x1f);
    ReleaseFileData(this,0x1f);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

