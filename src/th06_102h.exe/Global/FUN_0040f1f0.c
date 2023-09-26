
undefined4 FUN_0040f1f0(int param_1)

{
  int local_c;
  AnmVm *local_8;
  
  local_8 = (AnmVm *)(param_1 + 8);
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)(local_8[1].matrix.m[2] + 3) != '\0') {
      (local_8->pos).x = local_8[1].rotation.x;
      (local_8->pos).y = local_8[1].rotation.y;
      (local_8->pos).z = local_8[1].rotation.z;
      AnmManager::FUN_00433150(g_AnmManager,local_8);
    }
    local_8 = (AnmVm *)(local_8[1].matrix.m + 3);
  }
  return 1;
}

