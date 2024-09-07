
BOOL __thiscall th06::Supervisor::ReadMidiFile(Supervisor *this,uint param_1,char *path)

{
  BOOL BVar1;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::ReadFileData(g_Supervisor.midi_output,param_1,path);
    }
    BVar1 = 0;
  }
  else {
    BVar1 = 1;
  }
  return BVar1;
}

