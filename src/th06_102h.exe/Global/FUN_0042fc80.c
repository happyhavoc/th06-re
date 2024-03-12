
bool FUN_0042fc80(int param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = __ftol2((((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) * 255.0) /
                    (float)*(int *)(param_1 + 0x14));
    *(long *)(param_1 + 0x10) = lVar2;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  bVar1 = *(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    Supervisor::TickTimer(&g_Supervisor,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
  }
  return bVar1;
}

