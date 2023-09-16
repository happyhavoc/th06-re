
undefined4 __thiscall GameContext::FUN_00424d38(GameContext *this)

{
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.midiOutput != (MidiOutput *)0x0) {
      MidiOutput::~MidiOutput(g_GameContext.midiOutput);
    }
  }
  else {
    if (g_GameContext.cfg.musicMode != WAV) {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM(&g_SoundPlayer);
  }
  return 0;
}

