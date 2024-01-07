
undefined4 __thiscall MidiOutput::LoadFile(MidiOutput *this,char *midiPath)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ReadFileData(this,0x1f,midiPath);
  if (iVar1 == 0) {
    ParseFile(this,0x1f);
    ReleaseFileData(this,0x1f);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

