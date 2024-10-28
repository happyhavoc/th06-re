
ZunResult __thiscall th06::Supervisor::FadeOutMusic(Supervisor *this,float fadeOutSeconds)

{
  uint ms;
  
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      ms = __ftol2(fadeOutSeconds * 1000.0);
      MidiOutput::SetFadeOut(g_Supervisor.midi_output,ms);
    }
  }
  else {
    if (g_Supervisor.cfg.musicMode != WAV) {
      return ZUN_ERROR;
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
  return ZUN_SUCCESS;
}

