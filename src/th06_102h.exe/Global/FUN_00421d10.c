
undefined4 FUN_00421d10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    timeKillEvent(*(UINT *)(in_ECX + 4));
  }
  timeEndPeriod(*(UINT *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 4) = 0;
  return 1;
}

