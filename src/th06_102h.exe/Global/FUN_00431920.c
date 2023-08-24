
undefined4 FUN_00431920(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  FUN_004321e0(param_1);
  pbVar1 = OpenPath(param_2,0);
  *(byte **)(in_ECX + 0x1c530 + param_1 * 4) = pbVar1;
  if (*(int *)(in_ECX + 0x1c530 + param_1 * 4) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 2 & 1) != 0) {
      if ((*(int *)(&DAT_0046c220 + param_3 * 4) == 0x15) ||
         (*(int *)(&DAT_0046c220 + param_3 * 4) == 0)) {
        param_3 = 5;
      }
      else if (*(int *)(&DAT_0046c220 + param_3 * 4) == 0x14) {
        param_3 = 3;
      }
    }
    iVar3 = FUN_004401c6(g_GameContext.d3d_device,*(undefined4 *)(in_ECX + 0x1c530 + param_1 * 4),
                         g_FileSize,0,0,0,0,*(undefined4 *)(&DAT_0046c220 + param_3 * 4),1,3,
                         0xffffffff,param_4,0,0,in_ECX + 0x1c110 + param_1 * 4);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

