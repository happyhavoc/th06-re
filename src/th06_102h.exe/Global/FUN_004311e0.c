
undefined * FUN_004311e0(int soundIdx)

{
  short sVar1;
  undefined *puVar2;
  undefined *in_ECX;
  undefined *local_8;
  
  sVar1 = *(short *)&SOUND_BUFFER_IDX_VOL[soundIdx].field_0x6;
  local_8 = (undefined *)0x0;
  puVar2 = (undefined *)soundIdx;
  while (((int)local_8 < 3 && (puVar2 = local_8, -1 < *(int *)(in_ECX + (int)local_8 * 4 + 0x620))))
  {
    if (*(int *)(in_ECX + (int)local_8 * 4 + 0x620) == soundIdx) {
      return in_ECX;
    }
    local_8 = local_8 + 1;
    puVar2 = in_ECX;
  }
  if ((int)local_8 < 3) {
    *(int *)(in_ECX + (int)local_8 * 4 + 0x620) = soundIdx;
    *(int *)(in_ECX + soundIdx * 4 + 0x408) = (int)sVar1;
    puVar2 = in_ECX;
  }
  return puVar2;
}

