
/* WARNING: Removing unreachable block (ram,0x0040c27a) */
/* WARNING: Removing unreachable block (ram,0x0040c464) */

void FUN_0040c180(Enemy *param_1,EclRawInstr *param_2)

{
  float fVar1;
  ushort uVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  float fVar5;
  float *in_stack_ffffffc0;
  float *pfVar6;
  Bullet *bullets;
  int local_14;
  int local_10;
  
  if ((int)param_2->float_var_1 < 2) {
    EffectManager::FUN_0040ef50(&g_EffectManager,0xc,&param_1->position,1,0xffffffff);
    g_GameManager.unk_0x2c._0_1_ = *(undefined *)&param_2->float_var_1;
  }
  else {
    local_10 = 0xe;
    bullets = g_BulletManager.bullets;
    if ((int)g_GameManager.difficulty < 2) {
      for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
        if (((bullets->state != 0) && (bullets->state != 5)) &&
           (((bullets->vms).vm0.sprite != (AnmLoadedSprite *)0x0 &&
            (((30.0 <= ((bullets->vms).vm0.sprite)->heightPx && (bullets->color != 5)) &&
             (uVar2 = Rng::GetRandomU16(&g_Rng), (uVar2 & 3) == 0)))))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->vms).vm0.anotherSpriteNumber + (int)(short)bullets->color);
          fVar5 = (bullets->pos).x - g_Player.position.x;
          fVar1 = (bullets->pos).y - g_Player.position.y;
          fVar3 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar1 * fVar1));
          if ((float)fVar3 <= 128.0) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            Player::FUN_00428680(&g_Player,(float10 *)&bullets->pos,in_stack_ffffffc0);
            bullets->angle = (float)(extraout_ST0 + (float10)1.570796 + (float10)(fVar5 * 6.283185))
            ;
          }
          else {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar5 * 2.356194 + 0.7853982;
          }
          fVar5 = bullets->speed;
          fVar3 = (float10)fcos((float10)bullets->angle);
          fVar4 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar3 * (float10)fVar5);
          (bullets->velocity).y = (float)(fVar4 * (float10)fVar5);
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
            (uVar2 = Rng::GetRandomU16(&g_Rng), (uVar2 & 3) == 0)))) {
          bullets->color = 5;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)bullets,
                     (int)(bullets->vms).vm0.anotherSpriteNumber + (int)(short)bullets->color);
          fVar5 = (bullets->pos).x - g_Player.position.x;
          fVar1 = (bullets->pos).y - g_Player.position.y;
          fVar3 = (float10)FUN_0045bc34((double)(fVar5 * fVar5 + fVar1 * fVar1));
          pfVar6 = (float *)(float)fVar3;
          if ((float)pfVar6 <= 128.0) {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            Player::FUN_00428680(&g_Player,(float10 *)&bullets->pos,pfVar6);
            bullets->angle =
                 (float)(extraout_ST0_00 + (float10)1.570796 + (float10)(fVar5 * 6.283185));
          }
          else {
            fVar5 = Rng::GetRandomF32ZeroToOne(&g_Rng);
            bullets->angle = fVar5 * 6.283185;
          }
          fVar5 = bullets->speed;
          fVar3 = (float10)fcos((float10)bullets->angle);
          fVar4 = (float10)fsin((float10)bullets->angle);
          (bullets->velocity).x = (float)(fVar3 * (float10)fVar5);
          (bullets->velocity).y = (float)(fVar4 * (float10)fVar5);
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

