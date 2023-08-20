
undefined4 FUN_00410a70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  uVar4 = 0x1e0;
  uVar3 = 0x280;
  uVar1 = __ftol2(0x280,0x1e0);
  uVar2 = __ftol2(uVar1);
  FUN_004354c0(0,0,0,uVar2,uVar1,uVar3,uVar4);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 200 + local_8 * 0x110) != 0) {
      FUN_00432ad0(param_1 + 0x14 + local_8 * 0x110);
    }
  }
  FUN_0040f550();
  return 1;
}

