
undefined4 __thiscall MidiOutput::FUN_00422380(MidiOutput *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = LoadFile(this,0x1f,param_1);
  if (iVar1 == 0) {
    ParseFile(this,0x1f);
    UnloadFile(this,0x1f);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

