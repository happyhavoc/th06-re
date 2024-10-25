
void th06::Enemy::ExInsStage6Func11(Enemy *param_1,EclRawInstr *param_2)

{
  float10 fVar1;
  int iVar2;
  EnemyBulletShooter *pEVar3;
  float10 fVar4;
  float fVar5;
  Bullet *local_64;
  int local_60;
  EnemyBulletShooter local_5c;
  
  local_64 = g_BulletManager.bullets;
  pEVar3 = &local_5c;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    pEVar3->sprite = 0;
    pEVar3->spriteOffset = 0;
    pEVar3 = (EnemyBulletShooter *)&pEVar3->position;
  }
  Rng::GetRandomF32ZeroToOne(&g_Rng);
  EffectManager::SpawnParticles(&g_EffectManager,0xc,&param_1->position,1,(ZunColor)0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((local_64->state != 0) && (local_64->state != 5)) &&
        ((local_64->sprites).bulletSprite.sprite != (AnmLoadedSprite *)0x0)) &&
       ((fVar5 = ((local_64->sprites).bulletSprite.sprite)->heightPx, fVar5 < 30.0 != NAN(fVar5) &&
        (NAN(local_64->speed) != (local_64->speed == 0.0))))) {
      local_64->ex_flags = local_64->ex_flags | 0x10;
      local_64->spriteOffset = 2;
      AnmManager::SetActiveSprite
                (g_AnmManager,(AnmVm *)local_64,
                 (int)(local_64->sprites).bulletSprite.baseSpriteIndex + (int)local_64->spriteOffset
                );
      local_64->speed = 0.01;
      (local_64->timer).current = 0;
      (local_64->timer).subFrame = 0.0;
      (local_64->timer).previous = -999;
      local_64->ex_5_int_0 = 0x78;
      fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      fVar4 = (float10)(fVar5 * 6.283185 - 3.141593);
      fVar1 = (float10)fcos(fVar4);
      fVar4 = (float10)fsin(fVar4);
      (local_64->ex_4_acceleration).x = (float)(fVar1 * (float10)0.01);
      (local_64->ex_4_acceleration).y = (float)(fVar4 * (float10)0.01);
    }
    local_64 = local_64 + 1;
  }
  return;
}

