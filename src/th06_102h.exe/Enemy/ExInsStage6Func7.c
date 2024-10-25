
void th06::Enemy::ExInsStage6Func7(Enemy *this,EclRawInstr *param_2)

{
  float fVar1;
  int iVar1;
  EnemyLaserShooter *pEVar2;
  float fVar2;
  double dVar3;
  int local_e0;
  D3DXVECTOR3 local_dc [8];
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  float local_64;
  int local_60;
  EnemyLaserShooter local_5c;
  
  pEVar2 = &local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->spriteOffset = 0;
    pEVar2 = (EnemyLaserShooter *)&pEVar2->position;
  }
  local_e0 = 8;
  do {
    local_e0 = local_e0 + -1;
  } while (-1 < local_e0);
  fVar1 = (param_2->args).float_var_1;
  fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  fVar2 = fVar2 * 6.283185;
  for (local_74 = 0; local_74 < 2; local_74 = local_74 + 1) {
    if (local_74 == 0) {
      local_78 = fVar2 + -3.141593;
      local_70 = 0.7853982;
    }
    else {
      local_78 = fVar2 + -2.748894;
      local_70 = -0.7853982;
    }
    for (local_60 = 0; local_60 < 8; local_60 = local_60 + 1) {
      local_dc[local_60].x = (this->position).x;
      local_dc[local_60].y = (this->position).y;
      local_dc[local_60].z = (this->position).z;
      dVar3 = cos((double)local_78);
      local_dc[local_60].x = (float)dVar3 * 32.0 + local_dc[local_60].x;
      dVar3 = sin((double)local_78);
      local_dc[local_60].y = (float)dVar3 * 32.0 + local_dc[local_60].y;
      local_78 = local_78 + 0.7853982;
    }
    if (local_74 == 0) {
      local_78 = fVar2 + -3.141593;
    }
    else {
      local_78 = fVar2 + -2.748894;
    }
    for (local_6c = 0; local_6c < 3; local_6c = local_6c + 1) {
      if (local_6c < 2) {
        local_64 = 112.0;
      }
      else {
        local_64 = 480.0;
      }
      for (local_60 = 0; local_60 < 8; local_60 = local_60 + 1) {
        local_5c.position.x = local_dc[local_60].x;
        local_5c.position.y = local_dc[local_60].y;
        local_5c.position.z = local_dc[local_60].z;
        local_5c.sprite = 1;
        if (fVar1 == 0.0) {
          if ((int)g_GameManager.difficulty < 2) {
            local_5c.spriteOffset = 2;
          }
          else {
            local_5c.spriteOffset = 8;
          }
          local_5c.angle = local_78;
          local_5c.speed = 0.0;
          local_5c.start_offset = 0.0;
          if ((int)g_GameManager.difficulty < 2) {
            local_5c.width = 28.0;
            local_5c.end_offset = local_64;
          }
          else {
            local_5c.start_length = 440.0;
            local_5c.width = 20.0;
            local_5c.end_offset = local_5c.start_length;
          }
          local_5c.start_time = local_6c * 0x10 + 0x3c;
          local_5c.duration = local_6c * -0x10 + 0x5a;
          local_5c.stop_time = 0x10;
          local_5c.graze_delay = 0x32;
          local_5c.graze_distance = 0x10;
          local_5c.flags = 2;
          local_5c.type = 1;
          local_5c.start_length = local_5c.end_offset;
          BulletManager::SpawnLaserPattern(&g_BulletManager,&local_5c);
        }
        else {
          (this->bullet_props).position.x = local_dc[local_60].x;
          (this->bullet_props).position.y = local_5c.position.y;
          (this->bullet_props).position.z = local_5c.position.z;
          BulletManager::SpawnBulletPattern(&g_BulletManager,&this->bullet_props);
        }
        dVar3 = cos((double)local_78);
        local_dc[local_60].x = (float)dVar3 * local_64 + local_dc[local_60].x;
        dVar3 = sin((double)local_78);
        local_dc[local_60].y = (float)dVar3 * local_64 + local_dc[local_60].y;
        local_78 = local_78 + 0.7853982;
      }
      local_78 = (local_70 - 6.283185) + local_78;
    }
  }
  return;
}

