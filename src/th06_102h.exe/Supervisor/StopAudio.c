
ZunResult __thiscall Supervisor::StopAudio(Supervisor *this)

{
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
    }
  }
  else {
    if (g_Supervisor.cfg.musicMode != WAV) {
      return ZUN_ERROR;
    }
    SoundPlayer::StopBGM(&g_SoundPlayer);
  }
  return ZUN_SUCCESS;
}

