
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void FUN_0040c180(Enemy *param_1,EclRawInstr *param_2)

{
  float10 fVar1;
  float fVar2;
  ushort uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  float *pfVar5;
  float fVar6;
  float *in_stack_ffffffc4;
  Bullet *bullets;
  int local_14;
  int local_10;
  
  if ((int)param_2->float_var_1 < 2) {
    EffectManager::SpawnEffect(&g_EffectManager,0xc,&param_1->position,1,0xffffffff);
    g_GameManager.isTimeStopped._0_1_ = *(undefined *)&param_2->float_var_1;
  }
  else {
    local_10 = 0xe;
    bullets = g_BulletManager.bullets;
    if ((int)g_GameManager.difficulty < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((bullets->state != 0) && (bullets->state != 5)) &&
           (((bullets->vms).vm0.sprite != (AnmLoadedSprite *)0x0 &&
            (((30.0 <= ((bullets->vms).vm0.sprite)->heightPx && (bullets->color != 5)) &&
             (uVar3 = Rng::GetRandomU16(&g_Rng), (uVar3 & 3) == 0)))))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->vms).vm0.anotherSpriteNumber + (int)(short)bullets->color);
          fVar6 = (bullets->pos).x - g_Player.positionCenter.x;
          fVar2 = (bullets->pos).y - g_Player.positionCenter.y;
          pfVar5 = (float *)sqrt(SUB84((double)(fVar6 * fVar6 + fVar2 * fVar2),0));
          if ((float)pfVar5 <= 128.0) {
            fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            Player::FUN_00428680(&g_Player,&bullets->pos,pfVar5);
            bullets->angle = (float)(extraout_ST0 + (float10)1.570796 + (float10)(fVar6 * 6.283185))
            ;
          }
          else {
            fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar6 * 2.356194 + 0.7853982;
          }
          fVar6 = bullets->speed;
          fVar1 = (float10)fcos((float10)bullets->angle);
          fVar4 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar1 * (float10)fVar6);
          (bullets->velocity).y = (float)(fVar4 * (float10)fVar6);
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
            ((bullets->vms).vm0.sprite != (AnmLoadedSprite *)0x0)) &&
           (((30.0 <= ((bullets->vms).vm0.sprite)->heightPx && (bullets->color != 5)) &&
            (uVar3 = Rng::GetRandomU16(&g_Rng), (uVar3 & 3) == 0)))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->vms).vm0.anotherSpriteNumber + (int)(short)bullets->color);
          fVar6 = (bullets->pos).x - g_Player.positionCenter.x;
          fVar2 = (bullets->pos).y - g_Player.positionCenter.y;
          fVar6 = sqrt(SUB84((double)(fVar6 * fVar6 + fVar2 * fVar2),0));
          if (fVar6 <= 128.0) {
            fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            Player::FUN_00428680(&g_Player,&bullets->pos,in_stack_ffffffc4);
            bullets->angle =
                 (float)(extraout_ST0_00 + (float10)1.570796 + (float10)(fVar6 * 6.283185));
          }
          else {
            fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar6 * 6.283185;
          }
          fVar6 = bullets->speed;
          fVar1 = (float10)fcos((float10)bullets->angle);
          fVar4 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar1 * (float10)fVar6);
          (bullets->velocity).y = (float)(fVar4 * (float10)fVar6);
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

