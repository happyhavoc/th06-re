
AnmVm * __fastcall FUN_00401000(AnmVm *param_1)

{
  float *local_88;
  int local_80;
  int local_28;
  
  FUN_00403720(param_1);
  FUN_00403720(param_1 + 1);
  local_28 = 0x100;
  do {
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  FUN_004010e0((int)&param_1[0x5c].alphaInterpEndTime);
  FUN_004010e0((int)&param_1[99].posInterpEndTime);
  local_80 = 0x203;
  local_88 = &param_1[0x6a].pos.y;
  while (local_80 = local_80 + -1, -1 < local_80) {
    FUN_00424127((AnmTimer *)(local_88 + 6));
    local_88 = local_88 + 10;
  }
  return param_1;
}

