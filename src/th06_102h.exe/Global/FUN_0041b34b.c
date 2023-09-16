
AnmVm * FUN_0041b34b(void)

{
  AnmVm *in_ECX;
  AnmVm *local_10;
  int local_8;
  
  local_8 = 0x1a;
  local_10 = in_ECX;
  while (local_8 = local_8 + -1, -1 < local_8) {
    FUN_00403720(local_10);
    local_10 = local_10 + 1;
  }
  FUN_00403720((AnmVm *)&in_ECX[0x1a].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x1b].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x1c].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x1d].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x1e].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x1f].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x20].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x21].rotation.y);
  FUN_00403720((AnmVm *)&in_ECX[0x22].rotation.y);
  FUN_0041b4c4((int)&in_ECX[0x23].rotation.y);
  FUN_00424127((AnmTimer *)((int)&in_ECX[0x29].matrix.field0_0x0 + 0x2c));
  FUN_00424127((AnmTimer *)&in_ECX[0x29].autoRotate);
  FUN_00424127((AnmTimer *)&in_ECX[0x29].scaleInterpTime.subFrame);
  return in_ECX;
}

