
ChainCallbackResult BulletManager::OnDraw(BulletManager *arg)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  Bullet *local_20;
  Bullet *local_1c;
  AnmVm *local_10;
  int local_8;
  
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
  local_10 = &arg->lasers[0].vm0;
  for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
    if (local_10[2].currentTimeInScript.current != 0) {
      fVar3 = (float10)local_10[2].angleVel.x;
      fVar2 = (float10)fcos(fVar3);
      fVar3 = (float10)fsin(fVar3);
      fVar1 = (local_10[2].angleVel.z - local_10[2].angleVel.y) / 2.0 + local_10[2].angleVel.y;
      (local_10->pos).x = (float)fVar2 * fVar1 + local_10[2].rotation.x;
      (local_10->pos).y = (float)fVar3 * fVar1 + local_10[2].rotation.y;
      (local_10->pos).z = 0.0;
      *(undefined2 *)((int)local_10[2].matrix.m[0] + 0xe) = 0xffff;
      AnmManager::FUN_00433150(g_AnmManager,local_10);
      fVar1 = local_10[2].angleVel.y;
      if ((fVar1 < 16.0 != NAN(fVar1)) ||
         (NAN(local_10[2].scaleInterpFinalY) != (local_10[2].scaleInterpFinalY == 0.0))) {
        local_10[1].pos.x = (float)fVar2 * local_10[2].angleVel.y + local_10[2].rotation.x;
        local_10[1].pos.y = (float)fVar3 * local_10[2].angleVel.y + local_10[2].rotation.y;
        local_10[1].pos.z = 0.0;
        local_10[1].color = local_10->color;
        *(uint *)&local_10[1].flags = *(uint *)&local_10[1].flags | 8;
        local_10[1].color.color = local_10[1].color.color & 0xffffff | 0xff000000;
        local_10[1].scaleX = ((16.0 - local_10[2].angleVel.y) / 16.0) * (local_10[2].scaleX / 10.0);
        local_10[1].scaleY = local_10[1].scaleX;
        if (local_10[1].scaleY < 0.0 != NAN(local_10[1].scaleY)) {
          local_10[1].scaleX = local_10[2].scaleX / 10.0;
          local_10[1].scaleY = local_10[1].scaleX;
        }
        AnmManager::FUN_00433150(g_AnmManager,local_10 + 1);
      }
    }
    local_10 = (AnmVm *)(local_10[2].matrix.m[1] + 1);
  }
  FUN_00420190();
  if (g_Supervisor.hasD3dHardwareVertexProcessing == 0) {
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_20->state != 0) && (0x10 < (local_20->vms).field12_0x55d)) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((local_20->state != 0) && ((local_20->vms).field12_0x55d == 0x10)) &&
         (((local_20->vms).vm0.anmFileIndex == 0x201 || ((local_20->vms).vm0.anmFileIndex == 0x203))
         )) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((local_20->state != 0) && ((local_20->vms).field12_0x55d == 0x10)) &&
          ((local_20->vms).vm0.anmFileIndex != 0x201)) &&
         ((local_20->vms).vm0.anmFileIndex != 0x203)) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_20->state != 0) && ((local_20->vms).field12_0x55d == 8)) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 1;
    }
  }
  else {
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_1c->state != 0) && (0x10 < (local_1c->vms).field12_0x55d)) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((local_1c->state != 0) && ((local_1c->vms).field12_0x55d == 0x10)) &&
         (((local_1c->vms).vm0.anmFileIndex == 0x201 || ((local_1c->vms).vm0.anmFileIndex == 0x203))
         )) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((local_1c->state != 0) && ((local_1c->vms).field12_0x55d == 0x10)) &&
          ((local_1c->vms).vm0.anmFileIndex != 0x201)) &&
         ((local_1c->vms).vm0.anmFileIndex != 0x203)) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_1c->state != 0) && ((local_1c->vms).field12_0x55d == 8)) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 1;
    }
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

