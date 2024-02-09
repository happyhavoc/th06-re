
void FUN_0040d400(int param_1)

{
  int iVar1;
  EnemyBulletShooter *pEVar2;
  float fVar3;
  int local_68;
  int local_64;
  int local_60;
  EnemyBulletShooter local_5c;
  
  local_60 = 0;
  local_68 = 0x5ab5f8;
  pEVar2 = &local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->color = 0;
    pEVar2 = (EnemyBulletShooter *)&pEVar2->position;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((*(short *)(local_68 + 0x5be) != 0) && (*(short *)(local_68 + 0x5be) != 5)) &&
        (*(int *)(local_68 + 0xc0) != 0)) && (30.0 <= *(float *)(*(int *)(local_68 + 0xc0) + 0x2c)))
    {
      local_5c.position.x = *(float *)(local_68 + 0x560);
      local_5c.position.y = *(float *)(local_68 + 0x564);
      local_5c.position.z = *(float *)(local_68 + 0x568);
      local_5c.sprite = 3;
      local_5c.color = 1;
      fVar3 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_5c.angle1 = fVar3 * 6.283185 - 3.141593;
      local_5c.speed1 = 0.0;
      local_5c.count1 = 1;
      local_5c.count2 = 1;
      local_5c.flags = 8;
      local_5c.aim_mode = 1;
      BulletManager::FUN_004145c0(&g_BulletManager,&local_5c);
      local_60 = local_60 + 1;
    }
    local_68 = local_68 + 0x5c4;
  }
  *(int *)(param_1 + 0x9b0) = local_60;
  return;
}

