
AnmVm * __fastcall FUN_00413450(AnmVm *param_1)

{
  AnmVm *local_60;
  int local_58;
  AnmVm *local_30;
  int local_28;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = param_1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00413560(local_20);
    local_20 = (AnmVm *)&local_20[5].angleVel.y;
  }
  local_28 = 0x280;
  local_30 = (AnmVm *)&param_1[0x50].alphaInterpTime;
  while (local_28 = local_28 + -1, -1 < local_28) {
    FUN_00413560(local_30);
    FUN_00424127((AnmTimer *)((int)&local_30[5].matrix.field0_0x0 + 0x10));
    local_30 = (AnmVm *)((int)&local_30[5].matrix.field0_0x0 + 0x38);
  }
  local_58 = 0x40;
  local_60 = (AnmVm *)&param_1[0xde1].posInterpTime;
  while (local_58 = local_58 + -1, -1 < local_58) {
    FUN_00403720(local_60);
    FUN_00403720(local_60 + 1);
    FUN_00424127((AnmTimer *)&local_60[2].matrix);
    local_60 = (AnmVm *)((int)&local_60[2].matrix.field0_0x0 + 0x14);
  }
  FUN_00424127((AnmTimer *)&param_1[0xe74].alphaInterpFinal);
  FUN_00413430((undefined4 *)param_1);
  return param_1;
}

