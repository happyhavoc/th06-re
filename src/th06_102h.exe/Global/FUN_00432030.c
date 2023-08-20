
void FUN_00432030(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_18;
  int local_14;
  
  if (*(int *)(in_ECX + 0x20934 + param_1 * 4) != 0) {
    iVar1 = *(int *)(in_ECX + 0x20b34 + param_1 * 4);
    local_18 = (int *)(*(int *)(in_ECX + 0x20934 + param_1 * 4) + 0x40);
    for (local_14 = 0; local_14 < **(int **)(in_ECX + 0x20934 + param_1 * 4);
        local_14 = local_14 + 1) {
      piVar2 = (int *)(*(int *)(in_ECX + 0x20934 + param_1 * 4) + *local_18);
      puVar4 = (undefined4 *)(in_ECX + (*piVar2 + iVar1) * 0x38);
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(in_ECX + (*piVar2 + iVar1) * 0x38) = 0xffffffff;
      local_18 = local_18 + 1;
    }
    for (local_14 = 0; local_14 < *(int *)(*(int *)(in_ECX + 0x20934 + param_1 * 4) + 4);
        local_14 = local_14 + 1) {
      *(undefined4 *)(in_ECX + 0x1c934 + (*local_18 + iVar1) * 4) = 0;
      *(undefined4 *)(in_ECX + 0x1e934 + (*local_18 + iVar1) * 4) = 0;
      local_18 = local_18 + 2;
    }
    *(undefined4 *)(in_ECX + 0x20b34 + param_1 * 4) = 0;
    FUN_004321e0(*(undefined4 *)(*(int *)(in_ECX + 0x20934 + param_1 * 4) + 8));
    _free(*(void **)(in_ECX + 0x20934 + param_1 * 4));
    *(undefined4 *)(in_ECX + 0x20934 + param_1 * 4) = 0;
    *(undefined *)(in_ECX + 0x210bc) = 0xff;
    *(undefined *)(in_ECX + 0x210bd) = 0xff;
    *(undefined *)(in_ECX + 0x210be) = 0xff;
    *(undefined4 *)(in_ECX + 0x210b8) = 0;
  }
  return;
}

