
undefined4 __fastcall FUN_00422490(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_004223c0(param_1);
    FUN_00421af0(0xffffffff);
    FUN_00421c90(1,0,0);
    uVar1 = 0;
  }
  return uVar1;
}

