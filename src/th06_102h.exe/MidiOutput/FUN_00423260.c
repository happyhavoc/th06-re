
void __thiscall MidiOutput::FUN_00423260(MidiOutput *this,int param_1)

{
  long lVar1;
  int local_18;
  undefined local_10;
  int local_c;
  
  if (this->unk2d4 == 0) {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      lVar1 = __ftol2((double)((float)(uint)(byte)this->unk144[local_c * 0x17 + 0x25] * this->unk2c8
                              ));
      local_18 = lVar1 + param_1;
      if (local_18 < 0) {
        local_18 = 0;
      }
      else if (0x7f < local_18) {
        local_18 = 0x7f;
      }
      local_10 = (undefined)local_18;
      MidiDevice::SendShortMsg(&this->midiOutDev,(char)local_c + -0x50,7,local_10);
    }
  }
  return;
}

