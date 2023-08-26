
undefined4 __thiscall AddToDrawChain(int param_1_00,ChainElem *param_2,int param_3)

{
  undefined4 uVar1;
  short *local_8;
  
  DebugPrint2("add draw chain (pri = %d)\n",param_3);
  param_2->priority = (undefined2)param_3;
  for (local_8 = (short *)(param_1_00 + 0x20);
      (*(int *)(local_8 + 10) != 0 && (*local_8 <= param_3)); local_8 = *(short **)(local_8 + 10)) {
  }
  if (param_3 < *local_8) {
    param_2->field6_0x14 = local_8;
    param_2->field5_0x10 = *(undefined4 *)(local_8 + 8);
    if (param_2->field5_0x10 != 0) {
      *(ChainElem **)(param_2->field5_0x10 + 0x14) = param_2;
    }
    *(ChainElem **)(local_8 + 8) = param_2;
  }
  else {
    param_2->field6_0x14 = 0;
    param_2->field5_0x10 = local_8;
    *(ChainElem **)(local_8 + 10) = param_2;
  }
  if (param_2->field3_0x8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2->field3_0x8)(param_2->arg);
  }
  return uVar1;
}

