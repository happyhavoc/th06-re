
undefined4 __thiscall AddToDrawChain(ChainElem *param_1_00,ChainElem *param_2,int param_3)

{
  undefined4 uVar1;
  ChainElem *local_8;
  
  DebugPrint2("add draw chain (pri = %d)\n",param_3);
  param_2->priority = (undefined2)param_3;
  for (local_8 = param_1_00 + 1;
      (local_8->next != (ChainElem *)0x0 && ((short)local_8->priority <= param_3));
      local_8 = local_8->next) {
  }
  if (param_3 < (short)local_8->priority) {
    param_2->next = local_8;
    param_2->prev = local_8->prev;
    if (param_2->prev != (ChainElem *)0x0) {
      param_2->prev->next = param_2;
    }
    local_8->prev = param_2;
  }
  else {
    param_2->next = (ChainElem *)0x0;
    param_2->prev = local_8;
    local_8->next = param_2;
  }
  if (param_2->added_callback == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2->added_callback)(param_2->arg);
  }
  return uVar1;
}

