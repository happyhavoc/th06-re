
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040bb80(Enemy *param_1,EclRawInstr *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  int local_8;
  
  if ((param_1->current_context).var2 < (param_1->current_context).var3) {
    if ((param_1->current_context).var2 == 0) {
      g_EnemyX = (param_1->position).x;
      g_EnemyY = (param_1->position).y;
      g_EnemyZ = (param_1->position).z;
      g_PlayerX = g_Player.position.x;
      g_PlayerY = g_Player.position.y;
      g_PlayerZ = g_Player.position.z;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      FLOAT_ARRAY_00487edc[0] = fVar8 * 6.283185 - 3.141593;
      FLOAT_ARRAY_00487edc[1] = add_normalize_angle(FLOAT_ARRAY_00487edc[0],2.513274);
    }
    if ((param_1->current_context).var2 % 0x1e == 0) {
      FLOAT_ARRAY_00487edc[0] = FLOAT_ARRAY_00487edc[1];
      FLOAT_ARRAY_00487edc[1] = add_normalize_angle(FLOAT_ARRAY_00487edc[1],2.513274);
      FLOAT_ARRAY_00487edc[2] = add_normalize_angle(FLOAT_ARRAY_00487edc[1],2.513274);
      FLOAT_ARRAY_00487edc[3] = add_normalize_angle(FLOAT_ARRAY_00487edc[2],2.513274);
      FLOAT_ARRAY_00487edc[4] = add_normalize_angle(FLOAT_ARRAY_00487edc[3],2.513274);
      FLOAT_ARRAY_00487edc[5] = add_normalize_angle(FLOAT_ARRAY_00487edc[4],2.513274);
    }
    if ((param_1->current_context).var2 % 6 == 0) {
      fVar8 = (float)(param_1->current_context).var2 / (float)(param_1->current_context).var3;
      fVar4 = fVar8 * 0.1;
      fVar6 = (g_PlayerY - g_EnemyY) * fVar4 + g_EnemyY;
      fVar4 = (g_PlayerX - g_EnemyX) * fVar4 + g_EnemyX;
      fVar8 = fVar8 + 0.5;
      (param_1->bullet_props).angle1 = fVar8 * 1.047198;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        fVar5 = (float)((param_1->current_context).var2 % 0x1e) / 30.0;
        fVar2 = (param_1->current_context).float3;
        fVar3 = (float10)fcos((float10)FLOAT_ARRAY_00487edc[local_8]);
        fVar7 = (float10)fsin((float10)FLOAT_ARRAY_00487edc[local_8]);
        fVar1 = (float)(fVar3 * (float10)fVar2);
        fVar2 = (float)(fVar7 * (float10)fVar2);
        fVar9 = (param_1->current_context).float3;
        fVar3 = (float10)fcos((float10)FLOAT_ARRAY_00487edc[local_8 + 1]);
        fVar7 = (float10)fsin((float10)FLOAT_ARRAY_00487edc[local_8 + 1]);
        (param_1->bullet_props).position.x =
             fVar4 + ((float)(fVar3 * (float10)fVar9) - fVar1) * fVar5 + fVar1;
        (param_1->bullet_props).position.y =
             fVar6 + ((float)(fVar7 * (float10)fVar9) - fVar2) * fVar5 + fVar2;
        (param_1->bullet_props).position.z = 0.0;
        fVar1 = (param_1->bullet_props).speed1;
        fVar2 = (param_1->bullet_props).speed2;
        fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        (param_1->bullet_props).speed1 = fVar9 * fVar2 + (param_1->bullet_props).speed1;
        BulletManager::SpawnBullet(&g_BulletManager,&param_1->bullet_props);
        (param_1->bullet_props).speed1 = fVar1;
        (param_1->bullet_props).angle1 = (param_1->bullet_props).angle1 - fVar8 * 0.5235988;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x16,0);
    }
    (param_1->current_context).var2 = (param_1->current_context).var2 + 1;
  }
  else {
    (param_1->current_context).func_set_func = (void *)0x0;
  }
  return;
}

