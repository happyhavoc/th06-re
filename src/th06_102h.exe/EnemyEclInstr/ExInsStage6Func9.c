
void th06::EnemyEclInstr::ExInsStage6Func9(Enemy *param_1,EclRawInstr *param_2)

{
  float fVar1;
  float10 fVar2;
  int iVar3;
  EnemyBulletShooter *pEVar4;
  float10 fVar5;
  float fVar6;
  Bullet *bullets;
  float local_64;
  int local_60;
  EnemyBulletShooter local_5c;
  
  bullets = g_BulletManager.bullets;
  pEVar4 = &local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    pEVar4->sprite = 0;
    pEVar4->spriteOffset = 0;
    pEVar4 = (EnemyBulletShooter *)&pEVar4->position;
  }
  fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
  EffectManager::SpawnParticles(&g_EffectManager,0xc,&param_1->position,1,(ZunColor)0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((bullets->state != 0) && (bullets->state != 5)) &&
        ((bullets->sprites).spriteBullet.sprite != (AnmLoadedSprite *)0x0)) &&
       ((fVar1 = ((bullets->sprites).spriteBullet.sprite)->heightPx, fVar1 < 30.0 != NAN(fVar1) &&
        (NAN(bullets->speed) != (bullets->speed == 0.0))))) {
      bullets->ex_flags = bullets->ex_flags | 0x10;
      bullets->spriteOffset = 2;
      AnmManager::SetActiveSprite
                (g_AnmManager,(AnmVm *)bullets,
                 (int)(bullets->sprites).spriteBullet.baseSpriteIndex + (int)bullets->spriteOffset);
      bullets->speed = 0.01;
      (bullets->timer).current = 0;
      (bullets->timer).subFrame = 0.0;
      (bullets->timer).previous = -999;
      bullets->ex_5_int_0 = 0x78;
      fVar1 = ((param_1->position).y - (bullets->pos).y) *
              ((param_1->position).y - (bullets->pos).y) +
              ((param_1->position).x - (bullets->pos).x) *
              ((param_1->position).x - (bullets->pos).x);
      if (fVar1 <= 0.1) {
        local_64 = 0.0;
      }
      else {
        local_64 = sqrt(SUB84((double)fVar1,0));
      }
      fVar5 = (float10)((local_64 * 3.141593) / 256.0 + (fVar6 * 6.283185 - 3.141593));
      fVar2 = (float10)fcos(fVar5);
      fVar5 = (float10)fsin(fVar5);
      (bullets->ex_4_acceleration).x = (float)(fVar2 * (float10)0.01);
      (bullets->ex_4_acceleration).y = (float)(fVar5 * (float10)0.01);
    }
    bullets = bullets + 1;
  }
  return;
}

