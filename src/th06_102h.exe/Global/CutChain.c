
void __thiscall CutChain(short *param_1_00,short *param_2)

{
  code *pcVar1;
  bool bVar2;
  short *local_c;
  
  bVar2 = false;
  local_c = param_1_00;
  if (param_2 != (short *)0x0) {
    for (; local_c != (short *)0x0; local_c = *(short **)(local_c + 10)) {
      if (local_c == param_2) goto LAB_0041ce4c;
    }
    bVar2 = true;
    for (local_c = param_1_00 + 0x10; local_c != (short *)0x0; local_c = *(short **)(local_c + 10))
    {
      if (local_c == param_2) {
LAB_0041ce4c:
        if (bVar2) {
          DebugPrint2("draw cut Chain (Pri = %d)\n",(int)*param_2);
        }
        else {
          DebugPrint2("calc cut Chain (Pri = %d)\n",(int)*param_2);
        }
        if (*(int *)(param_2 + 8) == 0) {
          return;
        }
        *(undefined4 *)(param_2 + 2) = 0;
        *(undefined4 *)(*(int *)(param_2 + 8) + 0x14) = *(undefined4 *)(param_2 + 10);
        if (*(int *)(param_2 + 10) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 10) + 0x10) = *(undefined4 *)(param_2 + 8);
        }
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 10) = 0;
        if ((param_2[1] & 1U) != 0) {
          if (param_2 == (short *)0x0) {
            return;
          }
          FUN_0041c790((int)param_2);
          _free(param_2);
          return;
        }
        if (*(int *)(param_2 + 6) == 0) {
          return;
        }
        pcVar1 = *(code **)(param_2 + 6);
        *(undefined4 *)(param_2 + 6) = 0;
        (*pcVar1)(*(undefined4 *)(param_2 + 0xe));
        return;
      }
    }
  }
  return;
}

