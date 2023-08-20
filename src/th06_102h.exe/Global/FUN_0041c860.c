
undefined4 FUN_0041c860(undefined2 *param_1,int param_2)

{
  undefined4 uVar1;
  short *in_ECX;
  short *local_8;
  
  DebugPrint2("add calc chain (pri = %d)\n",param_2);
  *param_1 = (undefined2)param_2;
  for (local_8 = in_ECX; (*(int *)(local_8 + 10) != 0 && (*local_8 <= param_2));
      local_8 = *(short **)(local_8 + 10)) {
  }
  if (param_2 < *local_8) {
    *(short **)(param_1 + 10) = local_8;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(local_8 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined2 **)(*(int *)(param_1 + 8) + 0x14) = param_1;
    }
    *(undefined2 **)(local_8 + 8) = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 10) = 0;
    *(short **)(param_1 + 8) = local_8;
    *(undefined2 **)(local_8 + 10) = param_1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xe));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return uVar1;
}

