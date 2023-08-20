
bool FUN_0042f800(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = __ftol2((float)*(int *)(param_1 + 0x14),(float)*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  bVar1 = *(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    FUN_00424285(param_1 + 0x2c,param_1 + 0x28);
  }
  return bVar1;
}

