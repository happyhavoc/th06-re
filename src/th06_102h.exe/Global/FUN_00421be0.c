
bool FUN_00421be0(undefined param_1,undefined param_2,undefined param_3)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  HMIDIOUT *in_ECX;
  bool bVar3;
  undefined4 local_8;
  
  uVar1 = local_8;
  if (*in_ECX == (HMIDIOUT)0x0) {
    bVar3 = false;
  }
  else {
    MVar2 = midiOutShortMsg(*in_ECX,local_8);
    bVar3 = MVar2 != 0;
  }
  return bVar3;
}

