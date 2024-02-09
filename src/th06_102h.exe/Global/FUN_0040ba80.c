
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040ba80(Enemy *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)*(int *)(param_2 + 0x10);
  fVar5 = (param_1->position).z;
  fVar1 = (param_1->shoot_offset).z;
  fVar2 = (param_1->position).y;
  fVar3 = (param_1->shoot_offset).y;
  (param_1->bullet_props).position.x = (param_1->position).x + (param_1->shoot_offset).x;
  (param_1->bullet_props).position.y = fVar2 + fVar3;
  (param_1->bullet_props).position.z = fVar5 + fVar1;
  fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  (param_1->bullet_props).position.x = (fVar5 * fVar4 + (param_1->position).x) - fVar4 / 2.0;
  fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  (param_1->bullet_props).position.y =
       (fVar5 * fVar4 * 0.75 + (param_1->position).y) - (fVar4 * 0.75) / 2.0;
  BulletManager::FUN_004145c0(&g_BulletManager,&param_1->bullet_props);
  return;
}

