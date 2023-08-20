
void FUN_00432260(int param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + param_1 * 0x38);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(in_ECX + 0x34 + param_1 * 0x38) = *(undefined4 *)(in_ECX + 0x1c930);
  *(int *)(in_ECX + 0x1c930) = *(int *)(in_ECX + 0x1c930) + 1;
  *(float *)(in_ECX + 0x1c + param_1 * 0x38) =
       *(float *)(in_ECX + 4 + param_1 * 0x38) / *(float *)(in_ECX + 0x18 + param_1 * 0x38);
  *(float *)(in_ECX + 0x24 + param_1 * 0x38) =
       *(float *)(in_ECX + 0xc + param_1 * 0x38) / *(float *)(in_ECX + 0x18 + param_1 * 0x38);
  *(float *)(in_ECX + 0x20 + param_1 * 0x38) =
       *(float *)(in_ECX + 8 + param_1 * 0x38) / *(float *)(in_ECX + 0x14 + param_1 * 0x38);
  *(float *)(in_ECX + 0x28 + param_1 * 0x38) =
       *(float *)(in_ECX + 0x10 + param_1 * 0x38) / *(float *)(in_ECX + 0x14 + param_1 * 0x38);
  *(float *)(in_ECX + 0x30 + param_1 * 0x38) =
       *(float *)(in_ECX + 0xc + param_1 * 0x38) - *(float *)(in_ECX + 4 + param_1 * 0x38);
  *(float *)(in_ECX + 0x2c + param_1 * 0x38) =
       *(float *)(in_ECX + 0x10 + param_1 * 0x38) - *(float *)(in_ECX + 8 + param_1 * 0x38);
  return;
}

