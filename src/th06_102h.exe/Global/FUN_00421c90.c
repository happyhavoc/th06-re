
undefined4 __thiscall
FUN_00421c90(DWORD_PTR param_1_00,UINT param_2,LPTIMECALLBACK param_3,DWORD_PTR param_4)

{
  MMRESULT MVar1;
  
  MidiOutput::StopTimer((MidiOutput *)param_1_00);
  timeBeginPeriod(*(UINT *)(param_1_00 + 8));
  if (param_3 == (LPTIMECALLBACK)0x0) {
    MVar1 = timeSetEvent(param_2,*(UINT *)(param_1_00 + 8),FUN_00421d50,param_1_00,1);
    *(MMRESULT *)(param_1_00 + 4) = MVar1;
  }
  else {
    MVar1 = timeSetEvent(param_2,*(UINT *)(param_1_00 + 8),param_3,param_4,1);
    *(MMRESULT *)(param_1_00 + 4) = MVar1;
  }
  return *(undefined4 *)(param_1_00 + 4);
}

