
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_00424ae4(int fileIdx)

{
  MidiOutput *this;
  int iVar1;
  
  this = g_Supervisor.midi_output;
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
      MidiOutput::ParseFile(this,fileIdx);
      MidiOutput::Play(this);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

