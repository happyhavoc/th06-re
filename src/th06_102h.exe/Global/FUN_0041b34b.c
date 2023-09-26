
AnmVm * FUN_0041b34b(void)

{
  AnmVm *in_ECX;
  AnmVm *local_10;
  int local_8;
  
  local_8 = 0x1a;
  local_10 = in_ECX;
  while (local_8 = local_8 + -1, -1 < local_8) {
    AnmVm::AnmVm(local_10);
    local_10 = local_10 + 1;
  }
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1a].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1b].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1c].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1d].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1e].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x1f].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x20].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x21].rotation.y);
  AnmVm::AnmVm((AnmVm *)&in_ECX[0x22].rotation.y);
  FUN_0041b4c4((int)&in_ECX[0x23].rotation.y);
  AnmTimer::AnmTimer((AnmTimer *)(in_ECX[0x29].matrix.m[2] + 3));
  AnmTimer::AnmTimer((AnmTimer *)&in_ECX[0x29].autoRotate);
  AnmTimer::AnmTimer((AnmTimer *)&in_ECX[0x29].scaleInterpTime.subFrame);
  return in_ECX;
}

