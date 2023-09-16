
undefined4 FUN_00424ae4(int param_1)

{
  MidiOutput *this;
  undefined4 uVar1;
  
  this = DAT_006c6ec8;
  if (DAT_006c6e47 == '\x02') {
    if (DAT_006c6ec8 != (MidiOutput *)0x0) {
      MidiOutput::~MidiOutput(DAT_006c6ec8);
      MidiOutput::FUN_00422140(this,param_1);
      MidiOutput::FUN_00422490(this);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

