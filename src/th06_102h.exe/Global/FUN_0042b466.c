
undefined4 FUN_0042b466(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_c;
  int *local_8;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_8 = (int *)(param_1 + *(int *)(param_1 + 8));
    for (local_c = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8); 0 < local_c;
        local_c = local_c - (uint)*(ushort *)piVar3) {
      if ((*local_8 == 0x4b544143) && (*(char *)(local_8 + 2) == '\x10')) {
        if (0x3f < *(ushort *)(local_8 + 4)) break;
        piVar3 = local_8;
        piVar4 = (int *)(param_2 + (uint)*(ushort *)(local_8 + 4) * 0x40);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      piVar3 = local_8 + 1;
      local_8 = (int *)((int)local_8 + (uint)*(ushort *)(local_8 + 1));
    }
    uVar1 = 0;
  }
  return uVar1;
}

