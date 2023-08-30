
undefined4 __thiscall FUN_0043b200(int param_1_00,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1_00 + 4) == 0) {
    uVar1 = 0;
  }
  else if (param_2 < *(uint *)(param_1_00 + 0x10)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1_00 + 4) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

