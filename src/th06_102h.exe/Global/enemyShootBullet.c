
void enemyShootBullet(Enemy *enemy,EclRawInstr *instr)

{
  float randVal;
  float randVal2;
  float bulletSpeed;
  float offY;
  float offZ;
  float posY;
  float posZ;
  
  bulletSpeed = (float)(int)instr->float_var_1;
  posZ = (enemy->position).z;
  offZ = (enemy->shoot_offset).z;
  posY = (enemy->position).y;
  offY = (enemy->shoot_offset).y;
  (enemy->bullet_props).position.x = (enemy->position).x + (enemy->shoot_offset).x;
  (enemy->bullet_props).position.y = posY + offY;
  (enemy->bullet_props).position.z = posZ + offZ;
  randVal = Rng::GetRandomF32ZeroToOne(&g_Rng);
  (enemy->bullet_props).position.x =
       (randVal * bulletSpeed + (enemy->position).x) - bulletSpeed / 2.0;
  randVal2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  (enemy->bullet_props).position.y =
       (randVal2 * bulletSpeed * 0.75 + (enemy->position).y) - (bulletSpeed * 0.75) / 2.0;
  BulletManager::SpawnBullet(&g_BulletManager,&enemy->bullet_props);
  return;
}

