
/* WARNING: Removing unreachable block (ram,0x0042a940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042a840(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    pbVar1 = FileSystem::OpenPath((char *)param_1[3],(uint)(DAT_0069d4c4 == '\0'));
    param_1[1] = pbVar1;
    iVar2 = FUN_0042a140(param_1[1],g_LastFileSize);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if (*(int *)(param_1[1] + 0x34 + local_c * 4) != 0) {
        *(int *)(param_1[1] + 0x34 + local_c * 4) =
             *(int *)(param_1[1] + 0x34 + local_c * 4) + param_1[1];
      }
    }
  }
  if (*(int *)(param_1[1] + 0x30 + DAT_0069d6d4 * 4) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1[1] + 0x30 + DAT_0069d6d4 * 4);
    DAT_0069d4bd = (undefined)((int)(uint)*(byte *)(param_1[1] + 6) >> 1);
    DAT_0069d4be = *(byte *)(param_1[1] + 6) & 1;
    DAT_0069bcb0 = (uint)*(byte *)(param_1[1] + 7);
    DAT_0069d4b6 = *(undefined2 *)(iVar2 + 6);
    DAT_0069d8f8 = *(undefined2 *)(iVar2 + 4);
    _DAT_0069d8fc = 0;
    _DAT_0069d710 = (uint)*(byte *)(iVar2 + 0xb);
    DAT_0069d4ba = *(undefined *)(iVar2 + 9);
    DAT_0069d4bb = *(undefined *)(iVar2 + 10);
    USHORT_0069d4b0 = (ushort)*(byte *)(iVar2 + 8);
    param_1[0x12] = iVar2 + 0x10;
    DAT_0069d4b9 = *(undefined *)(iVar2 + 0xc);
    if ((1 < DAT_0069d6d4) && (*(int *)(param_1[1] + 0x2c + DAT_0069d6d4 * 4) != 0)) {
      DAT_0069bca0 = **(undefined4 **)(param_1[1] + 0x2c + DAT_0069d6d4 * 4);
      DAT_0069bca4 = DAT_0069bca0;
    }
    uVar3 = 0;
  }
  return uVar3;
}

