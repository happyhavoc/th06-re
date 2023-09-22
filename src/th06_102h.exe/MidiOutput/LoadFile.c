
undefined4 __thiscall MidiOutput::LoadFile(MidiOutput *this,int param_1,char *path)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if (g_GameContext.cfg.musicMode == MIDI) {
    ~MidiOutput(this);
    UnloadFile(this,param_1);
    pbVar2 = FileSystem::OpenPath(path,0);
    this->midiFileData[param_1] = (int)pbVar2;
    if (this->midiFileData[param_1] == 0) {
      GameErrorContextLog(&g_GameErrorContext,"error : MIDI File が読み込めない %s \n",path);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

