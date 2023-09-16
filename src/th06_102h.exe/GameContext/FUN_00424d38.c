
undefined4 __thiscall GameContext::FUN_00424d38(GameContext *this)

{
  if (DAT_006c6e47 == '\x02') {
    if (DAT_006c6ec8 != (MidiOutput *)0x0) {
      MidiOutput::~MidiOutput(DAT_006c6ec8);
    }
  }
  else {
    if (DAT_006c6e47 != '\x01') {
      return 0xffffffff;
    }
    SoundPlayer::StopBGM((SoundPlayer *)&DAT_006d3f50);
  }
  return 0;
}

