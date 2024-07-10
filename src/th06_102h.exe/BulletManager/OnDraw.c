
ChainCallbackResult BulletManager::OnDraw(BulletManager *arg)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  Bullet *local_20;
  Bullet *local_1c;
  Laser *local_10;
  int local_8;
  
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
  local_10 = arg->lasers;
  for (local_8 = 0; local_8 < 0x40; local_8 = local_8 + 1) {
    if (local_10->in_use != 0) {
      fVar2 = (float10)fcos((float10)local_10->angle);
      fVar3 = (float10)fsin((float10)local_10->angle);
      fVar1 = (local_10->end_offset - local_10->start_offset) / 2.0 + local_10->start_offset;
      (local_10->vm0).pos.x = (float)fVar2 * fVar1 + (local_10->pos).x;
      (local_10->vm0).pos.y = (float)fVar3 * fVar1 + (local_10->pos).y;
      (local_10->vm0).pos.z = 0.0;
      local_10->color = -1;
      AnmManager::Draw3(g_AnmManager,&local_10->vm0);
      if ((local_10->start_offset < 16.0 != NAN(local_10->start_offset)) ||
         (NAN(local_10->speed) != (local_10->speed == 0.0))) {
        (local_10->vm1).pos.x = (float)fVar2 * local_10->start_offset + (local_10->pos).x;
        (local_10->vm1).pos.y = (float)fVar3 * local_10->start_offset + (local_10->pos).y;
        (local_10->vm1).pos.z = 0.0;
        (local_10->vm1).color = (local_10->vm0).color;
        (local_10->vm1).flags = (local_10->vm1).flags | AnmVmFlags_3;
        (local_10->vm1).color.color = (local_10->vm1).color.color & 0xffffff | 0xff000000;
        (local_10->vm1).scaleX = ((16.0 - local_10->start_offset) / 16.0) * (local_10->width / 10.0)
        ;
        (local_10->vm1).scaleY = (local_10->vm1).scaleX;
        fVar1 = (local_10->vm1).scaleY;
        if (fVar1 < 0.0 != NAN(fVar1)) {
          (local_10->vm1).scaleX = local_10->width / 10.0;
          (local_10->vm1).scaleY = (local_10->vm1).scaleX;
        }
        AnmManager::Draw3(g_AnmManager,&local_10->vm1);
      }
    }
    local_10 = local_10 + 1;
  }
  ItemManager::OnDraw(&g_ItemManager);
  if (g_Supervisor.hasD3dHardwareVertexProcessing == 0) {
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_20->state != 0) && (0x10 < (local_20->sprites).height)) {
        DrawBulletNoHwVertex(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((local_20->state != 0) && ((local_20->sprites).height == 0x10)) &&
         (((local_20->sprites).bulletSprite.anmFileIndex == 0x201 ||
          ((local_20->sprites).bulletSprite.anmFileIndex == 0x203)))) {
        DrawBulletNoHwVertex(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((local_20->state != 0) && ((local_20->sprites).height == 0x10)) &&
          ((local_20->sprites).bulletSprite.anmFileIndex != 0x201)) &&
         ((local_20->sprites).bulletSprite.anmFileIndex != 0x203)) {
        DrawBulletNoHwVertex(local_20);
      }
      local_20 = local_20 + 1;
    }
    local_20 = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_20->state != 0) && ((local_20->sprites).height == 8)) {
        DrawBulletNoHwVertex(local_20);
      }
      local_20 = local_20 + 1;
    }
  }
  else {
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_1c->state != 0) && (0x10 < (local_1c->sprites).height)) {
        DrawBullet(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if (((local_1c->state != 0) && ((local_1c->sprites).height == 0x10)) &&
         (((local_1c->sprites).bulletSprite.anmFileIndex == 0x201 ||
          ((local_1c->sprites).bulletSprite.anmFileIndex == 0x203)))) {
        DrawBullet(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((((local_1c->state != 0) && ((local_1c->sprites).height == 0x10)) &&
          ((local_1c->sprites).bulletSprite.anmFileIndex != 0x201)) &&
         ((local_1c->sprites).bulletSprite.anmFileIndex != 0x203)) {
        DrawBullet(local_1c);
      }
      local_1c = local_1c + 1;
    }
    local_1c = arg->bullets;
    for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
      if ((local_1c->state != 0) && ((local_1c->sprites).height == 8)) {
        DrawBullet(local_1c);
      }
      local_1c = local_1c + 1;
    }
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

