
void Enemy::ExInsStageXFunc15(Enemy *param_1,AnmRawInstr *param_2)

{
  float10 fVar1;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int local_7c;
  Bullet *bullets;
  Bullet *local_68;
  int local_64;
  int anm_vm_var3;
  undefined4 local_5c [22];
  
  anm_vm_var3 = 0;
  bullets = g_BulletManager.bullets;
  puVar4 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((bullets->state != 0) && (bullets->state != 5)) &&
        ((bullets->sprites).bulletSprite.sprite != (AnmLoadedSprite *)0x0)) &&
       (30.0 <= ((bullets->sprites).bulletSprite.sprite)->heightPx)) {
      anm_vm_var3 = anm_vm_var3 + 1;
      dVar4 = atan2((double)((bullets->pos).y - (param_1->position).y),
                    (double)((bullets->pos).x - (param_1->position).x));
      local_68 = g_BulletManager.bullets;
      for (local_7c = 0; local_7c < 0x280; local_7c = local_7c + 1) {
        if ((((local_68->state != 0) && (local_68->state != 5)) &&
            (((local_68->sprites).bulletSprite.sprite != (AnmLoadedSprite *)0x0 &&
             ((fVar3 = ((local_68->sprites).bulletSprite.sprite)->heightPx,
              fVar3 < 30.0 != NAN(fVar3) && (NAN(local_68->speed) != (local_68->speed == 0.0)))))))
           && (fVar3 = sqrt(SUB84((double)(((local_68->pos).x - (bullets->pos).x) *
                                           ((local_68->pos).x - (bullets->pos).x) +
                                          ((local_68->pos).y - (bullets->pos).y) *
                                          ((local_68->pos).y - (bullets->pos).y)),0)),
              fVar3 < 64.0 != NAN(fVar3))) {
          local_68->ex_flags = local_68->ex_flags | 0x10;
          local_68->speed = 0.01;
          (local_68->timer).current = 0;
          (local_68->timer).subFrame = 0.0;
          (local_68->timer).previous = -999;
          local_68->ex_5_int_0 = 0x78;
          dVar5 = atan2((double)((local_68->pos).y - (param_1->position).y),
                        (double)((local_68->pos).x - (param_1->position).x));
          local_68->angle = ((float)dVar5 - (float)dVar4) * 2.2 + (float)dVar4;
          fVar1 = (float10)fcos((float10)local_68->angle);
          fVar2 = (float10)fsin((float10)local_68->angle);
          (local_68->ex_4_acceleration).x = (float)(fVar1 * (float10)0.01);
          (local_68->ex_4_acceleration).y = (float)(fVar2 * (float10)0.01);
          local_68->color = local_68->color + 1;
          AnmManager::SetActiveSprite
                    (g_AnmManager,(AnmVm *)local_68,
                     (int)(local_68->sprites).bulletSprite.baseSpriteIndex +
                     (int)(short)local_68->color);
        }
        local_68 = local_68 + 1;
      }
    }
    bullets = bullets + 1;
  }
  ExInsStage6XFunc10(param_1,param_2);
  (param_1->current_context).var3 = anm_vm_var3;
  return;
}

