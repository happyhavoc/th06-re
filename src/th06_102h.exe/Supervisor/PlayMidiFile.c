
int __thiscall th06::Supervisor::PlayMidiFile(Supervisor *this,int fileIdx)

{
  int result;
  MidiOutput *this_00;
  
  this_00 = g_Supervisor.midi_output;
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
      MidiOutput::ParseFile(this_00,fileIdx);
      MidiOutput::Play(this_00);
    }
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}

