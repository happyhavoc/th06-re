
undefined4 FUN_00424ae4(int param_1)

{
  MidiOutput *this;
  undefined4 uVar1;
  
  this = g_GameContext.midiOutput;
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.midiOutput != (MidiOutput *)0x0) {
      MidiOutput::~MidiOutput(g_GameContext.midiOutput);
      MidiOutput::FUN_00422140(this,param_1);
      MidiOutput::FUN_00422490(this);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

