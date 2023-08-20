
void FUN_004311e0(int param_1)

{
  short sVar1;
  int in_ECX;
  int local_8;
  
  sVar1 = *(short *)(&DAT_0047852e + param_1 * 8);
  for (local_8 = 0; (local_8 < 3 && (-1 < *(int *)(in_ECX + 0x620 + local_8 * 4)));
      local_8 = local_8 + 1) {
    if (*(int *)(in_ECX + 0x620 + local_8 * 4) == param_1) {
      return;
    }
  }
  if (local_8 < 3) {
    *(int *)(in_ECX + 0x620 + local_8 * 4) = param_1;
    *(int *)(in_ECX + 0x408 + param_1 * 4) = (int)sVar1;
  }
  return;
}

