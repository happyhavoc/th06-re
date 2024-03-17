
void FUN_0040c5b0(Enemy *param_1,AnmRawInstr *param_2)

{
  float fVar1;
  int iVar2;
  EnemyBulletShooter *pEVar3;
  double dVar4;
  D3DXVECTOR3 matrix_out;
  float local_90;
  float local_8c;
  float local_88;
  D3DXVECTOR3 matrix_in;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined local_64 [76];
  uint local_18;
  int local_c;
  uint local_8;
  
  if ((param_1->current_context).var2 % 9 == 0) {
    pEVar3 = (EnemyBulletShooter *)local_64;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      pEVar3->sprite = 0;
      pEVar3->color = 0;
      pEVar3 = (EnemyBulletShooter *)&pEVar3->position;
    }
    local_8 = (param_1->current_context).var2 / 9;
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
    matrix_out.z = g_Player.position.z - (param_1->position).z;
    matrix_out.y = g_Player.position.y - (param_1->position).y;
    matrix_out.x = g_Player.position.x - (param_1->position).x;
    D3DXVec3Normalize(&matrix_in,&matrix_out);
    if ((local_8 & 1) == 0) {
      local_90 = 256.0;
    }
    else {
      local_90 = -256.0;
    }
    matrix_out.x = matrix_out.x * local_78;
    matrix_out.y = matrix_out.y * local_78;
    matrix_out.z = matrix_out.z * local_78;
    local_6c = matrix_out.z + matrix_in.z * local_90;
    local_70 = matrix_out.y + matrix_in.y * local_90;
    local_74 = matrix_out.x + matrix_in.x * local_90;
    matrix_in.z = -(matrix_in.z * local_90);
    matrix_in.y = -(matrix_in.y * local_90);
    matrix_in.x = -(matrix_in.x * local_90);
    local_78 = 0.7853982;
    dVar4 = cos(0.7853981852531433);
    local_8c = (float)dVar4;
    dVar4 = sin((double)local_78);
    local_68 = (float)dVar4;
    matrix_out.x = matrix_in.x;
    matrix_out.y = matrix_in.y;
    matrix_out.z = matrix_in.z;
    fVar1 = matrix_in.y * local_68;
    matrix_in.y = matrix_in.y * local_8c + -matrix_in.x * local_68;
    local_78 = -0.1745329;
    matrix_in.x = fVar1 + matrix_in.x * local_8c;
    dVar4 = cos(-0.1745329350233078);
    local_8c = (float)dVar4;
    dVar4 = sin((double)local_78);
    local_68 = (float)dVar4;
    local_64._16_4_ = 0.0;
    local_88 = -0.7853982;
    for (local_c = 0; local_c < 9; local_c = local_c + 1) {
      matrix_out.x = matrix_in.x;
      matrix_out.y = matrix_in.y;
      matrix_out.z = matrix_in.z;
      fVar1 = matrix_in.y * local_68 + matrix_in.x * local_8c;
      matrix_in.y = matrix_in.y * local_8c + -matrix_in.x * local_68;
      local_64._12_4_ = matrix_in.z + (param_1->position).z + local_6c;
      local_64._8_4_ = matrix_in.y + (param_1->position).y + local_70;
      local_64._4_4_ = fVar1 + (param_1->position).x + local_74;
      local_64._24_4_ = 2.0;
      if (((local_8 & 1) != 0) && ((int)g_GameManager.difficulty < 2)) {
        local_64._16_4_ = local_88;
      }
      local_64._2_2_ = 3;
      matrix_in.x = fVar1;
      BulletManager::FUN_004145c0(&g_BulletManager,(EnemyBulletShooter *)local_64);
      local_88 = local_88 + 0.1745329;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,7);
  }
  (param_1->current_context).var2 = (param_1->current_context).var2 + 1;
  return;
}

