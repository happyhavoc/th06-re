
undefined4 FUN_00422490(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x138) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_004223c0();
    FUN_00421af0(0xffffffff);
    FUN_00421c90(1,0,0);
    uVar1 = 0;
  }
  return uVar1;
}

