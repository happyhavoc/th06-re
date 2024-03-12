
undefined4 __thiscall Supervisor::fadeOutMusic(Supervisor *this,float fadeOutSeconds)

{
  long lVar1;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      lVar1 = __ftol2(fadeOutSeconds * 1000.0);
      MidiOutput::FUN_00422630(g_Supervisor.midi_output,lVar1);
    }
  }
  else {
    if (g_Supervisor.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    if (NAN(this->effectiveFramerateMultiplier) == (this->effectiveFramerateMultiplier == 0.0)) {
      if (this->effectiveFramerateMultiplier <= 1.0) {
        SoundPlayer::FadeOut(&g_SoundPlayer,fadeOutSeconds / this->effectiveFramerateMultiplier);
      }
      else {
        SoundPlayer::FadeOut(&g_SoundPlayer,fadeOutSeconds);
      }
    }
    else {
      SoundPlayer::FadeOut(&g_SoundPlayer,fadeOutSeconds);
    }
  }
  return 0;
}

