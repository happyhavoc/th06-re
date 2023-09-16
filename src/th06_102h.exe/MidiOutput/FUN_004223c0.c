
void __thiscall MidiOutput::FUN_004223c0(MidiOutput *this)

{
  undefined4 uVar1;
  MidiSample *local_c;
  int local_8;
  
  local_c = this->unk;
  this->field551_0x2c8 = 1.0;
  *(undefined4 *)&this->field_0x2dc = 0;
  *(undefined4 *)&this->field_0x2e0 = 0;
  *(undefined4 *)&this->field_0x128 = 0;
  *(undefined4 *)&this->field_0x12c = 0;
  *(undefined4 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x134 = 0;
  for (local_8 = 0; local_8 < this->field130_0x114; local_8 = local_8 + 1) {
    *(undefined4 *)&local_c->field_0x14 = *(undefined4 *)&local_c->field_0x10;
    *(undefined4 *)&local_c->field_0x18 = *(undefined4 *)&local_c->field_0x14;
    *(undefined4 *)local_c = 1;
    uVar1 = FUN_00421d90(&local_c->field_0x14);
    *(undefined4 *)&local_c->field_0x4 = uVar1;
    local_c = local_c + 1;
  }
  return;
}

