
undefined4 __fastcall FUN_00421d10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    timeKillEvent(*(UINT *)(param_1 + 4));
  }
  timeEndPeriod(*(UINT *)(param_1 + 8));
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}

