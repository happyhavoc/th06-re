
bool __thiscall
FUN_00421be0(HMIDIOUT *param_1_00,undefined param_2,undefined param_3,undefined param_4)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  bool bVar3;
  undefined4 local_8;
  
  uVar1 = local_8;
  if (*param_1_00 == (HMIDIOUT)0x0) {
    bVar3 = false;
  }
  else {
    MVar2 = midiOutShortMsg(*param_1_00,local_8);
    bVar3 = MVar2 != 0;
  }
  return bVar3;
}

