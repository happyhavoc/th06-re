
void FUN_00429bb0(int param_1)

{
  float10 fVar1;
  AnmVm *local_c;
  int local_8;
  
  local_c = (AnmVm *)(param_1 + 0xa28);
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (*(short *)((int)local_c[1].matrix.m[0] + 2) == 2) {
      if (local_c->autoRotate != 0) {
        fVar1 = (float10)FUN_0041e850(local_c[1].uvScrollPos.y,0x40490fdb);
        (local_c->rotation).z = (float)((float10)1.570796 - fVar1);
      }
      (local_c->pos).z = 0.4;
      AnmManager::FUN_00433590(g_AnmManager,local_c);
    }
    local_c = (AnmVm *)(local_c[1].matrix.m[0] + 3);
  }
  return;
}

