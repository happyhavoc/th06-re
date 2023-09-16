
AnmVm * __fastcall FUN_0041f230(AnmVm *param_1)

{
  AnmVm *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = param_1;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    FUN_00403720(local_24);
    FUN_00424127((AnmTimer *)&local_24[1].scaleInterpFinalX);
    local_24 = (AnmVm *)&local_24[1].currentTimeInScript.subFrame;
  }
  return param_1;
}

