
ZunResult __thiscall th06::MidiOutput::ReadFileData(MidiOutput *this,uint idx,char *path)

{
  ZunResult ZVar1;
  byte *pbVar2;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    StopPlayback(this);
    ReleaseFileData(this,idx);
    pbVar2 = FileSystem::OpenPath(path,0);
    this->midiFileData[idx] = pbVar2;
    if (this->midiFileData[idx] == (byte *)0x0) {
      GameErrorContext::Log
                (&g_GameErrorContext,"error : MIDI File が読み込めない %s \n",path);
      ZVar1 = ZUN_ERROR;
    }
    else {
      ZVar1 = ZUN_SUCCESS;
    }
  }
  else {
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

