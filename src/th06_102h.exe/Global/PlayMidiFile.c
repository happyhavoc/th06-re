
int PlayMidiFile(int fileIdx)

{
  int result;
  MidiOutput *this;
  
  this = g_Supervisor.midi_output;
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
      MidiOutput::ParseFile(this,fileIdx);
      MidiOutput::Play(this);
    }
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}

