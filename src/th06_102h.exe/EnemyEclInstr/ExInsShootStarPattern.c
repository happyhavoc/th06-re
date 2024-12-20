
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void th06::EnemyEclInstr::ExInsShootStarPattern(Enemy *param_1,EclRawInstr *param_2)

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
      g_EnemyPosition.x = (param_1->position).x;
      g_EnemyPosition.y = (param_1->position).y;
      g_EnemyPosition.z = (param_1->position).z;
      g_PlayerPosition.x = _DAT_006caa68;
      g_PlayerPosition.y = _DAT_006caa6c;
      g_PlayerPosition.z = _DAT_006caa70;
      fVar8 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      g_StarAngleTable[0] = fVar8 * 6.283185 - 3.141593;
      g_StarAngleTable[1] = utils::AddNormalizeAngle(g_StarAngleTable[0],2.513274);
    }
    if ((param_1->current_context).var2 % 0x1e == 0) {
      g_StarAngleTable[0] = g_StarAngleTable[1];
      g_StarAngleTable[1] = utils::AddNormalizeAngle(g_StarAngleTable[1],2.513274);
      g_StarAngleTable[2] = utils::AddNormalizeAngle(g_StarAngleTable[1],2.513274);
      g_StarAngleTable[3] = utils::AddNormalizeAngle(g_StarAngleTable[2],2.513274);
      g_StarAngleTable[4] = utils::AddNormalizeAngle(g_StarAngleTable[3],2.513274);
      g_StarAngleTable[5] = utils::AddNormalizeAngle(g_StarAngleTable[4],2.513274);
    }
    if ((param_1->current_context).var2 % 6 == 0) {
      fVar8 = (float)(param_1->current_context).var2 / (float)(param_1->current_context).var3;
      fVar4 = fVar8 * 0.1;
      fVar6 = (g_PlayerPosition.y - g_EnemyPosition.y) * fVar4 + g_EnemyPosition.y;
      fVar4 = (g_PlayerPosition.x - g_EnemyPosition.x) * fVar4 + g_EnemyPosition.x;
      fVar8 = fVar8 + 0.5;
      (param_1->bullet_props).angle1 = fVar8 * 1.047198;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        fVar5 = (float)((param_1->current_context).var2 % 0x1e) / 30.0;
        fVar2 = (param_1->current_context).float3;
        fVar3 = (float10)fcos((float10)g_StarAngleTable[local_8]);
        fVar7 = (float10)fsin((float10)g_StarAngleTable[local_8]);
        fVar1 = (float)(fVar3 * (float10)fVar2);
        fVar2 = (float)(fVar7 * (float10)fVar2);
        fVar9 = (param_1->current_context).float3;
        fVar3 = (float10)fcos((float10)g_StarAngleTable[local_8 + 1]);
        fVar7 = (float10)fsin((float10)g_StarAngleTable[local_8 + 1]);
        (param_1->bullet_props).position.x =
             fVar4 + ((float)(fVar3 * (float10)fVar9) - fVar1) * fVar5 + fVar1;
        (param_1->bullet_props).position.y =
             fVar6 + ((float)(fVar7 * (float10)fVar9) - fVar2) * fVar5 + fVar2;
        (param_1->bullet_props).position.z = 0.0;
        fVar1 = (param_1->bullet_props).speed1;
        fVar2 = (param_1->bullet_props).speed2;
        fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
        (param_1->bullet_props).speed1 = fVar9 * fVar2 + (param_1->bullet_props).speed1;
        BulletManager::SpawnBulletPattern(&g_BulletManager,&param_1->bullet_props);
        (param_1->bullet_props).speed1 = fVar1;
        (param_1->bullet_props).angle1 = (param_1->bullet_props).angle1 - fVar8 * 0.5235988;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_16,0);
    }
    (param_1->current_context).var2 = (param_1->current_context).var2 + 1;
  }
  else {
    (param_1->current_context).func_set_func = (void *)0x0;
  }
  return;
}

