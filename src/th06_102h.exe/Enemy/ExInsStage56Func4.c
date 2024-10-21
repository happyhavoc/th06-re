
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void __cdecl th06::Enemy::ExInsStage56Func4(Enemy *param_1,EclRawInstr *param_2)

{
  float10 fVar1;
  ushort uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  Bullet *bullets;
  int local_14;
  int local_10;
  
  if ((int)(param_2->args).float_var_1 < 2) {
    EffectManager::SpawnParticles(&g_EffectManager,0xc,&param_1->position,1,(ZunColor)0xffffffff);
    g_GameManager.isTimeStopped._0_1_ = *(undefined *)&(param_2->args).float_var_1;
  }
  else {
    local_10 = 0xe;
    bullets = g_BulletManager.bullets;
    if ((int)g_GameManager.difficulty < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((bullets->state != 0) && (bullets->state != 5)) &&
           (((bullets->sprites).bulletSprite.sprite != (AnmLoadedSprite *)0x0 &&
            (((30.0 <= ((bullets->sprites).bulletSprite.sprite)->heightPx && (bullets->color != 5))
             && (uVar2 = Rng::GetRandomU16(&g_Rng), (uVar2 & 3) == 0)))))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->sprites).bulletSprite.baseSpriteIndex +
                     (int)(short)bullets->color);
          fVar4 = (bullets->pos).x - g_Player.positionCenter.x;
          fVar5 = (bullets->pos).y - g_Player.positionCenter.y;
          fVar4 = sqrt(SUB84((double)(fVar4 * fVar4 + fVar5 * fVar5),0));
          if (fVar4 <= 128.0) {
            fVar4 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            fVar5 = Player::AngleFromPlayer(&g_Player,&bullets->pos);
            bullets->angle = fVar5 + 1.570796 + fVar4 * 6.283185;
          }
          else {
            fVar4 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar4 * 2.356194 + 0.7853982;
          }
          fVar4 = bullets->speed;
          fVar1 = (float10)fcos((float10)bullets->angle);
          fVar3 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar1 * (float10)fVar4);
          (bullets->velocity).y = (float)(fVar3 * (float10)fVar4);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        bullets = bullets + 1;
      }
    }
    else {
      local_10 = 0x34;
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if ((((bullets->state != 0) && (bullets->state != 5)) &&
            ((bullets->sprites).bulletSprite.sprite != (AnmLoadedSprite *)0x0)) &&
           (((30.0 <= ((bullets->sprites).bulletSprite.sprite)->heightPx && (bullets->color != 5))
            && (uVar2 = Rng::GetRandomU16(&g_Rng), (uVar2 & 3) == 0)))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->sprites).bulletSprite.baseSpriteIndex +
                     (int)(short)bullets->color);
          fVar4 = (bullets->pos).x - g_Player.positionCenter.x;
          fVar5 = (bullets->pos).y - g_Player.positionCenter.y;
          fVar4 = sqrt(SUB84((double)(fVar4 * fVar4 + fVar5 * fVar5),0));
          if (fVar4 <= 128.0) {
            fVar4 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            fVar5 = Player::AngleFromPlayer(&g_Player,&bullets->pos);
            bullets->angle = fVar5 + 1.570796 + fVar4 * 6.283185;
          }
          else {
            fVar4 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar4 * 6.283185;
          }
          fVar4 = bullets->speed;
          fVar1 = (float10)fcos((float10)bullets->angle);
          fVar3 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar1 * (float10)fVar4);
          (bullets->velocity).y = (float)(fVar3 * (float10)fVar4);
          local_10 = local_10 + -1;
          if (local_10 == 0) break;
        }
        bullets = bullets + 1;
      }
    }
  }
  (param_1->current_context).var2 = 0;
  return;
}

