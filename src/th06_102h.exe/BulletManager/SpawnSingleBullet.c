
undefined4 __thiscall
BulletManager::SpawnSingleBullet
          (BulletManager *this,EnemyBulletShooter *bulletProps,uint bulletIdx1,int bulletIdx2,
          float angle)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float10 fVar3;
  undefined4 uVar4;
  int iVar5;
  BulletTypeSprites *pBVar6;
  AnmVm *from;
  Bullet *pBVar7;
  AnmVm *to;
  float10 fVar8;
  float fVar9;
  float fVar10;
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
      fVar10 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar9 * (fVar10 - fVar2) + bulletProps->angle2;
      break;
    case 7:
      fVar10 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar9 * (fVar10 - fVar2) + bulletProps->speed2;
      bulletAngle = (float)bulletIdx2 * bulletProps->angle2 + bulletProps->angle1 +
                    ((float)bulletIdx1 * 6.283185) / (float)(int)(short)bulletProps->count1 + 0.0;
      break;
    case 8:
      fVar10 = bulletProps->angle1;
      fVar2 = bulletProps->angle2;
      fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      bulletAngle = fVar9 * (fVar10 - fVar2) + bulletProps->angle2;
      fVar10 = bulletProps->speed1;
      fVar2 = bulletProps->speed2;
      fVar9 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_8 = fVar9 * (fVar10 - fVar2) + bulletProps->speed2;
    }
    bullet->state = 1;
    bullet->unk_5c2 = 1;
    bullet->speed = local_8;
    fVar10 = AddNormalizeAngle(bulletAngle,0.0);
    bullet->angle = fVar10;
    (bullet->pos).x = (bulletProps->position).x;
    (bullet->pos).y = (bulletProps->position).y;
    (bullet->pos).z = (bulletProps->position).z;
    (bullet->pos).z = 0.1;
    fVar3 = (float10)fcos((float10)bullet->angle);
    fVar8 = (float10)fsin((float10)bullet->angle);
    (bullet->velocity).x = (float)(fVar3 * (float10)local_8);
    (bullet->velocity).y = (float)(fVar8 * (float10)local_8);
    bullet->ex_flags = *(ushort *)&bulletProps->flags;
    bullet->color = bulletProps->color;
    pBVar6 = this->bullet_type_templates + (short)bulletProps->sprite;
    pBVar7 = bullet;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (pBVar7->sprites).bulletSprite.rotation.x = (pBVar6->bulletSprite).rotation.x;
      pBVar6 = (BulletTypeSprites *)&(pBVar6->bulletSprite).rotation.y;
      pBVar7 = (Bullet *)&(pBVar7->sprites).bulletSprite.rotation.y;
    }
    from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectDonut;
    to = &(bullet->sprites).spriteSpawnEffectDonut;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      (to->rotation).x = (from->rotation).x;
      from = (AnmVm *)&(from->rotation).y;
      to = (AnmVm *)&(to->rotation).y;
    }
    pDVar1 = &this->bullet_type_templates[(short)bulletProps->sprite].grazeSize;
    (bullet->sprites).grazeSize.x = pDVar1->x;
    (bullet->sprites).grazeSize.y = pDVar1->y;
    (bullet->sprites).grazeSize.z = pDVar1->z;
    (bullet->sprites).unk_55c = this->bullet_type_templates[(short)bulletProps->sprite].unk_55c;
    (bullet->sprites).height = this->bullet_type_templates[(short)bulletProps->sprite].height;
    if ((bullet->ex_flags & 2) == 0) {
      if ((bullet->ex_flags & 4) == 0) {
        if ((bullet->ex_flags & 8) != 0) {
          from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectSlow;
          to = &(bullet->sprites).spriteSpawnEffectSlow;
          for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
            (to->rotation).x = (from->rotation).x;
            from = (AnmVm *)&(from->rotation).y;
            to = (AnmVm *)&(to->rotation).y;
          }
          fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
          if (fVar10 < 16.0 == (fVar10 == 16.0)) {
            fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
            if (fVar10 < 32.0 == (fVar10 == 32.0)) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                         (int)(short)bulletProps->color);
            }
            else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex + 1);
            }
            else {
              AnmManager::SetActiveSprite
                        (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                         (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                         UINT_ARRAY_00476480[(short)bulletProps->color]);
            }
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectSlow,
                       (int)(bullet->sprites).spriteSpawnEffectSlow.activeSpriteIndex +
                       UINT_ARRAY_00476440[(short)bulletProps->color]);
          }
          bullet->state = 4;
        }
      }
      else {
        from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectNormal;
        to = &(bullet->sprites).spriteSpawnEffectNormal;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          (to->rotation).x = (from->rotation).x;
          from = (AnmVm *)&(from->rotation).y;
          to = (AnmVm *)&(to->rotation).y;
        }
        fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
        if (fVar10 < 16.0 == (fVar10 == 16.0)) {
          fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
          if (fVar10 < 32.0 == (fVar10 == 32.0)) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                       (int)(short)bulletProps->color);
          }
          else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex + 1);
          }
          else {
            AnmManager::SetActiveSprite
                      (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                       (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                       UINT_ARRAY_00476480[(short)bulletProps->color]);
          }
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectNormal,
                     (int)(bullet->sprites).spriteSpawnEffectNormal.activeSpriteIndex +
                     UINT_ARRAY_00476440[(short)bulletProps->color]);
        }
        bullet->state = 3;
      }
    }
    else {
      from = &this->bullet_type_templates[(short)bulletProps->sprite].spriteSpawnEffectFast;
      to = &(bullet->sprites).spriteSpawnEffectFast;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        (to->rotation).x = (from->rotation).x;
        from = (AnmVm *)&(from->rotation).y;
        to = (AnmVm *)&(to->rotation).y;
      }
      fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
      if (fVar10 < 16.0 == (fVar10 == 16.0)) {
        fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
        if (fVar10 < 32.0 == (fVar10 == 32.0)) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                     (int)(short)bulletProps->color);
        }
        else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex + 1);
        }
        else {
          AnmManager::SetActiveSprite
                    (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                     (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                     UINT_ARRAY_00476480[(short)bulletProps->color]);
        }
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectFast,
                   (int)(bullet->sprites).spriteSpawnEffectFast.activeSpriteIndex +
                   UINT_ARRAY_00476440[(short)bulletProps->color]);
      }
      bullet->state = 2;
    }
    AnmManager::SetActiveSprite
              (g_AnmManager,(AnmVm *)bullet,
               (int)(bullet->sprites).bulletSprite.activeSpriteIndex +
               (int)(short)bulletProps->color);
    fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
    if (fVar10 < 16.0 == (fVar10 == 16.0)) {
      fVar10 = ((bullet->sprites).bulletSprite.sprite)->heightPx;
      if (fVar10 < 32.0 == (fVar10 == 32.0)) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
                   (int)(short)bulletProps->color);
      }
      else if ((bullet->sprites).bulletSprite.anmFileIndex == 0x207) {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex + 1);
      }
      else {
        AnmManager::SetActiveSprite
                  (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                   (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
                   UINT_ARRAY_00476480[(short)bulletProps->color]);
      }
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&(bullet->sprites).spriteSpawnEffectDonut,
                 (int)(bullet->sprites).spriteSpawnEffectDonut.activeSpriteIndex +
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
        fVar10 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletProps->ex_floats[1]);
        fVar8 = (float10)fsin((float10)bulletProps->ex_floats[1]);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar10);
        (bullet->ex_4_acceleration).y = (float)(fVar8 * (float10)fVar10);
      }
      else {
        fVar10 = bulletProps->ex_floats[0];
        fVar3 = (float10)fcos((float10)bulletAngle);
        fVar8 = (float10)fsin((float10)bulletAngle);
        (bullet->ex_4_acceleration).x = (float)(fVar3 * (float10)fVar10);
        (bullet->ex_4_acceleration).y = (float)(fVar8 * (float10)fVar10);
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

