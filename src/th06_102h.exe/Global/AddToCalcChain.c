
undefined4 __thiscall AddToCalcChain(short *param_1_00,ChainElem *param_2,int priority)

{
  undefined4 uVar1;
  short *local_8;
  
  DebugPrint2("add calc chain (pri = %d)\n",priority);
  param_2->priority = (undefined2)priority;
  for (local_8 = param_1_00; (*(int *)(local_8 + 10) != 0 && (*local_8 <= priority));
      local_8 = *(short **)(local_8 + 10)) {
  }
  if (priority < *local_8) {
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
    param_2->field3_0x8 = 0;
  }
  return uVar1;
}

