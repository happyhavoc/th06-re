
void FUN_0040c5b0(int param_1)

{
  float fVar1;
  int iVar2;
  EnemyBulletShooter *pEVar3;
  float10 fVar4;
  D3DXVECTOR3 local_9c;
  float local_90;
  float local_8c;
  float local_88;
  D3DXVECTOR3 local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined local_64 [76];
  uint local_18;
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x9ac) % 9 == 0) {
    pEVar3 = (EnemyBulletShooter *)local_64;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      pEVar3->sprite = 0;
      pEVar3->color = 0;
      pEVar3 = (EnemyBulletShooter *)&pEVar3->position;
    }
    local_8 = *(int *)(param_1 + 0x9ac) / 9;
    local_64._0_2_ = 8;
    local_64._72_2_ = 0;
    if ((int)g_GameManager.difficulty < 2) {
      local_64._68_2_ = 1;
    }
    else {
      local_64._68_2_ = 3;
    }
    local_64._70_2_ = 1;
    local_64._20_4_ = 0.5235988;
    local_64._74_2_ = 0;
    local_18 = 0;
    local_78 = 0.5 - ((float)local_8 * 0.5) / 9.0;
    local_9c.z = g_Player.position.z - *(float *)(param_1 + 0xc74);
    local_9c.y = g_Player.position.y - *(float *)(param_1 + 0xc70);
    local_9c.x = g_Player.position.x - *(float *)(param_1 + 0xc6c);
    D3DXVec3Normalize(&local_84,&local_9c);
    if ((local_8 & 1) == 0) {
      local_90 = 256.0;
    }
    else {
      local_90 = -256.0;
    }
    local_9c.x = local_9c.x * local_78;
    local_9c.y = local_9c.y * local_78;
    local_9c.z = local_9c.z * local_78;
    local_6c = local_9c.z + local_84.z * local_90;
    local_70 = local_9c.y + local_84.y * local_90;
    local_74 = local_9c.x + local_84.x * local_90;
    local_84.z = -(local_84.z * local_90);
    local_84.y = -(local_84.y * local_90);
    local_84.x = -(local_84.x * local_90);
    local_78 = 0.7853982;
    fVar4 = (float10)FUN_0045bda4(0x3fe921fb60000000);
    local_8c = (float)fVar4;
    fVar4 = (float10)FUN_0045bcf4((double)local_78);
    local_68 = (float)fVar4;
    local_9c.x = local_84.x;
    local_9c.y = local_84.y;
    local_9c.z = local_84.z;
    fVar1 = local_84.y * local_68;
    local_84.y = local_84.y * local_8c + -local_84.x * local_68;
    local_78 = -0.1745329;
    local_84.x = fVar1 + local_84.x * local_8c;
    fVar4 = (float10)FUN_0045bda4(0xbfc6571860000000);
    local_8c = (float)fVar4;
    fVar4 = (float10)FUN_0045bcf4((double)local_78);
    local_68 = (float)fVar4;
    local_64._16_4_ = 0.0;
    local_88 = -0.7853982;
    for (local_c = 0; local_c < 9; local_c = local_c + 1) {
      local_9c.x = local_84.x;
      local_9c.y = local_84.y;
      local_9c.z = local_84.z;
      fVar1 = local_84.y * local_68 + local_84.x * local_8c;
      local_84.y = local_84.y * local_8c + -local_84.x * local_68;
      local_64._12_4_ = local_84.z + *(float *)(param_1 + 0xc74) + local_6c;
      local_64._8_4_ = local_84.y + *(float *)(param_1 + 0xc70) + local_70;
      local_64._4_4_ = fVar1 + *(float *)(param_1 + 0xc6c) + local_74;
      local_64._24_4_ = 2.0;
      if (((local_8 & 1) != 0) && ((int)g_GameManager.difficulty < 2)) {
        local_64._16_4_ = local_88;
      }
      local_64._2_2_ = 3;
      local_84.x = fVar1;
      BulletManager::FUN_004145c0(&g_BulletManager,(EnemyBulletShooter *)local_64);
      local_88 = local_88 + 0.1745329;
    }
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,7);
  }
  *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
  return;
}

