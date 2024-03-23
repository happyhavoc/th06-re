
void FUN_0040c5b0(Enemy *param_1,AnmRawInstr *param_2)

{
  uint uVar1;
  int iVar2;
  EnemyBulletShooter *ppEVar3;
  double dVar2;
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
  EnemyBulletShooter local_64;
  int local_c;
  float fVar1;
  
  if ((param_1->current_context).var2 % 9 == 0) {
    ppEVar3 = &local_64;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      ppEVar3->sprite = 0;
      ppEVar3->color = 0;
      ppEVar3 = (EnemyBulletShooter *)&ppEVar3->position;
    }
    uVar1 = (param_1->current_context).var2 / 9;
    local_64.sprite = 8;
    local_64.aim_mode = 0;
    if ((int)g_GameManager.difficulty < 2) {
      local_64.count1 = 1;
    }
    else {
      local_64.count1 = 3;
    }
    local_64.count2 = 1;
    local_64.angle2 = 0.5235988;
    local_64._74_2_ = 0;
    local_64.flags = 0;
    local_78 = 0.5 - ((float)uVar1 * 0.5) / 9.0;
    matrix_out.z = g_Player.position.z - (param_1->position).z;
    matrix_out.y = g_Player.position.y - (param_1->position).y;
    matrix_out.x = g_Player.position.x - (param_1->position).x;
    D3DXVec3Normalize(&matrix_in,&matrix_out);
    if ((uVar1 & 1) == 0) {
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
    dVar2 = cos(0.7853981852531433);
    local_8c = (float)dVar2;
    dVar2 = sin((double)local_78);
    local_68 = (float)dVar2;
    matrix_out.x = matrix_in.x;
    matrix_out.y = matrix_in.y;
    matrix_out.z = matrix_in.z;
    fVar1 = matrix_in.y * local_68;
    matrix_in.y = matrix_in.y * local_8c + -matrix_in.x * local_68;
    local_78 = -0.1745329;
    matrix_in.x = fVar1 + matrix_in.x * local_8c;
    dVar2 = cos(-0.1745329350233078);
    local_8c = (float)dVar2;
    dVar2 = sin((double)local_78);
    local_68 = (float)dVar2;
    local_64.angle1 = 0.0;
    local_88 = -0.7853982;
    for (local_c = 0; local_c < 9; local_c = local_c + 1) {
      matrix_out.x = matrix_in.x;
      matrix_out.y = matrix_in.y;
      matrix_out.z = matrix_in.z;
      fVar1 = matrix_in.y * local_68 + matrix_in.x * local_8c;
      matrix_in.y = matrix_in.y * local_8c + -matrix_in.x * local_68;
      local_64.position.z = matrix_in.z + (param_1->position).z + local_6c;
      local_64.position.y = matrix_in.y + (param_1->position).y + local_70;
      local_64.position.x = fVar1 + (param_1->position).x + local_74;
      local_64.speed1 = 2.0;
      if (((uVar1 & 1) != 0) && ((int)g_GameManager.difficulty < 2)) {
        local_64.angle1 = local_88;
      }
      local_64.color = 3;
      matrix_in.x = fVar1;
      BulletManager::SpawnBullet(&g_BulletManager,&local_64);
      local_88 = local_88 + 0.1745329;
    }
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,7,0);
  }
  (param_1->current_context).var2 = (param_1->current_context).var2 + 1;
  return;
}

