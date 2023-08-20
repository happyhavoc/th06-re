
undefined4 FUN_0042b502(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      _memset((void *)(param_2 + local_c * 0x18),0,0x18);
      *(undefined4 *)(param_2 + local_c * 0x18) = 0x44524c43;
      *(undefined2 *)(param_2 + 6 + local_c * 0x18) = 0x18;
      *(undefined2 *)(param_2 + 4 + local_c * 0x18) = 0x18;
      *(undefined *)(param_2 + 8 + local_c * 0x18) = 0x10;
      *(undefined *)(param_2 + 0x16 + local_c * 0x18) = (undefined)local_c;
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        *(undefined *)(param_2 + local_c * 0x18 + 0xc + local_14) = 1;
        *(undefined *)(param_2 + local_c * 0x18 + 0x11 + local_14) = 1;
      }
    }
    local_8 = (int *)(param_1 + *(int *)(param_1 + 8));
    for (local_10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8); 0 < local_10;
        local_10 = local_10 - (uint)*(ushort *)piVar3) {
      if ((*local_8 == 0x44524c43) && (*(char *)(local_8 + 2) == '\x10')) {
        if (3 < *(byte *)((int)local_8 + 0x16)) break;
        piVar3 = local_8;
        piVar4 = (int *)(param_2 + (uint)*(byte *)((int)local_8 + 0x16) * 0x18);
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
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

