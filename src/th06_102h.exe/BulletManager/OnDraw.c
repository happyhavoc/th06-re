
undefined4 BulletManager::OnDraw(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  int local_20;
  int local_1c;
  AnmVm *local_10;
  int local_8;
  
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
  local_10 = (AnmVm *)(param_1 + 0xec000);
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
        local_10[1].flags = local_10[1].flags | 8;
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
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_20 + 0x5be) != 0) && (0x10 < *(byte *)(local_20 + 0x55d))) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\x10')) &&
         ((*(short *)(local_20 + 0xb4) == 0x201 || (*(short *)(local_20 + 0xb4) == 0x203)))) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\x10')) &&
          (*(short *)(local_20 + 0xb4) != 0x201)) && (*(short *)(local_20 + 0xb4) != 0x203)) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
    local_20 = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_20 + 0x5be) != 0) && (*(char *)(local_20 + 0x55d) == '\b')) {
        FUN_00416c50(local_20);
      }
      local_20 = local_20 + 0x5c4;
    }
  }
  else {
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_1c + 0x5be) != 0) && (0x10 < *(byte *)(local_1c + 0x55d))) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\x10')) &&
         ((*(short *)(local_1c + 0xb4) == 0x201 || (*(short *)(local_1c + 0xb4) == 0x203)))) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\x10')) &&
          (*(short *)(local_1c + 0xb4) != 0x201)) && (*(short *)(local_1c + 0xb4) != 0x203)) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
    local_1c = param_1 + 0x5600;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((*(short *)(local_1c + 0x5be) != 0) && (*(char *)(local_1c + 0x55d) == '\b')) {
        FUN_00416b50(local_1c);
      }
      local_1c = local_1c + 0x5c4;
    }
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  return 1;
}

