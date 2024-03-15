
undefined4 readMidiFile(int param_1,char *path)

{
  undefined4 uVar1;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::ReadFileData(g_Supervisor.midi_output,param_1,path);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

