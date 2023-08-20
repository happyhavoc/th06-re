
void FUN_0041cde0(short *param_1)

{
  code *pcVar1;
  bool bVar2;
  short *in_ECX;
  short *local_c;
  
  bVar2 = false;
  local_c = in_ECX;
  if (param_1 != (short *)0x0) {
    for (; local_c != (short *)0x0; local_c = *(short **)(local_c + 10)) {
      if (local_c == param_1) goto LAB_0041ce4c;
    }
    bVar2 = true;
    for (local_c = in_ECX + 0x10; local_c != (short *)0x0; local_c = *(short **)(local_c + 10)) {
      if (local_c == param_1) {
LAB_0041ce4c:
        if (bVar2) {
          DebugPrint2("draw cut Chain (Pri = %d)\n",(int)*param_1);
        }
        else {
          DebugPrint2("calc cut Chain (Pri = %d)\n",(int)*param_1);
        }
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = *(undefined4 *)(param_1 + 10);
        if (*(int *)(param_1 + 10) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 10) + 0x10) = *(undefined4 *)(param_1 + 8);
        }
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 10) = 0;
        if ((param_1[1] & 1U) != 0) {
          if (param_1 == (short *)0x0) {
            return;
          }
          FUN_0041c790();
          _free(param_1);
          return;
        }
        if (*(int *)(param_1 + 6) == 0) {
          return;
        }
        pcVar1 = *(code **)(param_1 + 6);
        *(undefined4 *)(param_1 + 6) = 0;
        (*pcVar1)(*(undefined4 *)(param_1 + 0xe));
        return;
      }
    }
  }
  return;
}

