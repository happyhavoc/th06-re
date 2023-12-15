
undefined4 __thiscall Supervisor::FUN_00424d82(Supervisor *this,float param_1)

{
  long lVar1;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      lVar1 = __ftol2((double)(param_1 * 1000.0));
      MidiOutput::FUN_00422630(g_Supervisor.midi_output,lVar1);
    }
  }
  else {
    if (g_Supervisor.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    if (NAN(this->effectiveFramerateMultiplier) == (this->effectiveFramerateMultiplier == 0.0)) {
      if (this->effectiveFramerateMultiplier <= 1.0) {
        SoundPlayer::FUN_00424e41(&g_SoundPlayer,param_1 / this->effectiveFramerateMultiplier);
      }
      else {
        SoundPlayer::FUN_00424e41(&g_SoundPlayer,param_1);
      }
    }
    else {
      SoundPlayer::FUN_00424e41(&g_SoundPlayer,param_1);
    }
  }
  return 0;
}

