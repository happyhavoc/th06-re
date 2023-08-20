
int FUN_0042b3a6(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int local_8;
  
  local_8 = 0;
  while ((*(int *)(param_1 + 4) != 0 &&
         ((*(int *)(*(int *)(param_1 + 4) + 8) == 0 ||
          (*(uint *)(param_2 + 0xc) < *(uint *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xc)))))) {
    param_1 = *(int *)(param_1 + 4);
    local_8 = local_8 + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  pvVar3 = _malloc(0xc);
  *(void **)(param_1 + 4) = pvVar3;
  **(int **)(param_1 + 4) = param_1;
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return local_8;
}

