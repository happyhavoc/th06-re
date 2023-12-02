
undefined4 __thiscall Supervisor::FUN_00424d38(Supervisor *this)

{
  if (g_Supervisor.cfg.musicMode == MIDI) {
    if (g_Supervisor.midi_output != (MidiOutput *)0x0) {
      MidiOutput::StopPlayback(g_Supervisor.midi_output);
    }
  }
  else {
    if (g_Supervisor.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM(&g_SoundPlayer);
  }
  return 0;
}

