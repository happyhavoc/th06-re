
void FUN_00421c60(void)

{
  MidiOutput *in_ECX;
  
  in_ECX->vtbl = (MidiOutputVtbl *)&PTR__AnmManager_0046b564;
  MidiOutput::StopTimer(in_ECX);
  timeEndPeriod((in_ECX->timeCaps).wPeriodMin);
  return;
}

