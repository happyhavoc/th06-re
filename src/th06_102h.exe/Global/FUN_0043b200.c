
undefined4 FUN_0043b200(uint param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar1 = 0;
  }
  else if (param_1 < *(uint *)(in_ECX + 0x10)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

