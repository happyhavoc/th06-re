
undefined4 __thiscall
BulletManager::SetBulletAngle
          (BulletManager *this,EnemyBulletShooter *bulletProps,uint bulletIdx1,int bulletIdx2,
          float angle)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  undefined4 uVar4;
  int iVar5;
  BulletTypeVms *pBVar6;
  AnmVm *pAVar7;
  Bullet *pBVar8;
  AnmVm *pAVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float bulletAngle;
  Bullet *bullet;
  int local_c;
  float local_8;
  
  bullet = this->bullets + this->next_bullet_index;
  for (local_c = 0; local_c < 0x280; local_c = local_c + 1) {
    this->next_bullet_index = this->next_bullet_index + 1;
    if (0x27f < this->next_bullet_index) {
      this->next_bullet_index = 0;
    }
    if (bullet->state == 0) break;
    bullet = bullet + 1;
    if (this->next_bullet_index == 0) {
      bullet = this->bullets;
    }
  }
  if (local_c < 0x280) {
    bulletAngle = 0.0;
    local_8 = bulletProps->speed1 -
              ((bulletProps->speed1 - bulletProps->speed2) * (float)bulletIdx2) /
              (float)(int)(short)bulletProps->count2;
    switch(bulletProps->aim_mode) {
    case 0:
    case 1:
      if ((bulletProps->count1 & 1) == 0) {
        bulletAngle = bulletProps->angle2 * 0.5 + (float)((int)bulletIdx1 / 2) * bulletProps->angle2
        ;
      }
      else {
        bulletAngle = (float)((int)(bulletIdx1 + 1) / 2) * bulletProps->angle2;
      }
      bulletAngle = bulletAngle + 0.0;
      if ((bulletIdx1 & 1) != 0) {
        bulletAngle = bulletAngle * -1.0;
      }
      if (bulletProps->aim_mode == 0) {
        bulletAngle = bulletAngle + angle;
      }
      bulletAngle = bulletAngle + bulletProps->angle1;
      break;
    case 2:
      bulletAngle = angle + 0.0;
    case 3:
      bulletAngle = (float)bulletIdx2 * bulletProps->angle2 + bulletProps->angle1 +
                    ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 +
                    bulletAngle;
      break;
    case 4:
      bulletAngle = angle + 0.0;
    case 5:
      bulletAngle = ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 +
                    3.141593 / (float)(int)(short)bulletProps->count1 + bulletAngle +
                    bulletProps->angle1;
      break;
    case 6:
      fVar12 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar11 * (fVar12 - fVar2) + bulletProps->angle2;
      break;
    case 7:
      fVar12 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar11 * (fVar12 - fVar2) + bulletProps->speed2;
      bulletAngle = (float)bulletIdx2 * bulletProps->angle2 + bulletProps->angle1 +
                    ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 + 0.0;
      break;
    case 8:
      fVar12 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar11 * (fVar12 - fVar2) + bulletProps->angle2;
      fVar12 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar11 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar11 * (fVar12 - fVar2) + bulletProps->speed2;
    }
    bullet->state = 1;
    bullet->field20_0x5c2 = 1;
    bullet->speed = local_8;
    fVar12 = AddNormalizeAngle(bulletAngle,0.0);
    bullet->angle = fVar12;
    (bullet->pos).x = (bulletProps->position).x;
    (bullet->pos).y = (bulletProps->position).y;
    (bullet->pos).z = (bulletProps->position).z;
    (bullet->pos).z = 0.1;
    fVar3 = (float10)fcos((float10)bullet->angle);
    fVar10 = (float10)fsin((float10)bullet->angle);
    (bullet->velocity).x = (float)(fVar3 * (float10)local_8);
    (bullet->velocity).y = (float)(fVar10 * (float10)local_8);
    bullet->ex_flags = *(ushort *)&bulletProps->flags;
    bullet->color = bulletProps->color;
    pBVar6 = this->bullet_type_templates + (short)bulletProps->sprite;
    pBVar8 = bullet;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pBVar8->vms).vm0.rotation.x = (pBVar6->vm0).rotation.x;
      pBVar6 = (BulletTypeVms *)&(pBVar6->vm0).rotation.y;
      pBVar8 = (Bullet *)&(pBVar8->vms).vm0.rotation.y;
    }
    pAVar7 = &this->bullet_type_templates[(short)bulletProps->sprite].spawn_effect_short_with_memset
    ;
    pAVar9 = &(bullet->vms).spawn_effect_short_with_memset;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pAVar9->rotation).x = (pAVar7->rotation).x;
      pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
      pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
    }
    pfVar1 = &this->bullet_type_templates[(short)bulletProps->sprite].field5_0x550;
    (bullet->vms).field5_0x550 = *pfVar1;
    (bullet->vms).field6_0x554 = pfVar1[1];
    *(float *)&(bullet->vms).field_0x558 = pfVar1[2];
    (bullet->vms).field11_0x55c =
         this->bullet_type_templates[(short)bulletProps->sprite].field11_0x55c;
    (bullet->vms).field12_0x55d =
         this->bullet_type_templates[(short)bulletProps->sprite].field12_0x55d;
    if ((bullet->ex_flags & 2) == 0) {
      if ((bullet->ex_flags & 4) == 0) {
        if ((bullet->ex_flags & 8) != 0) {
          pAVar7 = &this->bullet_type_templates[(short)bulletProps->sprite].spawn_effect_long;
          pAVar9 = &(bullet->vms).spawn_effect_long;
          for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
            (pAVar9->rotation).x = (pAVar7->rotation).x;
            pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
            pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
          }
          fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
          if (fVar12 < 16.0 == (fVar12 == 16.0)) {
            fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
            if (fVar12 < 32.0 == (fVar12 == 32.0)) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->vms).spawn_effect_long,
                         (int)(bullet->vms).spawn_effect_long.spriteNumber +
                         (int)(short)bulletProps->color);
            }
            else if ((bullet->vms).vm0.anmFileIndex == 0x207) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->vms).spawn_effect_long,
                         (int)(bullet->vms).spawn_effect_long.spriteNumber + 1);
            }
            else {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->vms).spawn_effect_long,
                         (int)(bullet->vms).spawn_effect_long.spriteNumber +
                         UINT_ARRAY_00476480[(short)bulletProps->color]);
            }
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->vms).spawn_effect_long,
                       (int)(bullet->vms).spawn_effect_long.spriteNumber +
                       UINT_ARRAY_00476440[(short)bulletProps->color]);
          }
          bullet->state = 4;
        }
      }
      else {
        pAVar7 = &this->bullet_type_templates[(short)bulletProps->sprite].spawn_effect_medium;
        pAVar9 = &(bullet->vms).spawn_effect_medium;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pAVar9->rotation).x = (pAVar7->rotation).x;
          pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
          pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
        }
        fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
        if (fVar12 < 16.0 == (fVar12 == 16.0)) {
          fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
          if (fVar12 < 32.0 == (fVar12 == 32.0)) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->vms).spawn_effect_medium,
                       (int)(bullet->vms).spawn_effect_medium.spriteNumber +
                       (int)(short)bulletProps->color);
          }
          else if ((bullet->vms).vm0.anmFileIndex == 0x207) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->vms).spawn_effect_medium,
                       (int)(bullet->vms).spawn_effect_medium.spriteNumber + 1);
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->vms).spawn_effect_medium,
                       (int)(bullet->vms).spawn_effect_medium.spriteNumber +
                       UINT_ARRAY_00476480[(short)bulletProps->color]);
          }
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->vms).spawn_effect_medium,
                     (int)(bullet->vms).spawn_effect_medium.spriteNumber +
                     UINT_ARRAY_00476440[(short)bulletProps->color]);
        }
        bullet->state = 3;
      }
    }
    else {
      pAVar7 = &this->bullet_type_templates[(short)bulletProps->sprite].spawn_effect_short;
      pAVar9 = &(bullet->vms).spawn_effect_short;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pAVar9->rotation).x = (pAVar7->rotation).x;
        pAVar7 = (AnmVm *)&(pAVar7->rotation).y;
        pAVar9 = (AnmVm *)&(pAVar9->rotation).y;
      }
      fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
      if (fVar12 < 16.0 == (fVar12 == 16.0)) {
        fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
        if (fVar12 < 32.0 == (fVar12 == 32.0)) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->vms).spawn_effect_short,
                     (int)(bullet->vms).spawn_effect_short.spriteNumber +
                     (int)(short)bulletProps->color);
        }
        else if ((bullet->vms).vm0.anmFileIndex == 0x207) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->vms).spawn_effect_short,
                     (int)(bullet->vms).spawn_effect_short.spriteNumber + 1);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->vms).spawn_effect_short,
                     (int)(bullet->vms).spawn_effect_short.spriteNumber +
                     UINT_ARRAY_00476480[(short)bulletProps->color]);
        }
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->vms).spawn_effect_short,
                   (int)(bullet->vms).spawn_effect_short.spriteNumber +
                   UINT_ARRAY_00476440[(short)bulletProps->color]);
      }
      bullet->state = 2;
    }
    AnmManager::SetActiveSprite
              (g_AnmManager,(AnmVm *)bullet,
               (int)(bullet->vms).vm0.spriteNumber + (int)(short)bulletProps->color);
    fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
    if (fVar12 < 16.0 == (fVar12 == 16.0)) {
      fVar12 = ((bullet->vms).vm0.sprite)->heightPx;
      if (fVar12 < 32.0 == (fVar12 == 32.0)) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->vms).spawn_effect_short_with_memset,
                   (int)(bullet->vms).spawn_effect_short_with_memset.spriteNumber +
                   (int)(short)bulletProps->color);
      }
      else if ((bullet->vms).vm0.anmFileIndex == 0x207) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->vms).spawn_effect_short_with_memset,
                   (int)(bullet->vms).spawn_effect_short_with_memset.spriteNumber + 1);
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->vms).spawn_effect_short_with_memset,
                   (int)(bullet->vms).spawn_effect_short_with_memset.spriteNumber +
                   UINT_ARRAY_00476480[(short)bulletProps->color]);
      }
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&(bullet->vms).spawn_effect_short_with_memset,
                 (int)(bullet->vms).spawn_effect_short_with_memset.spriteNumber +
                 UINT_ARRAY_00476440[(short)bulletProps->color]);
    }
    if ((bullet->ex_flags & 0x10) == 0) {
      if ((bullet->ex_flags & 0x20) != 0) {
        bullet->ex_5_float_0 = bulletProps->ex_floats[0];
        bullet->ex_5_float_1 = bulletProps->ex_floats[1];
        bullet->ex_5_int_0 = bulletProps->ex_ints[0];
      }
    }
    else {
      if (bulletProps->ex_floats[1] < -999.0 == (bulletProps->ex_floats[1] == -999.0)) {
        fVar12 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletProps->ex_floats[1]);
        fVar10 = (float10)fsin((float10)bulletProps->ex_floats[1]);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar12);
        (bullet->ex_4_acceleration).y = (float)(fVar10 * (float10)fVar12);
      }
      else {
        fVar12 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletAngle);
        fVar10 = (float10)fsin((float10)bulletAngle);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar12);
        (bullet->ex_4_acceleration).y = (float)(fVar10 * (float10)fVar12);
      }
      if (bulletProps->ex_ints[0] < 1) {
        bullet->ex_5_int_0 = 99999;
      }
      else {
        bullet->ex_5_int_0 = bulletProps->ex_ints[0];
      }
      (bullet->ex_4_acceleration).z = 0.0;
    }
    if ((bullet->ex_flags & 0x1c0) != 0) {
      bullet->dir_change__rotation_arg = bulletProps->ex_floats[0];
      if (bulletProps->ex_floats[1] < 0.0) {
        bullet->dir_change__speed_arg = local_8;
      }
      else {
        bullet->dir_change__speed_arg = bulletProps->ex_floats[1];
      }
      bullet->dir_change__interval = bulletProps->ex_ints[0];
      bullet->dir_change__max_times = bulletProps->ex_ints[1];
      bullet->dir_change__num_times = 0;
    }
    if ((bullet->ex_flags & 0xc00) != 0) {
      if (bulletProps->ex_floats[0] < 0.0) {
        bullet->dir_change__speed_arg = local_8;
      }
      else {
        bullet->dir_change__speed_arg = bulletProps->ex_floats[0];
      }
      bullet->dir_change__max_times = bulletProps->ex_ints[0];
      bullet->dir_change__num_times = 0;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

