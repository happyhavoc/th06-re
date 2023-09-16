
undefined4 FUN_00424aac(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (DAT_006c6e47 == '\x02') {
    if (DAT_006c6ec8 != (MidiOutput *)0x0) {
      MidiOutput::LoadFile(DAT_006c6ec8,param_1,param_2);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

