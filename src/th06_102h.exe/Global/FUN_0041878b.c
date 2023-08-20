
void FUN_0041878b(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 < **(int **)(in_ECX + 0x2534)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x2534);
    puVar3 = (undefined4 *)(in_ECX + 0x2534);
    for (iVar2 = 0x1aa; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(int *)(in_ECX + 0x253c) = param_1;
    *(undefined4 *)(in_ECX + 0x2534) = uVar1;
    *(undefined4 *)(in_ECX + 0x2538) = *(undefined4 *)(*(int *)(in_ECX + 0x2534) + 4 + param_1 * 4);
    *(undefined2 *)(in_ECX + 0x2824) = 0xffff;
    *(undefined2 *)(in_ECX + 0x2934) = 0xffff;
    *(undefined4 *)(in_ECX + 0x2bd0) = 0xf;
    *(undefined4 *)(in_ECX + 0x2bb0) = 0xe8f0ff;
    *(undefined4 *)(in_ECX + 0x2bb4) = 0xffe8f0;
    *(undefined4 *)(in_ECX + 0x2bc0) = 0;
    *(undefined4 *)(in_ECX + 0x2bc4) = 0;
    *(undefined *)(in_ECX + 0x2bd8) = 1;
    if ((DAT_0069d6d4 == 6) && ((param_1 == 0 || (param_1 == 10)))) {
      FUN_00431dc0(0xb,"data/eff06.anm",0x2b3);
    }
    else if ((DAT_0069d6d4 == 7) && ((param_1 == 0 || (param_1 == 10)))) {
      FUN_00431dc0(0xb,"data/eff07.anm",0x2b3);
      FUN_00431dc0(0x12,"data/face12c.anm",0x4a8);
    }
  }
  return;
}

