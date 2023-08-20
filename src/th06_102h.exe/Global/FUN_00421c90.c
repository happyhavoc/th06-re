
undefined4 FUN_00421c90(UINT param_1,LPTIMECALLBACK param_2,DWORD_PTR param_3)

{
  MMRESULT MVar1;
  DWORD_PTR in_ECX;
  
  FUN_00421d10();
  timeBeginPeriod(*(UINT *)(in_ECX + 8));
  if (param_2 == (LPTIMECALLBACK)0x0) {
    MVar1 = timeSetEvent(param_1,*(UINT *)(in_ECX + 8),FUN_00421d50,in_ECX,1);
    *(MMRESULT *)(in_ECX + 4) = MVar1;
  }
  else {
    MVar1 = timeSetEvent(param_1,*(UINT *)(in_ECX + 8),param_2,param_3,1);
    *(MMRESULT *)(in_ECX + 4) = MVar1;
  }
  return *(undefined4 *)(in_ECX + 4);
}

