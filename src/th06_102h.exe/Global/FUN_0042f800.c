
bool FUN_0042f800(int param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = __ftol2((double)(255.0 - (((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28))
                                     * 255.0) / (float)*(int *)(param_1 + 0x14)));
    *(long *)(param_1 + 0x10) = lVar2;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  bVar1 = *(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    GameContext::FUN_00424285
              ((GameContext *)&DAT_006c6d18,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
  }
  return bVar1;
}

