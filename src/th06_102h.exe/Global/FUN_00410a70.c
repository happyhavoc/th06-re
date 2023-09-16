
undefined4 FUN_00410a70(int param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  uVar4 = 0x1e0;
  uVar3 = 0x280;
  lVar1 = __ftol2((double)*(float *)(param_1 + 0xc));
  lVar2 = __ftol2((double)*(float *)(param_1 + 8));
  FUN_004354c0(0,0,0,lVar2,lVar1,uVar3,uVar4);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 200 + local_8 * 0x110) != 0) {
      FUN_00432ad0(g_AnmManager,param_1 + 0x14 + local_8 * 0x110);
    }
  }
  FUN_0040f550();
  return 1;
}

