
undefined4 __thiscall MidiOutput::LoadFile(MidiOutput *this,int param_1,char *path)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if (DAT_006c6e47 == '\x02') {
    ~MidiOutput(this);
    UnloadFile(this,param_1);
    pbVar2 = OpenPath(path,0);
    this->midiFileData[param_1] = (int)pbVar2;
    if (this->midiFileData[param_1] == 0) {
      GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                          "error : MIDI File が読み込めない %s \n",path);
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

