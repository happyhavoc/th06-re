
uint __thiscall FUN_0043c920(int param_1_00,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = 0;
  if (*(uint *)(param_1_00 + 8) != 0) {
    pbVar5 = (byte *)(*(int *)(param_1_00 + 0x10) + 0x14);
    pbVar2 = param_2;
    pbVar6 = pbVar5;
LAB_0043c939:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0043c95d;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_0043c939;
        }
        iVar3 = 0;
      }
      else {
LAB_0043c95d:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar6 + 0x114;
      pbVar2 = param_2;
      pbVar6 = pbVar5;
    } while (uVar4 < *(uint *)(param_1_00 + 8));
  }
  return 0xffffffff;
}

