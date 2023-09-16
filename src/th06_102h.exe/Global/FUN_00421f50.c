
void FUN_00421f50(void)

{
  MidiOutput *in_ECX;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_004691f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX->vtbl = (MidiOutputVtbl *)&PTR_FUN_0046b568;
  local_8 = 1;
  MidiOutput::~MidiOutput(in_ECX);
  MidiOutput::FUN_004220b0(in_ECX);
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    MidiOutput::UnloadFile(in_ECX,local_14);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_00421ad0();
  local_8 = 0xffffffff;
  FUN_00421c60();
  ExceptionList = local_10;
  return;
}

