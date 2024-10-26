
void __thiscall th06::MidiOutput::FadeOutSetVolume(MidiOutput *this,int param_1)

{
  long lVar1;
  int local_18;
  byte local_10;
  int local_c;
  
  if (this->unk2d4 == 0) {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      lVar1 = __ftol2((float)(uint)this->channels[local_c].channelVolume *
                      this->fadeOutVolumeMultiplier);
      local_18 = lVar1 + param_1;
      if (local_18 < 0) {
        local_18 = 0;
      }
      else if (0x7f < local_18) {
        local_18 = 0x7f;
      }
      local_10 = (byte)local_18;
      MidiDevice::SendShortMsg(&this->midiOutDev,(char)local_c + 0xb0,7,local_10);
    }
  }
  return;
}

