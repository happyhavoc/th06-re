
undefined4 __thiscall MidiOutput::FUN_00422490(MidiOutput *this)

{
  undefined4 uVar1;
  
  if (this->unk == (MidiSample *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_004223c0(this);
    FUN_00421af0(&this->midiOutDev,(HMIDIOUT)0xffffffff);
    FUN_00421c90((DWORD_PTR)this,1,(LPTIMECALLBACK)0x0,0);
    uVar1 = 0;
  }
  return uVar1;
}

