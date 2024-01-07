
undefined4 FUN_00424aac(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::ReadFileData(g_Supervisor.midi_output,param_1,param_2);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

