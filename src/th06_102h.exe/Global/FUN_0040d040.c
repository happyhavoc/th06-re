
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040d040(Enemy *param_1,AnmRawInstr *param_2)

{
  int iVar1;
  EnemyLaserShooter *pEVar2;
  float fVar3;
  double dVar4;
  int local_e0;
  float local_dc [24];
  float local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  uint local_68;
  float local_64;
  int local_60;
  EnemyLaserShooter local_5c;
  
  pEVar2 = &local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->color = 0;
    pEVar2 = (EnemyLaserShooter *)&pEVar2->position;
  }
  local_e0 = 8;
  do {
    local_e0 = local_e0 + -1;
  } while (-1 < local_e0);
  local_68 = param_2->args[3];
  fVar3 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  local_7c = fVar3 * 6.283185;
  for (local_74 = 0; local_74 < 2; local_74 = local_74 + 1) {
    if (local_74 == 0) {
      local_78 = local_7c + -3.141593;
      local_70 = 0.7853982;
    }
    else {
      local_78 = local_7c + -2.748894;
      local_70 = -0.7853982;
    }
    local_64 = 32.0;
    for (local_60 = 0; iVar1 = local_60, local_60 < 8; local_60 = local_60 + 1) {
      local_dc[local_60 * 3] = (param_1->position).x;
      local_dc[iVar1 * 3 + 1] = (param_1->position).y;
      local_dc[iVar1 * 3 + 2] = (param_1->position).z;
      iVar1 = local_60;
      dVar4 = cos((double)local_78);
      local_dc[local_60 * 3] = (float)dVar4 * local_64 + local_dc[iVar1 * 3];
      iVar1 = local_60;
      dVar4 = sin((double)local_78);
      local_dc[local_60 * 3 + 1] = (float)dVar4 * local_64 + local_dc[iVar1 * 3 + 1];
      local_78 = local_78 + 0.7853982;
    }
    if (local_74 == 0) {
      local_78 = local_7c + -3.141593;
    }
    else {
      local_78 = local_7c + -2.748894;
    }
    for (local_6c = 0; local_6c < 3; local_6c = local_6c + 1) {
      if (local_6c < 2) {
        local_64 = 112.0;
      }
      else {
        local_64 = 480.0;
      }
      for (local_60 = 0; local_60 < 8; local_60 = local_60 + 1) {
        local_5c.position.x = local_dc[local_60 * 3];
        local_5c.position.y = local_dc[local_60 * 3 + 1];
        local_5c.position.z = local_dc[local_60 * 3 + 2];
        local_5c.sprite = 1;
        if (local_68 == 0) {
          if (g_GameManager.difficulty < 2) {
            local_5c.color = 2;
          }
          else {
            local_5c.color = 8;
          }
          local_5c.angle = local_78;
          local_5c.speed = 0.0;
          local_5c.start_offset = 0.0;
          if (g_GameManager.difficulty < 2) {
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
          local_5c.field18_0x4c = 2;
          local_5c.type = 1;
          local_5c.start_length = local_5c.end_offset;
          AnmVm::FUN_00414670(&local_5c);
        }
        else {
          (param_1->bullet_props).position.x = local_dc[local_60 * 3];
          (param_1->bullet_props).position.y = local_5c.position.y;
          (param_1->bullet_props).position.z = local_5c.position.z;
          BulletManager::FUN_004145c0(&g_BulletManager,&param_1->bullet_props);
        }
        iVar1 = local_60;
        dVar4 = cos((double)local_78);
        local_dc[local_60 * 3] = (float)dVar4 * local_64 + local_dc[iVar1 * 3];
        iVar1 = local_60;
        dVar4 = sin((double)local_78);
        local_dc[local_60 * 3 + 1] = (float)dVar4 * local_64 + local_dc[iVar1 * 3 + 1];
        local_78 = local_78 + 0.7853982;
      }
      local_78 = (local_70 - 6.283185) + local_78;
    }
  }
  return;
}

